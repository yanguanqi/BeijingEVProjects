package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 坐标点串，描述一组坐标点
 */
public class CoordinateSequence extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CCoordinateSequence", new CoordinateSequenceClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CoordinateSequence() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCoordinateSequence", null);
	}

	public CoordinateSequence(long size) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		Create("CCoordinateSequence", list);
	}

	/**
	 * 参数构造函数
	 * @param coords 坐标点列表
	 * @param size 坐标点数目
	 */
	public CoordinateSequence(com.earthview.world.spatial.geometry.CoordinateSequence obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("CCoordinateSequence", list);
	}

	native private long OperatorAssign_CCoordinateSequence(long pNativeObject, long obj);
	public com.earthview.world.spatial.geometry.CoordinateSequence OperatorAssign(com.earthview.world.spatial.geometry.CoordinateSequence obj)
	{
		long objParamValue = obj.nativeObject.pointer;
		long returnValue = OperatorAssign_CCoordinateSequence(this.nativeObject.pointer, objParamValue);
		com.earthview.world.spatial.geometry.CoordinateSequence __returnValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinateSequence");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.CoordinateSequence)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinateSequence");
		}
		return __returnValue;
	}
	native private long getCount_void(long pNativeObject);
	/**
	 * 获取坐标点数目
	 * @param  
	 * @return 坐标点数目
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCoordinate_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的坐标点。返回对象指针是坐标序列内部指针，外部无需释放。
	 * @param index 指定索引
	 * @return 如果索引超出范围，则返回NULL
	 */
	public com.earthview.world.spatial.geometry.Coordinate getCoordinate(long index)
	{
		long indexParamValue = index;
		long returnValue = getCoordinate_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取最大X值
	 * @param  
	 * @return 最大值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取最小X值
	 * @param  
	 * @return 最小值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取最大Y值
	 * @param  
	 * @return 最大值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取最小Y值
	 * @param  
	 * @return 最小值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxZ_void(long pNativeObject);
	/**
	 * 获取最大Z值
	 * @param  
	 * @return 最大值
	 */
	public double getMaxZ()
	{
		double returnValue = getMaxZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinZ_void(long pNativeObject);
	/**
	 * 获取最小Z值
	 * @param  
	 * @return 最小值
	 */
	public double getMinZ()
	{
		double returnValue = getMinZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxM_void(long pNativeObject);
	/**
	 * 获取最大M值
	 * @param  
	 * @return 最大值
	 */
	public double getMaxM()
	{
		double returnValue = getMaxM_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinM_void(long pNativeObject);
	/**
	 * 获取最小M值
	 * @param  
	 * @return 最小值
	 */
	public double getMinM()
	{
		double returnValue = getMinM_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long add_CCoordinate_ev_int32(long pNativeObject, long coords, int index);
	public long add(com.earthview.world.spatial.geometry.Coordinate coords, int index)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CCoordinate_ev_int32(this.nativeObject.pointer, coordsParamValue, indexParamValue);
		return returnValue;
	}
	native private long add_CCoordinateSequence_ev_int32(long pNativeObject, long coords, int index);
	/**
	 * 添加坐标点到坐标序列末尾
	 * @param coords 坐标点列表
	 * @param size 坐标点数目
	 * @return 返回添加坐标点数目
	 */
	public long add(com.earthview.world.spatial.geometry.CoordinateSequence coords, int index)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CCoordinateSequence_ev_int32(this.nativeObject.pointer, coordsParamValue, indexParamValue);
		return returnValue;
	}
	native private long append_CCoordinate(long pNativeObject, long coords);
	public long append(com.earthview.world.spatial.geometry.Coordinate coords)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		long returnValue = append_CCoordinate(this.nativeObject.pointer, coordsParamValue);
		return returnValue;
	}
	native private long append_CCoordinateSequence(long pNativeObject, long coords);
	public long append(com.earthview.world.spatial.geometry.CoordinateSequence coords)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		long returnValue = append_CCoordinateSequence(this.nativeObject.pointer, coordsParamValue);
		return returnValue;
	}
	native private long insert_CCoordinate_ev_uint32(long pNativeObject, long coords, long index);
	public long insert(com.earthview.world.spatial.geometry.Coordinate coords, long index)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = insert_CCoordinate_ev_uint32(this.nativeObject.pointer, coordsParamValue, indexParamValue);
		return returnValue;
	}
	native private long insert_CCoordinateSequence_ev_uint32(long pNativeObject, long coords, long index);
	public long insert(com.earthview.world.spatial.geometry.CoordinateSequence coords, long index)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = insert_CCoordinateSequence_ev_uint32(this.nativeObject.pointer, coordsParamValue, indexParamValue);
		return returnValue;
	}
	native private long replace_CCoordinate_ev_uint32(long pNativeObject, long coord, long index);
	public long replace(com.earthview.world.spatial.geometry.Coordinate coord, long index)
	{
		long coordParamValue = coord.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CCoordinate_ev_uint32(this.nativeObject.pointer, coordParamValue, indexParamValue);
		return returnValue;
	}
	native private long replace_CCoordinateSequence_ev_uint32(long pNativeObject, long coords, long index);
	public long replace(com.earthview.world.spatial.geometry.CoordinateSequence coords, long index)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CCoordinateSequence_ev_uint32(this.nativeObject.pointer, coordsParamValue, indexParamValue);
		return returnValue;
	}
	native private long remove_ev_uint32_ev_uint32(long pNativeObject, long index, long size);
	/**
	 * 移除指定索引处的指定数目坐标点
	 * @param index 指定索引
	 * @param size 指定数目
	 * @return 成功移除坐标点数目
	 */
	public long remove(long index, long size)
	{
		long indexParamValue = index;
		long sizeParamValue = size;
		long returnValue = remove_ev_uint32_ev_uint32(this.nativeObject.pointer, indexParamValue, sizeParamValue);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void reserve_void(long pNativeObject);
	/**
	 * /反转指定索引处的指定数目坐标点/
	 * @param index 指定索引
	 * @param size 指定数目
	 * @return 成功反转坐标点数目
	 */
	public void reserve()
	{
		reserve_void(this.nativeObject.pointer);
	}
	native private void reverse_void(long pNativeObject);
	public void reverse()
	{
		reverse_void(this.nativeObject.pointer);
	}
	native private int queryCoordinate_CCoordinate_ev_real64(long pNativeObject, long coord, double tolerance);
	/**
	 * /查询坐标点位置是否已经存在/
	 * @param coord 指定坐标点
	 * @param tolerance 容差范围
	 * @return 如果存在，则返回索引；否则，返回-1
	 */
	public int queryCoordinate(com.earthview.world.spatial.geometry.Coordinate coord, double tolerance)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		int returnValue = queryCoordinate_CCoordinate_ev_real64(this.nativeObject.pointer, coordParamValue, toleranceParamValue);
		return returnValue;
	}
	native private boolean isDirty_void(long pNativeObject);
	/**
	 * 判断是否需要重新计算
	 * @param  
	 */
	public boolean isDirty()
	{
		boolean returnValue = isDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void update_void(long pNativeObject);
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void recalculateBoundingbox_void(long pNativeObject);
	/**
	 * 重新计算范围
	 * @param  
	 */
	public void recalculateBoundingbox()
	{
		recalculateBoundingbox_void(this.nativeObject.pointer);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 * @return 坐标序列对象指针
	 */
	public com.earthview.world.spatial.geometry.CoordinateSequence ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.CoordinateSequence __returnValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinateSequence");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.CoordinateSequence)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinateSequence");
		}
		return __returnValue;
	}
	native private long clone2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.CoordinateSequence clone2()
	{
		long returnValue = clone2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.CoordinateSequence __returnValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoordinateSequence");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.CoordinateSequence)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinateSequence");
		}
		return __returnValue;
	}
	native private String ev_toString_EVCoordinateType(long pNativeObject, int type);
	/**
	 * 序列化字符串
	 * @param  
	 * @return 字符串
	 */
	public String ev_toString(com.earthview.world.spatial.geometry.EVCoordinateType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = ev_toString_EVCoordinateType(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化流
	 * @param stream 数据流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_EVCoordinateType(long pNativeObject, long stream, int type);
	public void toStream(com.earthview.world.core.DataStream stream, com.earthview.world.spatial.geometry.EVCoordinateType type)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int typeParamValue = type.getValue();
		toStream_CDataStream_EVCoordinateType(this.nativeObject.pointer, streamParamValue, typeParamValue);
	}
	native private void offset_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	public void offset(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		offset_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle);
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
	native private void scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double xRef, double yRef, double zRef, double x, double y, double z);
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
	native private long mirror_CCoordinate_CCoordinate(long pNativeObject, long coord1, long coord2);
	public com.earthview.world.spatial.geometry.CoordinateSequence mirror(com.earthview.world.spatial.geometry.Coordinate coord1, com.earthview.world.spatial.geometry.Coordinate coord2)
	{
		long coord1ParamValue = (coord1 == null ? 0L : coord1.nativeObject.pointer);
		long coord2ParamValue = (coord2 == null ? 0L : coord2.nativeObject.pointer);
		long returnValue = mirror_CCoordinate_CCoordinate(this.nativeObject.pointer, coord1ParamValue, coord2ParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.CoordinateSequence __returnValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinateSequence");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.CoordinateSequence)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinateSequence");
		}
		return __returnValue;
	}
	native private long mirror2_CCoordinate_CCoordinate(long pNativeObject, long coord1, long coord2);
	public com.earthview.world.spatial.geometry.CoordinateSequence mirror2(com.earthview.world.spatial.geometry.Coordinate coord1, com.earthview.world.spatial.geometry.Coordinate coord2)
	{
		long coord1ParamValue = coord1.nativeObject.pointer;
		long coord2ParamValue = coord2.nativeObject.pointer;
		long returnValue = mirror2_CCoordinate_CCoordinate(this.nativeObject.pointer, coord1ParamValue, coord2ParamValue);
		com.earthview.world.spatial.geometry.CoordinateSequence __returnValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoordinateSequence");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.CoordinateSequence)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoordinateSequence");
		}
		return __returnValue;
	}
	public CoordinateSequence(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CoordinateSequence(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CoordinateSequence fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CoordinateSequence obj = null;
 		if(baseObj instanceof CoordinateSequence)
		{
			obj = (CoordinateSequence)baseObj;
		} else {
			obj = new CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCoordinateSequence");
			obj.increaseCast();
		}

		return obj;
	}
}
