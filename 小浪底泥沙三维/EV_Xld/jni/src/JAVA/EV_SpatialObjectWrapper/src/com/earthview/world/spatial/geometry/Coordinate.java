package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 坐标点类，用于存储坐标点X,Y,Z以及M值。
 */
public class Coordinate extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CCoordinate", new CoordinateClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JCCoordinateProxy", new CoordinateClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Coordinate() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCoordinateProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Coordinate".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 参数构造函数
	 * @param x 坐标轴X值
	 * @param y 坐标轴Y值
	 */
	public Coordinate(double x, double y) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		Create("JCCoordinateProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Coordinate".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 参数构造函数
	 * @param x 坐标轴X值
	 * @param y 坐标轴Y值
	 * @param z 坐标轴Z值
	 */
	public Coordinate(double x, double y, double z) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer zPtr = new BasePointer(z);
		list.add("z", zPtr.get());
		Create("JCCoordinateProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Coordinate".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 参数构造函数
	 * @param x 坐标轴X值
	 * @param y 坐标轴Y值
	 * @param z 坐标轴Z值
	 * @param m 坐标轴M值
	 */
	public Coordinate(double x, double y, double z, double m) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer zPtr = new BasePointer(z);
		list.add("z", zPtr.get());
		BasePointer mPtr = new BasePointer(m);
		list.add("m", mPtr.get());
		Create("JCCoordinateProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Coordinate".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 默认拷贝构造函数
	 * @param  
	 */
	public Coordinate(com.earthview.world.spatial.geometry.Coordinate obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("JCCoordinateProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Coordinate".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CCoordinate(long pNativeObject, long obj);
	/**
	 * 默认拷贝构造函数,addedbywangwei2013-10-17
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Coordinate OperatorAssign(com.earthview.world.spatial.geometry.Coordinate obj)
	{
		long objParamValue = obj.nativeObject.pointer;
		long returnValue = OperatorAssign_CCoordinate(this.nativeObject.pointer, objParamValue);
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private double getX_void(long pNativeObject);
	/**
	 * 获取坐标轴X值
	 * @param  
	 * @return X值
	 */
	public double getX()
	{
		double returnValue = getX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置坐标轴X值
	 * @param value X值
	 */
	public void setX(double value)
	{
		double valueParamValue = value;
		setX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getY_void(long pNativeObject);
	/**
	 * 获取坐标轴Y值
	 * @param  
	 * @return Y值
	 */
	public double getY()
	{
		double returnValue = getY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置坐标轴Y值
	 * @param value Y值
	 */
	public void setY(double value)
	{
		double valueParamValue = value;
		setY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getZ_void(long pNativeObject);
	/**
	 * 获取坐标轴Z值
	 * @param  
	 * @return Z值
	 */
	public double getZ()
	{
		double returnValue = getZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setZ_ev_real64(long pNativeObject, double value);
	/**
	 * 设置坐标轴Z值
	 * @param value Z值
	 */
	public void setZ(double value)
	{
		double valueParamValue = value;
		setZ_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getM_void(long pNativeObject);
	/**
	 * 获取坐标轴M值
	 * @param  
	 * @return M值
	 */
	public double getM()
	{
		double returnValue = getM_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setM_ev_real64(long pNativeObject, double value);
	/**
	 * 设置坐标轴M值
	 * @param value M值
	 */
	public void setM(double value)
	{
		double valueParamValue = value;
		setM_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	protected  double distance_CCoordinate_callback(long coord)
	{
		com.earthview.world.spatial.geometry.Coordinate coordParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		coordParamValue.setDelegate(true);
		coordParamValue.setInstancePointer(new InstancePointer(coord));
		IClassFactory coordParamValueClassFactory = GlobalClassFactoryMap.get(coordParamValue.getCppInstanceTypeName());
		if (coordParamValueClassFactory != null)
		{
			coordParamValue.setDelegate(true);
			coordParamValue = (com.earthview.world.spatial.geometry.Coordinate)coordParamValueClassFactory.create();
			coordParamValue.setDelegate(true);
			coordParamValue.setInstancePointer(new InstancePointer(coord));
		}
		double returnValue = distance(coordParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double distance_CCoordinate(long pNativeObject, long coord);
	/**
	 * 计算两点间距离
	 * @param coord 指定坐标点
	 * @return 两点间距离
	 */
	public double distance(com.earthview.world.spatial.geometry.Coordinate coord)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double returnValue = distance_CCoordinate(this.nativeObject.pointer, coordParamValue);
		return returnValue;
	}
	native private double distance_CCoordinate_NoVirtual(long pNativeObject, long coord);
	protected double distance_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double returnValue = distance_CCoordinate_NoVirtual(this.nativeObject.pointer, coordParamValue);
		return returnValue;
	}

	protected  double distanceOnPlane_CCoordinate_callback(long coord)
	{
		com.earthview.world.spatial.geometry.Coordinate coordParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		coordParamValue.setDelegate(true);
		coordParamValue.setInstancePointer(new InstancePointer(coord));
		IClassFactory coordParamValueClassFactory = GlobalClassFactoryMap.get(coordParamValue.getCppInstanceTypeName());
		if (coordParamValueClassFactory != null)
		{
			coordParamValue.setDelegate(true);
			coordParamValue = (com.earthview.world.spatial.geometry.Coordinate)coordParamValueClassFactory.create();
			coordParamValue.setDelegate(true);
			coordParamValue.setInstancePointer(new InstancePointer(coord));
		}
		double returnValue = distanceOnPlane(coordParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double distanceOnPlane_CCoordinate(long pNativeObject, long coord);
	/**
	 * 计算两点间在坐标XY上的投影距离
	 * @param coord 指定坐标点
	 * @return 两点间的投影距离
	 */
	public double distanceOnPlane(com.earthview.world.spatial.geometry.Coordinate coord)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double returnValue = distanceOnPlane_CCoordinate(this.nativeObject.pointer, coordParamValue);
		return returnValue;
	}
	native private double distanceOnPlane_CCoordinate_NoVirtual(long pNativeObject, long coord);
	protected double distanceOnPlane_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double returnValue = distanceOnPlane_CCoordinate_NoVirtual(this.nativeObject.pointer, coordParamValue);
		return returnValue;
	}

	protected  double distanceXY_CCoordinate_callback(long coord)
	{
		com.earthview.world.spatial.geometry.Coordinate coordParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		coordParamValue.setDelegate(true);
		coordParamValue.setInstancePointer(new InstancePointer(coord));
		IClassFactory coordParamValueClassFactory = GlobalClassFactoryMap.get(coordParamValue.getCppInstanceTypeName());
		if (coordParamValueClassFactory != null)
		{
			coordParamValue.setDelegate(true);
			coordParamValue = (com.earthview.world.spatial.geometry.Coordinate)coordParamValueClassFactory.create();
			coordParamValue.setDelegate(true);
			coordParamValue.setInstancePointer(new InstancePointer(coord));
		}
		double returnValue = distanceXY(coordParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double distanceXY_CCoordinate(long pNativeObject, long coord);
	/**
	 * 计算两点间在坐标XY上的投影距离,等同于distanceOnPlane
	 * @param coord 指定坐标点
	 * @return 两点间的投影距离
	 */
	public double distanceXY(com.earthview.world.spatial.geometry.Coordinate coord)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double returnValue = distanceXY_CCoordinate(this.nativeObject.pointer, coordParamValue);
		return returnValue;
	}
	native private double distanceXY_CCoordinate_NoVirtual(long pNativeObject, long coord);
	protected double distanceXY_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double returnValue = distanceXY_CCoordinate_NoVirtual(this.nativeObject.pointer, coordParamValue);
		return returnValue;
	}

	protected  boolean ev_equals_CCoordinate_ev_real64_callback(long coord, double tolerance)
	{
		com.earthview.world.spatial.geometry.Coordinate coordParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		coordParamValue.setDelegate(true);
		coordParamValue.setInstancePointer(new InstancePointer(coord));
		IClassFactory coordParamValueClassFactory = GlobalClassFactoryMap.get(coordParamValue.getCppInstanceTypeName());
		if (coordParamValueClassFactory != null)
		{
			coordParamValue.setDelegate(true);
			coordParamValue = (com.earthview.world.spatial.geometry.Coordinate)coordParamValueClassFactory.create();
			coordParamValue.setDelegate(true);
			coordParamValue.setInstancePointer(new InstancePointer(coord));
		}
		double toleranceParamValue = tolerance;
		boolean returnValue = ev_equals(coordParamValue, toleranceParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean ev_equals_CCoordinate_ev_real64(long pNativeObject, long coord, double tolerance);
	/**
	 * /判断两点位置是否相等/
	 * @param coord 指定点
	 * @param tolerance 指定误差范围
	 * @return 位置相等，则返回true;否则，返回false
	 */
	public boolean ev_equals(com.earthview.world.spatial.geometry.Coordinate coord, double tolerance)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		boolean returnValue = ev_equals_CCoordinate_ev_real64(this.nativeObject.pointer, coordParamValue, toleranceParamValue);
		return returnValue;
	}
	native private boolean ev_equals_CCoordinate_ev_real64_NoVirtual(long pNativeObject, long coord, double tolerance);
	protected boolean ev_equals_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord, double tolerance)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		boolean returnValue = ev_equals_CCoordinate_ev_real64_NoVirtual(this.nativeObject.pointer, coordParamValue, toleranceParamValue);
		return returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geometry.Coordinate returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 * @return 坐标点
	 */
	public com.earthview.world.spatial.geometry.Coordinate ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Coordinate ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}

	protected  long clone2_void_callback()
	{
		com.earthview.world.spatial.geometry.Coordinate returnValue = clone2();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long clone2_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 * @return 坐标点
	 */
	public com.earthview.world.spatial.geometry.Coordinate clone2()
	{
		long returnValue = clone2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private long clone2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Coordinate clone2_NoVirtual()
	{
		long returnValue = clone2_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}

	protected  String ev_toString_EVCoordinateType_callback(int type)
	{
		com.earthview.world.spatial.geometry.EVCoordinateType typeParamValue = com.earthview.world.spatial.geometry.EVCoordinateType.toEnum(type);
		String returnValue = ev_toString(typeParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String ev_toString_EVCoordinateType(long pNativeObject, int type);
	/**
	 * 获取指定坐标点类型的字符串形式，如果type==0，则默认为CT_XY。
	 * @param type 坐标点类型
	 * @return 坐标点字符串，用“,”隔开
	 */
	public String ev_toString(com.earthview.world.spatial.geometry.EVCoordinateType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = ev_toString_EVCoordinateType(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private String ev_toString_EVCoordinateType_NoVirtual(long pNativeObject, int type);
	protected String ev_toString_NoVirtual(com.earthview.world.spatial.geometry.EVCoordinateType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = ev_toString_EVCoordinateType_NoVirtual(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}

	protected  void toStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		toStream(streamParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 把坐标点序列化数据流。
	 * @param stream 序列化流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  void offset_ev_real64_ev_real64_ev_real64_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		offset(xParamValue, yParamValue, zParamValue);
	}

	native private void offset_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	/**
	 * 平移几何体，默认提供中心点平移
	 * @param x X轴方向平移值
	 * @param y Y轴方向平移值
	 * @param z Z轴方向平移值
	 */
	public void offset(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		offset_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void offset_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void offset_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		offset_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xAngleParamValue = xAngle;
		double yAngleParamValue = yAngle;
		double zAngleParamValue = zAngle;
		rotate(xRefParamValue, yRefParamValue, zRefParamValue, xAngleParamValue, yAngleParamValue, zAngleParamValue);
	}

	native private void rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle);
	/**
	 * 旋转几何体，默认提供包围盒中心点旋转
	 * @param xRef 旋转参考点X值
	 * @param yRef 旋转参考点Y值
	 * @param zRef 旋转参考点Z值
	 * @param x X轴方向旋转角度
	 * @param y Y轴方向旋转角度
	 * @param z Z轴方向旋转角度
	 */
	public void rotate(double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xAngleParamValue = xAngle;
		double yAngleParamValue = yAngle;
		double zAngleParamValue = zAngle;
		rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xAngleParamValue, yAngleParamValue, zAngleParamValue);
	}
	native private void rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle);
	protected void rotate_NoVirtual(double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xAngleParamValue = xAngle;
		double yAngleParamValue = yAngle;
		double zAngleParamValue = zAngle;
		rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xAngleParamValue, yAngleParamValue, zAngleParamValue);
	}

	protected  void scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double xRef, double yRef, double zRef, double x, double y, double z)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale(xRefParamValue, yRefParamValue, zRefParamValue, xParamValue, yParamValue, zParamValue);
	}

	native private void scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double xRef, double yRef, double zRef, double x, double y, double z);
	/**
	 * 旋转几何体，默认提供包围盒中心点缩放
	 * @param x X轴方向缩放比例，[-1,1]
	 * @param y Y轴方向缩放比例，[-1,1]
	 * @param z Z轴方向缩放比例，[-1,1]
	 */
	public void scale(double xRef, double yRef, double zRef, double x, double y, double z)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private void scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double xRef, double yRef, double zRef, double x, double y, double z);
	protected void scale_NoVirtual(double xRef, double yRef, double zRef, double x, double y, double z)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xParamValue, yParamValue, zParamValue);
	}

	protected  long mirror_CCoordinate_CCoordinate_callback(long coord1, long coord2)
	{
		com.earthview.world.spatial.geometry.Coordinate coord1ParamValue = (coord1 == 0L ? null : new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate));
		if(coord1ParamValue != null)
		{
		coord1ParamValue.setDelegate(true);
		coord1ParamValue.setInstancePointer(new InstancePointer(coord1));
		IClassFactory coord1ParamValueClassFactory = GlobalClassFactoryMap.get(coord1ParamValue.getCppInstanceTypeName());
		if (coord1ParamValueClassFactory != null)
		{
			coord1ParamValue.setDelegate(true);
			coord1ParamValue = (com.earthview.world.spatial.geometry.Coordinate)coord1ParamValueClassFactory.create();
			coord1ParamValue.setDelegate(true);
			coord1ParamValue.setInstancePointer(new InstancePointer(coord1));
		}
		}
		com.earthview.world.spatial.geometry.Coordinate coord2ParamValue = (coord2 == 0L ? null : new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate));
		if(coord2ParamValue != null)
		{
		coord2ParamValue.setDelegate(true);
		coord2ParamValue.setInstancePointer(new InstancePointer(coord2));
		IClassFactory coord2ParamValueClassFactory = GlobalClassFactoryMap.get(coord2ParamValue.getCppInstanceTypeName());
		if (coord2ParamValueClassFactory != null)
		{
			coord2ParamValue.setDelegate(true);
			coord2ParamValue = (com.earthview.world.spatial.geometry.Coordinate)coord2ParamValueClassFactory.create();
			coord2ParamValue.setDelegate(true);
			coord2ParamValue.setInstancePointer(new InstancePointer(coord2));
		}
		}
		com.earthview.world.spatial.geometry.Coordinate returnValue = mirror(coord1ParamValue, coord2ParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long mirror_CCoordinate_CCoordinate(long pNativeObject, long coord1, long coord2);
	public com.earthview.world.spatial.geometry.Coordinate mirror(com.earthview.world.spatial.geometry.Coordinate coord1, com.earthview.world.spatial.geometry.Coordinate coord2)
	{
		long coord1ParamValue = (coord1 == null ? 0L : coord1.nativeObject.pointer);
		long coord2ParamValue = (coord2 == null ? 0L : coord2.nativeObject.pointer);
		long returnValue = mirror_CCoordinate_CCoordinate(this.nativeObject.pointer, coord1ParamValue, coord2ParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private long mirror_CCoordinate_CCoordinate_NoVirtual(long pNativeObject, long coord1, long coord2);
	protected com.earthview.world.spatial.geometry.Coordinate mirror_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord1, com.earthview.world.spatial.geometry.Coordinate coord2)
	{
		long coord1ParamValue = (coord1 == null ? 0L : coord1.nativeObject.pointer);
		long coord2ParamValue = (coord2 == null ? 0L : coord2.nativeObject.pointer);
		long returnValue = mirror_CCoordinate_CCoordinate_NoVirtual(this.nativeObject.pointer, coord1ParamValue, coord2ParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}

	protected  long mirror2_CCoordinate_CCoordinate_callback(long coord1, long coord2)
	{
		com.earthview.world.spatial.geometry.Coordinate coord1ParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		coord1ParamValue.setDelegate(true);
		coord1ParamValue.setInstancePointer(new InstancePointer(coord1));
		IClassFactory coord1ParamValueClassFactory = GlobalClassFactoryMap.get(coord1ParamValue.getCppInstanceTypeName());
		if (coord1ParamValueClassFactory != null)
		{
			coord1ParamValue.setDelegate(true);
			coord1ParamValue = (com.earthview.world.spatial.geometry.Coordinate)coord1ParamValueClassFactory.create();
			coord1ParamValue.setDelegate(true);
			coord1ParamValue.setInstancePointer(new InstancePointer(coord1));
		}
		com.earthview.world.spatial.geometry.Coordinate coord2ParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		coord2ParamValue.setDelegate(true);
		coord2ParamValue.setInstancePointer(new InstancePointer(coord2));
		IClassFactory coord2ParamValueClassFactory = GlobalClassFactoryMap.get(coord2ParamValue.getCppInstanceTypeName());
		if (coord2ParamValueClassFactory != null)
		{
			coord2ParamValue.setDelegate(true);
			coord2ParamValue = (com.earthview.world.spatial.geometry.Coordinate)coord2ParamValueClassFactory.create();
			coord2ParamValue.setDelegate(true);
			coord2ParamValue.setInstancePointer(new InstancePointer(coord2));
		}
		com.earthview.world.spatial.geometry.Coordinate returnValue = mirror2(coord1ParamValue, coord2ParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long mirror2_CCoordinate_CCoordinate(long pNativeObject, long coord1, long coord2);
	public com.earthview.world.spatial.geometry.Coordinate mirror2(com.earthview.world.spatial.geometry.Coordinate coord1, com.earthview.world.spatial.geometry.Coordinate coord2)
	{
		long coord1ParamValue = coord1.nativeObject.pointer;
		long coord2ParamValue = coord2.nativeObject.pointer;
		long returnValue = mirror2_CCoordinate_CCoordinate(this.nativeObject.pointer, coord1ParamValue, coord2ParamValue);
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private long mirror2_CCoordinate_CCoordinate_NoVirtual(long pNativeObject, long coord1, long coord2);
	protected com.earthview.world.spatial.geometry.Coordinate mirror2_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord1, com.earthview.world.spatial.geometry.Coordinate coord2)
	{
		long coord1ParamValue = coord1.nativeObject.pointer;
		long coord2ParamValue = coord2.nativeObject.pointer;
		long returnValue = mirror2_CCoordinate_CCoordinate_NoVirtual(this.nativeObject.pointer, coord1ParamValue, coord2ParamValue);
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}

	public Coordinate(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Coordinate(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_distance_CCoordinate(long pNativeObject, String method);
	native protected void register_distanceOnPlane_CCoordinate(long pNativeObject, String method);
	native protected void register_distanceXY_CCoordinate(long pNativeObject, String method);
	native protected void register_ev_equals_CCoordinate_ev_real64(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_clone2_void(long pNativeObject, String method);
	native protected void register_ev_toString_EVCoordinateType(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_offset_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_mirror_CCoordinate_CCoordinate(long pNativeObject, String method);
	native protected void register_mirror2_CCoordinate_CCoordinate(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_distance_CCoordinate(this.nativeObject.pointer, "distance_CCoordinate_callback");
			this.register_distanceOnPlane_CCoordinate(this.nativeObject.pointer, "distanceOnPlane_CCoordinate_callback");
			this.register_distanceXY_CCoordinate(this.nativeObject.pointer, "distanceXY_CCoordinate_callback");
			this.register_ev_equals_CCoordinate_ev_real64(this.nativeObject.pointer, "ev_equals_CCoordinate_ev_real64_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_clone2_void(this.nativeObject.pointer, "clone2_void_callback");
			this.register_ev_toString_EVCoordinateType(this.nativeObject.pointer, "ev_toString_EVCoordinateType_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_offset_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "offset_ev_real64_ev_real64_ev_real64_callback");
			this.register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_mirror_CCoordinate_CCoordinate(this.nativeObject.pointer, "mirror_CCoordinate_CCoordinate_callback");
			this.register_mirror2_CCoordinate_CCoordinate(this.nativeObject.pointer, "mirror2_CCoordinate_CCoordinate_callback");
		}
	}
	
	public static Coordinate fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Coordinate obj = null;
 		if(baseObj instanceof Coordinate)
		{
			obj = (Coordinate)baseObj;
		} else {
			obj = new Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCoordinate");
			obj.increaseCast();
		}

		return obj;
	}
}
