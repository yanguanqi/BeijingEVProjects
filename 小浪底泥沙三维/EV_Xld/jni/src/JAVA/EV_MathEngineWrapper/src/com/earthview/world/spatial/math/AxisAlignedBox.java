package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 平行轴边框盒类定义了平行轴边框盒操作
 */
public class AxisAlignedBox extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CAxisAlignedBox", new AxisAlignedBoxClassFactory());
	}

	public enum Extent implements INativeEnum<Extent> {
		EXTENT_NULL(ExtentHelper.ENUM_VALUES[0]),
		EXTENT_FINITE(ExtentHelper.ENUM_VALUES[1]),
		EXTENT_INFINITE(ExtentHelper.ENUM_VALUES[2]);
		private int value;
		Extent(int i) {
			this.value = i;
		}
		public Extent getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Extent toEnum(int retval) {
			if(retval == EXTENT_NULL.value){
				return EXTENT_NULL;
			}
			else if(retval == EXTENT_FINITE.value){
				return EXTENT_FINITE;
			}
			else if(retval == EXTENT_INFINITE.value){
				return EXTENT_INFINITE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ExtentHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum CornerEnum implements INativeEnum<CornerEnum> {
		FAR_LEFT_BOTTOM(CornerEnumHelper.ENUM_VALUES[0]),
		FAR_LEFT_TOP(CornerEnumHelper.ENUM_VALUES[1]),
		FAR_RIGHT_TOP(CornerEnumHelper.ENUM_VALUES[2]),
		FAR_RIGHT_BOTTOM(CornerEnumHelper.ENUM_VALUES[3]),
		NEAR_RIGHT_BOTTOM(CornerEnumHelper.ENUM_VALUES[4]),
		NEAR_LEFT_BOTTOM(CornerEnumHelper.ENUM_VALUES[5]),
		NEAR_LEFT_TOP(CornerEnumHelper.ENUM_VALUES[6]),
		NEAR_RIGHT_TOP(CornerEnumHelper.ENUM_VALUES[7]);
		private int value;
		CornerEnum(int i) {
			this.value = i;
		}
		public CornerEnum getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CornerEnum toEnum(int retval) {
			if(retval == FAR_LEFT_BOTTOM.value){
				return FAR_LEFT_BOTTOM;
			}
			else if(retval == FAR_LEFT_TOP.value){
				return FAR_LEFT_TOP;
			}
			else if(retval == FAR_RIGHT_TOP.value){
				return FAR_RIGHT_TOP;
			}
			else if(retval == FAR_RIGHT_BOTTOM.value){
				return FAR_RIGHT_BOTTOM;
			}
			else if(retval == NEAR_RIGHT_BOTTOM.value){
				return NEAR_RIGHT_BOTTOM;
			}
			else if(retval == NEAR_LEFT_BOTTOM.value){
				return NEAR_LEFT_BOTTOM;
			}
			else if(retval == NEAR_LEFT_TOP.value){
				return NEAR_LEFT_TOP;
			}
			else if(retval == NEAR_RIGHT_TOP.value){
				return NEAR_RIGHT_TOP;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CornerEnumHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public AxisAlignedBox() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAxisAlignedBox", null);
	}

	/**
	 * 构造函数
	 * @param e 边框空间范围类型
	 */
	public AxisAlignedBox(com.earthview.world.spatial.math.AxisAlignedBox.Extent e) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ePtr = new BasePointer(e);
		list.add("e", ePtr.get());
		Create("CAxisAlignedBox", list);
	}

	/**
	 * 复制构造函数
	 * @param rkBox 平行轴边框盒对象
	 */
	public AxisAlignedBox(com.earthview.world.spatial.math.AxisAlignedBox rkBox) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rkBoxPtr = new BasePointer(rkBox);
		list.add("rkBox", rkBoxPtr.get());
		Create("CAxisAlignedBox", list);
	}

	/**
	 * 构造函数
	 * @param min 平行轴边框盒最小角坐标
	 * @param max 平行轴边框盒最大角坐标
	 */
	public AxisAlignedBox(com.earthview.world.spatial.math.Vector3 min, com.earthview.world.spatial.math.Vector3 max) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer minPtr = new BasePointer(min);
		list.add("min", minPtr.get());
		BasePointer maxPtr = new BasePointer(max);
		list.add("max", maxPtr.get());
		Create("CAxisAlignedBox", list);
	}

	/**
	 * 构造函数
	 * @param mx 平行轴边框盒最小角坐标x
	 * @param my 平行轴边框盒最小角坐标y
	 * @param mz 平行轴边框盒最小角坐标z
	 * @param Mx 平行轴边框盒最大角坐标x
	 * @param My 平行轴边框盒最大角坐标y
	 * @param Mz 平行轴边框盒最大角坐标z
	 */
	public AxisAlignedBox(double mx, double my, double mz, double Mx, double My, double Mz) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer mxPtr = new BasePointer(mx);
		list.add("mx", mxPtr.get());
		BasePointer myPtr = new BasePointer(my);
		list.add("my", myPtr.get());
		BasePointer mzPtr = new BasePointer(mz);
		list.add("mz", mzPtr.get());
		BasePointer MxPtr = new BasePointer(Mx);
		list.add("Mx", MxPtr.get());
		BasePointer MyPtr = new BasePointer(My);
		list.add("My", MyPtr.get());
		BasePointer MzPtr = new BasePointer(Mz);
		list.add("Mz", MzPtr.get());
		Create("CAxisAlignedBox", list);
	}

	native private long OperatorAssign_CAxisAlignedBox(long pNativeObject, long rhs);
	/**
	 * 重载"="操作符
	 * @param rhs 源边框盒对象
	 * @return 赋值结果
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox OperatorAssign(com.earthview.world.spatial.math.AxisAlignedBox rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_CAxisAlignedBox(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private int toDataStream_CDataStream(long pNativeObject, long dataStream);
	/**
	 * 序列化到数据流
	 * @param dataStream 数据流
	 * @return 序列化到流的字节数
	 */
	public int toDataStream(com.earthview.world.core.DataStream dataStream)
	{
		long dataStreamParamValue = dataStream.nativeObject.pointer;
		int returnValue = toDataStream_CDataStream(this.nativeObject.pointer, dataStreamParamValue);
		return returnValue;
	}
	native private int fromDataStream_CDataStream(long pNativeObject, long dataStream);
	/**
	 * 从数据流反序列化
	 * @param dataStream 数据流
	 * @return 反序列化的字节数
	 */
	public int fromDataStream(com.earthview.world.core.DataStream dataStream)
	{
		long dataStreamParamValue = dataStream.nativeObject.pointer;
		int returnValue = fromDataStream_CDataStream(this.nativeObject.pointer, dataStreamParamValue);
		return returnValue;
	}
	native private long getMinimum_void(long pNativeObject);
	/**
	 * 获得边框盒最小角坐标
	 * @param  
	 * @return 最小角坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getMinimum()
	{
		long returnValue = getMinimum_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getMaximum_void(long pNativeObject);
	/**
	 * 获得边框盒最大角坐标
	 * @param  
	 * @return 最大角坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getMaximum()
	{
		long returnValue = getMaximum_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setMinimum_CVector3(long pNativeObject, long vec);
	/**
	 * 设置边框盒最小角坐标
	 * @param vec 三维坐标
	 */
	public void setMinimum(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setMinimum_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private void setMinimum_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置边框盒最小角坐标
	 * @param x 三维坐标x
	 * @param y 三维坐标y
	 * @param z 三维坐标z
	 */
	public void setMinimum(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setMinimum_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setMinimumX_Real(long pNativeObject, double x);
	/**
	 * 设置边框盒最小角坐标x
	 * @param x 三维坐标x
	 */
	public void setMinimumX(double x)
	{
		double xParamValue = x;
		setMinimumX_Real(this.nativeObject.pointer, xParamValue);
	}
	native private void setMinimumY_Real(long pNativeObject, double y);
	/**
	 * 设置边框盒最小角坐标y
	 * @param y 三维坐标y
	 */
	public void setMinimumY(double y)
	{
		double yParamValue = y;
		setMinimumY_Real(this.nativeObject.pointer, yParamValue);
	}
	native private void setMinimumZ_Real(long pNativeObject, double z);
	/**
	 * 设置边框盒最小角坐标
	 * @param z 三维坐标z
	 */
	public void setMinimumZ(double z)
	{
		double zParamValue = z;
		setMinimumZ_Real(this.nativeObject.pointer, zParamValue);
	}
	native private void setMaximum_CVector3(long pNativeObject, long vec);
	/**
	 * 设置边框盒最大角坐标
	 * @param vec 三维坐标
	 */
	public void setMaximum(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setMaximum_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private void setMaximum_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置边框盒最大角坐标
	 * @param x 三维坐标x
	 * @param y 三维坐标y
	 * @param z 三维坐标z
	 */
	public void setMaximum(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setMaximum_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setMaximumX_Real(long pNativeObject, double x);
	/**
	 * 设置边框盒最大角坐标
	 * @param x 三维坐标x
	 */
	public void setMaximumX(double x)
	{
		double xParamValue = x;
		setMaximumX_Real(this.nativeObject.pointer, xParamValue);
	}
	native private void setMaximumY_Real(long pNativeObject, double y);
	/**
	 * 设置边框盒最大角坐标
	 * @param y 三维坐标y
	 */
	public void setMaximumY(double y)
	{
		double yParamValue = y;
		setMaximumY_Real(this.nativeObject.pointer, yParamValue);
	}
	native private void setMaximumZ_Real(long pNativeObject, double z);
	/**
	 * 设置边框盒最大角坐标
	 * @param z 三维坐标z
	 */
	public void setMaximumZ(double z)
	{
		double zParamValue = z;
		setMaximumZ_Real(this.nativeObject.pointer, zParamValue);
	}
	native private void setExtents_CVector3_CVector3(long pNativeObject, long min, long max);
	/**
	 * 设置边框盒空间范围
	 * @param min 最小角三维坐标
	 * @param max 最大角三维坐标y
	 */
	public void setExtents(com.earthview.world.spatial.math.Vector3 min, com.earthview.world.spatial.math.Vector3 max)
	{
		long minParamValue = min.nativeObject.pointer;
		long maxParamValue = max.nativeObject.pointer;
		setExtents_CVector3_CVector3(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private void setExtents_Real_Real_Real_Real_Real_Real(long pNativeObject, double mx, double my, double mz, double Mx, double My, double Mz);
	/**
	 * 设置边框盒空间范围
	 * @param mx 平行轴边框盒最小角坐标x
	 * @param my 平行轴边框盒最小角坐标y
	 * @param mz 平行轴边框盒最小角坐标z
	 * @param Mx 平行轴边框盒最大角坐标x
	 * @param My 平行轴边框盒最大角坐标y
	 * @param Mz 平行轴边框盒最大角坐标z
	 */
	public void setExtents(double mx, double my, double mz, double Mx, double My, double Mz)
	{
		double mxParamValue = mx;
		double myParamValue = my;
		double mzParamValue = mz;
		double MxParamValue = Mx;
		double MyParamValue = My;
		double MzParamValue = Mz;
		setExtents_Real_Real_Real_Real_Real_Real(this.nativeObject.pointer, mxParamValue, myParamValue, mzParamValue, MxParamValue, MyParamValue, MzParamValue);
	}
	native private void getAllCorners_CVector3(long pNativeObject, long[] pCorner);
	/**
	 * 获得边框盒所有角坐标1------2/|/|/|/|5-----4||0---|--3|/|/|/|/6-----7
	 * @param  
	 * @return 边框盒所有角坐标指针
	 */
	public void getAllCorners(com.earthview.world.spatial.math.Vector3[] pCorner)
	{
		long[] pCornerParamValue = (pCorner == null ? null : ArrayUtils.convertToLongArray(pCorner));
		getAllCorners_CVector3(this.nativeObject.pointer, pCornerParamValue);
	}
	native private long getCorner_CornerEnum(long pNativeObject, int cornerToGet);
	/**
	 * 获得边框盒某个角坐标
	 * @param cornerToGet 边框盒角枚举
	 * @return 边框盒角坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getCorner(com.earthview.world.spatial.math.AxisAlignedBox.CornerEnum cornerToGet)
	{
		int cornerToGetParamValue = cornerToGet.getValue();
		long returnValue = getCorner_CornerEnum(this.nativeObject.pointer, cornerToGetParamValue);
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
	native private void merge_CAxisAlignedBox(long pNativeObject, long rhs);
	/**
	 * 融合边框盒
	 * @param rhs 边框盒对象
	 */
	public void merge(com.earthview.world.spatial.math.AxisAlignedBox rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		merge_CAxisAlignedBox(this.nativeObject.pointer, rhsParamValue);
	}
	native private void merge_CVector3(long pNativeObject, long point);
	/**
	 * 扩展边框盒，包含某个点在内
	 * @param point 三维点坐标
	 */
	public void merge(com.earthview.world.spatial.math.Vector3 point)
	{
		long pointParamValue = point.nativeObject.pointer;
		merge_CVector3(this.nativeObject.pointer, pointParamValue);
	}
	native private void transform_CMatrix4(long pNativeObject, long matrix);
	/**
	 * 变换边框盒
	 * @param matrix 变换矩阵
	 */
	public void transform(com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		transform_CMatrix4(this.nativeObject.pointer, matrixParamValue);
	}
	native private void transformAffine_CMatrix4(long pNativeObject, long m);
	/**
	 * 边框盒相似矩阵变换
	 * @param m 相似矩阵
	 */
	public void transformAffine(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		transformAffine_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private void setNull_void(long pNativeObject);
	/**
	 * 设置边框盒空间范围为0
	 * @param  
	 */
	public void setNull()
	{
		setNull_void(this.nativeObject.pointer);
	}
	native private boolean isNull_void(long pNativeObject);
	/**
	 * 判断边框盒空间范围是否为0
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean isNull()
	{
		boolean returnValue = isNull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFinite_void(long pNativeObject);
	/**
	 * 判断边框盒是否为有限空间范围
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean isFinite()
	{
		boolean returnValue = isFinite_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInfinite_void(long pNativeObject);
	/**
	 * 设置边框盒为无限空间范围
	 * @param  
	 */
	public void setInfinite()
	{
		setInfinite_void(this.nativeObject.pointer);
	}
	native private boolean isInfinite_void(long pNativeObject);
	/**
	 * 判断边框盒是否为无限空间范围
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean isInfinite()
	{
		boolean returnValue = isInfinite_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean intersects_CAxisAlignedBox(long pNativeObject, long b2);
	/**
	 * 判断边框盒是否与另一边框盒相交
	 * @param b2 另一边框盒
	 * @return 相交返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.AxisAlignedBox b2)
	{
		long b2ParamValue = b2.nativeObject.pointer;
		boolean returnValue = intersects_CAxisAlignedBox(this.nativeObject.pointer, b2ParamValue);
		return returnValue;
	}
	native private long intersection_CAxisAlignedBox(long pNativeObject, long b2);
	/**
	 * 计算边框盒是否与另一边框盒相交的空间范围
	 * @param b2 另一边框盒
	 * @return 相交重合的空间边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox intersection(com.earthview.world.spatial.math.AxisAlignedBox b2)
	{
		long b2ParamValue = b2.nativeObject.pointer;
		long returnValue = intersection_CAxisAlignedBox(this.nativeObject.pointer, b2ParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private double volume_void(long pNativeObject);
	/**
	 * 计算边框盒体积
	 * @param  
	 * @return 边框盒体积
	 */
	public double volume()
	{
		double returnValue = volume_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void scale_CVector3(long pNativeObject, long s);
	/**
	 * 缩放边框盒
	 * @param s 缩放向量
	 */
	public void scale(com.earthview.world.spatial.math.Vector3 s)
	{
		long sParamValue = s.nativeObject.pointer;
		scale_CVector3(this.nativeObject.pointer, sParamValue);
	}
	native private boolean intersects_CSphere(long pNativeObject, long s);
	/**
	 * 判断边框盒是否与球体相交
	 * @param s 球体对象
	 * @return 相交返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.Sphere s)
	{
		long sParamValue = s.nativeObject.pointer;
		boolean returnValue = intersects_CSphere(this.nativeObject.pointer, sParamValue);
		return returnValue;
	}
	native private boolean intersects_CPlane(long pNativeObject, long p);
	/**
	 * 判断边框盒是否与平面相交
	 * @param p 平面对象
	 * @return 相交返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		boolean returnValue = intersects_CPlane(this.nativeObject.pointer, pParamValue);
		return returnValue;
	}
	native private boolean intersects_CVector3(long pNativeObject, long v);
	/**
	 * 判断边框盒是否包含三维点坐标
	 * @param v 空间点坐标
	 * @return 包含返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		boolean returnValue = intersects_CVector3(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}
	native private long getCenter_void(long pNativeObject);
	/**
	 * 返回边框盒中心坐标
	 * @param  
	 * @return 边框盒中心坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getCenter()
	{
		long returnValue = getCenter_void(this.nativeObject.pointer);
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
	native private long getSize_void(long pNativeObject);
	/**
	 * 返回边框盒大小(对角线向量)
	 * @param  
	 * @return 边框盒大小
	 */
	public com.earthview.world.spatial.math.Vector3 getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
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
	native private long getHalfSize_void(long pNativeObject);
	/**
	 * 返回半边框盒大小(对角线向量)
	 * @param  
	 * @return 半边框盒大小
	 */
	public com.earthview.world.spatial.math.Vector3 getHalfSize()
	{
		long returnValue = getHalfSize_void(this.nativeObject.pointer);
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
	native private boolean contains_CVector3(long pNativeObject, long v);
	/**
	 * 判断边框盒是否包含三维点坐标
	 * @param v 空间点坐标
	 * @return 包含返回true，否则false
	 */
	public boolean contains(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		boolean returnValue = contains_CVector3(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}
	native private double distance_CVector3(long pNativeObject, long v);
	/**
	 * 返回点到包围盒的最短距离
	 * @param v 空间点坐标
	 * @return 距离
	 */
	public double distance(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		double returnValue = distance_CVector3(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}
	native private double distance2_CVector3(long pNativeObject, long v);
	/**
	 * 返回点到包围盒的最短距离
	 * @param v 空间点坐标
	 * @return 距离
	 */
	public double distance2(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		double returnValue = distance2_CVector3(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}
	native private boolean contains_CAxisAlignedBox(long pNativeObject, long other);
	/**
	 * 判断边框盒是否包含另一边框盒
	 * @param other 其它边框盒对象
	 * @return 包含返回true，否则false
	 */
	public boolean contains(com.earthview.world.spatial.math.AxisAlignedBox other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = contains_CAxisAlignedBox(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorEquals_CAxisAlignedBox(long pNativeObject, long rhs);
	/**
	 * 重载"=="操作符
	 * @param rhs 边框盒对象
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.AxisAlignedBox rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CAxisAlignedBox(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CAxisAlignedBox(long pNativeObject, long rhs);
	/**
	 * 重载"!="操作符
	 * @param rhs 边框盒对象
	 * @return 非相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.AxisAlignedBox rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CAxisAlignedBox(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private static long get_BOX_NULL_void();
	public static com.earthview.world.spatial.math.AxisAlignedBox get_BOX_NULL()
	{
		long jniValue = get_BOX_NULL_void();
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	
	native private static long get_BOX_INFINITE_void();
	public static com.earthview.world.spatial.math.AxisAlignedBox get_BOX_INFINITE()
	{
		long jniValue = get_BOX_INFINITE_void();
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	
	public AxisAlignedBox(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AxisAlignedBox(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AxisAlignedBox fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AxisAlignedBox obj = null;
 		if(baseObj instanceof AxisAlignedBox)
		{
			obj = (AxisAlignedBox)baseObj;
		} else {
			obj = new AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAxisAlignedBox");
			obj.increaseCast();
		}

		return obj;
	}
}
