package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 折线类，描述了一组首尾相连的点串。
 */
public class LineString extends com.earthview.world.spatial.geometry.Curve {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CLineString", new LineStringClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JCLineStringProxy", new LineStringClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public LineString() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLineStringProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.LineString".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getPoint_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的几何点
	 * @param index 指定索引
	 * @return 超出范围，则返回NULL
	 */
	public com.earthview.world.spatial.geometry.Point getPoint(long index)
	{
		long indexParamValue = index;
		long returnValue = getPoint_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getPoint2_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.geometry.Point getPoint2(long index)
	{
		long indexParamValue = index;
		long returnValue = getPoint2_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getCount_void(long pNativeObject);
	/**
	 * 获取几何点数目
	 * @param  
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long add_CCoordinate_ev_int32_callback(long coord, int index)
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
		int indexParamValue = index;
		long returnValue = add(coordParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long add_CCoordinate_ev_int32(long pNativeObject, long coord, int index);
	/**
	 * 添加坐标点到指定索引
	 * @param coord 坐标点
	 * @param index 插入索引位置
	 */
	public long add(com.earthview.world.spatial.geometry.Coordinate coord, int index)
	{
		long coordParamValue = coord.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CCoordinate_ev_int32(this.nativeObject.pointer, coordParamValue, indexParamValue);
		return returnValue;
	}
	native private long add_CCoordinate_ev_int32_NoVirtual(long pNativeObject, long coord, int index);
	protected long add_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord, int index)
	{
		long coordParamValue = coord.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CCoordinate_ev_int32_NoVirtual(this.nativeObject.pointer, coordParamValue, indexParamValue);
		return returnValue;
	}

	protected  long add_CCoordinate_ev_uint32_ev_int32_callback(long cpy_coords, long size, int index)
	{
		com.earthview.world.spatial.geometry.Coordinate cpy_coordsParamValue = (cpy_coords == 0L ? null : new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate));
		if(cpy_coordsParamValue != null)
		{
		cpy_coordsParamValue.setDelegate(true);
		cpy_coordsParamValue.setInstancePointer(new InstancePointer(cpy_coords));
		IClassFactory cpy_coordsParamValueClassFactory = GlobalClassFactoryMap.get(cpy_coordsParamValue.getCppInstanceTypeName());
		if (cpy_coordsParamValueClassFactory != null)
		{
			cpy_coordsParamValue.setDelegate(true);
			cpy_coordsParamValue = (com.earthview.world.spatial.geometry.Coordinate)cpy_coordsParamValueClassFactory.create();
			cpy_coordsParamValue.setDelegate(true);
			cpy_coordsParamValue.setInstancePointer(new InstancePointer(cpy_coords));
		}
		}
		long sizeParamValue = size;
		int indexParamValue = index;
		long returnValue = add(cpy_coordsParamValue, sizeParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long add_CCoordinate_ev_uint32_ev_int32(long pNativeObject, long cpy_coords, long size, int index);
	public long add(com.earthview.world.spatial.geometry.Coordinate cpy_coords, long size, int index)
	{
		long cpy_coordsParamValue = (cpy_coords == null ? 0L : cpy_coords.nativeObject.pointer);
		long sizeParamValue = size;
		int indexParamValue = index;
		long returnValue = add_CCoordinate_ev_uint32_ev_int32(this.nativeObject.pointer, cpy_coordsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}
	native private long add_CCoordinate_ev_uint32_ev_int32_NoVirtual(long pNativeObject, long cpy_coords, long size, int index);
	protected long add_NoVirtual(com.earthview.world.spatial.geometry.Coordinate cpy_coords, long size, int index)
	{
		long cpy_coordsParamValue = (cpy_coords == null ? 0L : cpy_coords.nativeObject.pointer);
		long sizeParamValue = size;
		int indexParamValue = index;
		long returnValue = add_CCoordinate_ev_uint32_ev_int32_NoVirtual(this.nativeObject.pointer, cpy_coordsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}

	protected  long add_CPoint_ev_int32_callback(long point, int index)
	{
		com.earthview.world.spatial.geometry.Point pointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Point)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		int indexParamValue = index;
		long returnValue = add(pointParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long add_CPoint_ev_int32(long pNativeObject, long point, int index);
	/**
	 * 添加几何点到指定索引处
	 * @param point 几何点
	 * @param index 插入索引位置
	 */
	public long add(com.earthview.world.spatial.geometry.Point point, int index)
	{
		long pointParamValue = point.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CPoint_ev_int32(this.nativeObject.pointer, pointParamValue, indexParamValue);
		return returnValue;
	}
	native private long add_CPoint_ev_int32_NoVirtual(long pNativeObject, long point, int index);
	protected long add_NoVirtual(com.earthview.world.spatial.geometry.Point point, int index)
	{
		long pointParamValue = point.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CPoint_ev_int32_NoVirtual(this.nativeObject.pointer, pointParamValue, indexParamValue);
		return returnValue;
	}

	protected  long add_CPoint_ev_uint32_ev_int32_callback(long cpy_points, long size, int index)
	{
		com.earthview.world.spatial.geometry.Point cpy_pointsParamValue = (cpy_points == 0L ? null : new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate));
		if(cpy_pointsParamValue != null)
		{
		cpy_pointsParamValue.setDelegate(true);
		cpy_pointsParamValue.setInstancePointer(new InstancePointer(cpy_points));
		IClassFactory cpy_pointsParamValueClassFactory = GlobalClassFactoryMap.get(cpy_pointsParamValue.getCppInstanceTypeName());
		if (cpy_pointsParamValueClassFactory != null)
		{
			cpy_pointsParamValue.setDelegate(true);
			cpy_pointsParamValue = (com.earthview.world.spatial.geometry.Point)cpy_pointsParamValueClassFactory.create();
			cpy_pointsParamValue.setDelegate(true);
			cpy_pointsParamValue.setInstancePointer(new InstancePointer(cpy_points));
		}
		}
		long sizeParamValue = size;
		int indexParamValue = index;
		long returnValue = add(cpy_pointsParamValue, sizeParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long add_CPoint_ev_uint32_ev_int32(long pNativeObject, long cpy_points, long size, int index);
	public long add(com.earthview.world.spatial.geometry.Point cpy_points, long size, int index)
	{
		long cpy_pointsParamValue = (cpy_points == null ? 0L : cpy_points.nativeObject.pointer);
		long sizeParamValue = size;
		int indexParamValue = index;
		long returnValue = add_CPoint_ev_uint32_ev_int32(this.nativeObject.pointer, cpy_pointsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}
	native private long add_CPoint_ev_uint32_ev_int32_NoVirtual(long pNativeObject, long cpy_points, long size, int index);
	protected long add_NoVirtual(com.earthview.world.spatial.geometry.Point cpy_points, long size, int index)
	{
		long cpy_pointsParamValue = (cpy_points == null ? 0L : cpy_points.nativeObject.pointer);
		long sizeParamValue = size;
		int indexParamValue = index;
		long returnValue = add_CPoint_ev_uint32_ev_int32_NoVirtual(this.nativeObject.pointer, cpy_pointsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}

	protected  long add_CCoordinateSequence_ev_int32_callback(long coords, int index)
	{
		com.earthview.world.spatial.geometry.CoordinateSequence coordsParamValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate);
		coordsParamValue.setDelegate(true);
		coordsParamValue.setInstancePointer(new InstancePointer(coords));
		IClassFactory coordsParamValueClassFactory = GlobalClassFactoryMap.get(coordsParamValue.getCppInstanceTypeName());
		if (coordsParamValueClassFactory != null)
		{
			coordsParamValue.setDelegate(true);
			coordsParamValue = (com.earthview.world.spatial.geometry.CoordinateSequence)coordsParamValueClassFactory.create();
			coordsParamValue.setDelegate(true);
			coordsParamValue.setInstancePointer(new InstancePointer(coords));
		}
		int indexParamValue = index;
		long returnValue = add(coordsParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long add_CCoordinateSequence_ev_int32(long pNativeObject, long coords, int index);
	/**
	 * 添加坐标序列到指定索引处
	 * @param coords 指定坐标序列
	 * @param index 插入索引位置
	 */
	public long add(com.earthview.world.spatial.geometry.CoordinateSequence coords, int index)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CCoordinateSequence_ev_int32(this.nativeObject.pointer, coordsParamValue, indexParamValue);
		return returnValue;
	}
	native private long add_CCoordinateSequence_ev_int32_NoVirtual(long pNativeObject, long coords, int index);
	protected long add_NoVirtual(com.earthview.world.spatial.geometry.CoordinateSequence coords, int index)
	{
		long coordsParamValue = coords.nativeObject.pointer;
		int indexParamValue = index;
		long returnValue = add_CCoordinateSequence_ev_int32_NoVirtual(this.nativeObject.pointer, coordsParamValue, indexParamValue);
		return returnValue;
	}

	protected  long replace_CCoordinate_ev_uint32_callback(long coord, long index)
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
		long indexParamValue = index;
		long returnValue = replace(coordParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long replace_CCoordinate_ev_uint32(long pNativeObject, long coord, long index);
	public long replace(com.earthview.world.spatial.geometry.Coordinate coord, long index)
	{
		long coordParamValue = coord.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CCoordinate_ev_uint32(this.nativeObject.pointer, coordParamValue, indexParamValue);
		return returnValue;
	}
	native private long replace_CCoordinate_ev_uint32_NoVirtual(long pNativeObject, long coord, long index);
	protected long replace_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord, long index)
	{
		long coordParamValue = coord.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CCoordinate_ev_uint32_NoVirtual(this.nativeObject.pointer, coordParamValue, indexParamValue);
		return returnValue;
	}

	protected  long replace_CPoint_ev_uint32_callback(long point, long index)
	{
		com.earthview.world.spatial.geometry.Point pointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Point)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		long indexParamValue = index;
		long returnValue = replace(pointParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long replace_CPoint_ev_uint32(long pNativeObject, long point, long index);
	public long replace(com.earthview.world.spatial.geometry.Point point, long index)
	{
		long pointParamValue = point.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CPoint_ev_uint32(this.nativeObject.pointer, pointParamValue, indexParamValue);
		return returnValue;
	}
	native private long replace_CPoint_ev_uint32_NoVirtual(long pNativeObject, long point, long index);
	protected long replace_NoVirtual(com.earthview.world.spatial.geometry.Point point, long index)
	{
		long pointParamValue = point.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CPoint_ev_uint32_NoVirtual(this.nativeObject.pointer, pointParamValue, indexParamValue);
		return returnValue;
	}

	protected  long replace_CCoordinate_ev_size_t_ev_uint32_callback(long coords, long size, long index)
	{
		com.earthview.world.spatial.geometry.Coordinate coordsParamValue = (coords == 0L ? null : new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate));
		if(coordsParamValue != null)
		{
		coordsParamValue.setDelegate(true);
		coordsParamValue.setInstancePointer(new InstancePointer(coords));
		IClassFactory coordsParamValueClassFactory = GlobalClassFactoryMap.get(coordsParamValue.getCppInstanceTypeName());
		if (coordsParamValueClassFactory != null)
		{
			coordsParamValue.setDelegate(true);
			coordsParamValue = (com.earthview.world.spatial.geometry.Coordinate)coordsParamValueClassFactory.create();
			coordsParamValue.setDelegate(true);
			coordsParamValue.setInstancePointer(new InstancePointer(coords));
		}
		}
		long sizeParamValue = size;
		long indexParamValue = index;
		long returnValue = replace(coordsParamValue, sizeParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long replace_CCoordinate_ev_size_t_ev_uint32(long pNativeObject, long coords, long size, long index);
	public long replace(com.earthview.world.spatial.geometry.Coordinate coords, long size, long index)
	{
		long coordsParamValue = (coords == null ? 0L : coords.nativeObject.pointer);
		long sizeParamValue = size;
		long indexParamValue = index;
		long returnValue = replace_CCoordinate_ev_size_t_ev_uint32(this.nativeObject.pointer, coordsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}
	native private long replace_CCoordinate_ev_size_t_ev_uint32_NoVirtual(long pNativeObject, long coords, long size, long index);
	protected long replace_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coords, long size, long index)
	{
		long coordsParamValue = (coords == null ? 0L : coords.nativeObject.pointer);
		long sizeParamValue = size;
		long indexParamValue = index;
		long returnValue = replace_CCoordinate_ev_size_t_ev_uint32_NoVirtual(this.nativeObject.pointer, coordsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}

	protected  long replace_CPoint_ev_size_t_ev_uint32_callback(long cpy_points, long size, long index)
	{
		com.earthview.world.spatial.geometry.Point cpy_pointsParamValue = (cpy_points == 0L ? null : new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate));
		if(cpy_pointsParamValue != null)
		{
		cpy_pointsParamValue.setDelegate(true);
		cpy_pointsParamValue.setInstancePointer(new InstancePointer(cpy_points));
		IClassFactory cpy_pointsParamValueClassFactory = GlobalClassFactoryMap.get(cpy_pointsParamValue.getCppInstanceTypeName());
		if (cpy_pointsParamValueClassFactory != null)
		{
			cpy_pointsParamValue.setDelegate(true);
			cpy_pointsParamValue = (com.earthview.world.spatial.geometry.Point)cpy_pointsParamValueClassFactory.create();
			cpy_pointsParamValue.setDelegate(true);
			cpy_pointsParamValue.setInstancePointer(new InstancePointer(cpy_points));
		}
		}
		long sizeParamValue = size;
		long indexParamValue = index;
		long returnValue = replace(cpy_pointsParamValue, sizeParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long replace_CPoint_ev_size_t_ev_uint32(long pNativeObject, long cpy_points, long size, long index);
	public long replace(com.earthview.world.spatial.geometry.Point cpy_points, long size, long index)
	{
		long cpy_pointsParamValue = (cpy_points == null ? 0L : cpy_points.nativeObject.pointer);
		long sizeParamValue = size;
		long indexParamValue = index;
		long returnValue = replace_CPoint_ev_size_t_ev_uint32(this.nativeObject.pointer, cpy_pointsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}
	native private long replace_CPoint_ev_size_t_ev_uint32_NoVirtual(long pNativeObject, long cpy_points, long size, long index);
	protected long replace_NoVirtual(com.earthview.world.spatial.geometry.Point cpy_points, long size, long index)
	{
		long cpy_pointsParamValue = (cpy_points == null ? 0L : cpy_points.nativeObject.pointer);
		long sizeParamValue = size;
		long indexParamValue = index;
		long returnValue = replace_CPoint_ev_size_t_ev_uint32_NoVirtual(this.nativeObject.pointer, cpy_pointsParamValue, sizeParamValue, indexParamValue);
		return returnValue;
	}

	protected  long replace_CCoordinateSequence_ev_uint32_callback(long coord, long index)
	{
		com.earthview.world.spatial.geometry.CoordinateSequence coordParamValue = new com.earthview.world.spatial.geometry.CoordinateSequence(CreatedWhenConstruct.CWC_NotToCreate);
		coordParamValue.setDelegate(true);
		coordParamValue.setInstancePointer(new InstancePointer(coord));
		IClassFactory coordParamValueClassFactory = GlobalClassFactoryMap.get(coordParamValue.getCppInstanceTypeName());
		if (coordParamValueClassFactory != null)
		{
			coordParamValue.setDelegate(true);
			coordParamValue = (com.earthview.world.spatial.geometry.CoordinateSequence)coordParamValueClassFactory.create();
			coordParamValue.setDelegate(true);
			coordParamValue.setInstancePointer(new InstancePointer(coord));
		}
		long indexParamValue = index;
		long returnValue = replace(coordParamValue, indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long replace_CCoordinateSequence_ev_uint32(long pNativeObject, long coord, long index);
	public long replace(com.earthview.world.spatial.geometry.CoordinateSequence coord, long index)
	{
		long coordParamValue = coord.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CCoordinateSequence_ev_uint32(this.nativeObject.pointer, coordParamValue, indexParamValue);
		return returnValue;
	}
	native private long replace_CCoordinateSequence_ev_uint32_NoVirtual(long pNativeObject, long coord, long index);
	protected long replace_NoVirtual(com.earthview.world.spatial.geometry.CoordinateSequence coord, long index)
	{
		long coordParamValue = coord.nativeObject.pointer;
		long indexParamValue = index;
		long returnValue = replace_CCoordinateSequence_ev_uint32_NoVirtual(this.nativeObject.pointer, coordParamValue, indexParamValue);
		return returnValue;
	}

	protected  long remove_ev_uint32_ev_uint32_callback(long index, long count)
	{
		long indexParamValue = index;
		long countParamValue = count;
		long returnValue = remove(indexParamValue, countParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long remove_ev_uint32_ev_uint32(long pNativeObject, long index, long count);
	/**
	 * 移除指定索引处的指定数目点
	 * @param index 指定索引
	 * @param count 指定数目
	 */
	public long remove(long index, long count)
	{
		long indexParamValue = index;
		long countParamValue = count;
		long returnValue = remove_ev_uint32_ev_uint32(this.nativeObject.pointer, indexParamValue, countParamValue);
		return returnValue;
	}
	native private long remove_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long index, long count);
	protected long remove_NoVirtual(long index, long count)
	{
		long indexParamValue = index;
		long countParamValue = count;
		long returnValue = remove_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue, countParamValue);
		return returnValue;
	}

	protected  int queryPoint_CPoint_ev_real64_callback(long point, double tolerance)
	{
		com.earthview.world.spatial.geometry.Point pointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Point)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		double toleranceParamValue = tolerance;
		int returnValue = queryPoint(pointParamValue, toleranceParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int queryPoint_CPoint_ev_real64(long pNativeObject, long point, double tolerance);
	/**
	 * 查询指定点
	 * @param point 指定几何点
	 * @param tolerance 容限范围
	 * @return 如果存在，则返回索引；否则，返回-1
	 */
	public int queryPoint(com.earthview.world.spatial.geometry.Point point, double tolerance)
	{
		long pointParamValue = point.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		int returnValue = queryPoint_CPoint_ev_real64(this.nativeObject.pointer, pointParamValue, toleranceParamValue);
		return returnValue;
	}
	native private int queryPoint_CPoint_ev_real64_NoVirtual(long pNativeObject, long point, double tolerance);
	protected int queryPoint_NoVirtual(com.earthview.world.spatial.geometry.Point point, double tolerance)
	{
		long pointParamValue = point.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		int returnValue = queryPoint_CPoint_ev_real64_NoVirtual(this.nativeObject.pointer, pointParamValue, toleranceParamValue);
		return returnValue;
	}

	protected  int queryPoint_CCoordinate_ev_real64_callback(long coord, double tolerance)
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
		int returnValue = queryPoint(coordParamValue, toleranceParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int queryPoint_CCoordinate_ev_real64(long pNativeObject, long coord, double tolerance);
	public int queryPoint(com.earthview.world.spatial.geometry.Coordinate coord, double tolerance)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		int returnValue = queryPoint_CCoordinate_ev_real64(this.nativeObject.pointer, coordParamValue, toleranceParamValue);
		return returnValue;
	}
	native private int queryPoint_CCoordinate_ev_real64_NoVirtual(long pNativeObject, long coord, double tolerance);
	protected int queryPoint_NoVirtual(com.earthview.world.spatial.geometry.Coordinate coord, double tolerance)
	{
		long coordParamValue = coord.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		int returnValue = queryPoint_CCoordinate_ev_real64_NoVirtual(this.nativeObject.pointer, coordParamValue, toleranceParamValue);
		return returnValue;
	}

	native private long clone2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.LineString clone2()
	{
		long returnValue = clone2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLineString");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	native private long getStartPoint_void(long pNativeObject);
	/**
	 * 获取起始点
	 * @param  
	 * @return 起始点
	 */
	public com.earthview.world.spatial.geometry.Point getStartPoint()
	{
		long returnValue = getStartPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getStartPoint_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getStartPoint_NoVirtual()
	{
		long returnValue = getStartPoint_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	native private long getStartPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getStartPoint2()
	{
		long returnValue = getStartPoint2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getStartPoint2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getStartPoint2_NoVirtual()
	{
		long returnValue = getStartPoint2_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	native private long getEndPoint_void(long pNativeObject);
	/**
	 * 获取结尾点
	 * @param  
	 * @return 结尾点
	 */
	public com.earthview.world.spatial.geometry.Point getEndPoint()
	{
		long returnValue = getEndPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getEndPoint_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getEndPoint_NoVirtual()
	{
		long returnValue = getEndPoint_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	native private long getEndPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getEndPoint2()
	{
		long returnValue = getEndPoint2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getEndPoint2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getEndPoint2_NoVirtual()
	{
		long returnValue = getEndPoint2_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	native private double getLength_void(long pNativeObject);
	/**
	 * 获取曲线长度
	 * @param  
	 * @return 曲线长度
	 */
	public double getLength()
	{
		double returnValue = getLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLength_void_NoVirtual(long pNativeObject);
	protected double getLength_NoVirtual()
	{
		double returnValue = getLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isClosed_void(long pNativeObject);
	/**
	 * 判断是否闭合。判断标准是首尾点相等
	 * @param  
	 * @return 如果闭合，返回true;否则，返回false
	 */
	public boolean isClosed()
	{
		boolean returnValue = isClosed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isClosed_void_NoVirtual(long pNativeObject);
	protected boolean isClosed_NoVirtual()
	{
		boolean returnValue = isClosed_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean reverse_void(long pNativeObject);
	/**
	 * 反转曲线环
	 * @param  
	 * @param  
	 * @return 成功，返回true;否则，返回false
	 */
	public boolean reverse()
	{
		boolean returnValue = reverse_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean reverse_void_NoVirtual(long pNativeObject);
	protected boolean reverse_NoVirtual()
	{
		boolean returnValue = reverse_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long toLineString2_ev_uint32_callback(long smooth)
	{
		long smoothParamValue = smooth;
		com.earthview.world.spatial.geometry.LineString returnValue = toLineString2(smoothParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toLineString2_ev_uint32(long pNativeObject, long smooth);
	public com.earthview.world.spatial.geometry.LineString toLineString2(long smooth)
	{
		long smoothParamValue = smooth;
		long returnValue = toLineString2_ev_uint32(this.nativeObject.pointer, smoothParamValue);
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLineString");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	native private long toLineString2_ev_uint32_NoVirtual(long pNativeObject, long smooth);
	protected com.earthview.world.spatial.geometry.LineString toLineString2_NoVirtual(long smooth)
	{
		long smoothParamValue = smooth;
		long returnValue = toLineString2_ev_uint32_NoVirtual(this.nativeObject.pointer, smoothParamValue);
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLineString");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断几何体是否有效
	 * @return 如果有效，返回true；否则，返回false
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

	native private boolean isEmpty_void(long pNativeObject);
	/**
	 * 判断几何体是否为空
	 * @param  
	 * @return 如果为空，返回true；否则，返回false
	 */
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEmpty_void_NoVirtual(long pNativeObject);
	protected boolean isEmpty_NoVirtual()
	{
		boolean returnValue = isEmpty_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void makeZ_ev_real64(long pNativeObject, double z);
	/**
	 * 统一设置Z值
	 * @param  
	 * @param z 坐标轴Z值
	 */
	public void makeZ(double z)
	{
		double zParamValue = z;
		makeZ_ev_real64(this.nativeObject.pointer, zParamValue);
	}
	native private void makeZ_ev_real64_NoVirtual(long pNativeObject, double z);
	protected void makeZ_NoVirtual(double z)
	{
		double zParamValue = z;
		makeZ_ev_real64_NoVirtual(this.nativeObject.pointer, zParamValue);
	}

	native private void makeM_ev_real64(long pNativeObject, double m);
	/**
	 * 统一设置M值
	 * @param m 坐标轴M值
	 */
	public void makeM(double m)
	{
		double mParamValue = m;
		makeM_ev_real64(this.nativeObject.pointer, mParamValue);
	}
	native private void makeM_ev_real64_NoVirtual(long pNativeObject, double m);
	protected void makeM_NoVirtual(double m)
	{
		double mParamValue = m;
		makeM_ev_real64_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝几何体对象
	 * @param  
	 * @return 拷贝后的几何体对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private boolean isEquals_IGeometry_ev_real64_EVDimensionType(long pNativeObject, long geom, double tolerance, int dimension);
	/**
	 * 判断该几何体对象是否与指定几何体对象形状相同。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param tolerance 指定误差范围
	 * @param dimension 指定几何体维数
	 * @return 如果相等，则返回true；否则，返回false
	 */
	public boolean isEquals(com.earthview.world.spatial.geometry.Igeometry geom, double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isEquals_IGeometry_ev_real64_EVDimensionType(this.nativeObject.pointer, geomParamValue, toleranceParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isEquals_IGeometry_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, long geom, double tolerance, int dimension);
	protected boolean isEquals_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isEquals_IGeometry_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, toleranceParamValue, dimensionParamValue);
		return returnValue;
	}

	native private void translate_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	/**
	 * 平移几何体，默认提供中心点平移
	 * @param x X轴方向平移值
	 * @param y Y轴方向平移值
	 * @param z Z轴方向平移值
	 */
	public void translate(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void translate_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void translate_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
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

	native private void projects_ISpatialReference_ev_real64_ev_uint32(long pNativeObject, long sr, long sevenParam, long count);
	/**
	 * 投影坐标转换，默认采取布尔莎算法。七参数不足7个，按默认为0处理。
	 * @param sr 新坐标系统
	 * @param seven 七参数，顺序为：offsetX,offsetY,offsetZ,scaleX,scaleY,scaleZ,radio
	 * @param count 七参数数目
	 */
	public void projects(com.earthview.world.spatial.geometry.Ispatialreference sr, DoublePointer sevenParam, long count)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long sevenParamParamValue = (sevenParam == null ? 0L : sevenParam.nativeObject.pointer);
		long countParamValue = count;
		projects_ISpatialReference_ev_real64_ev_uint32(this.nativeObject.pointer, srParamValue, sevenParamParamValue, countParamValue);
	}
	native private void projects_ISpatialReference_ev_real64_ev_uint32_NoVirtual(long pNativeObject, long sr, long sevenParam, long count);
	protected void projects_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr, DoublePointer sevenParam, long count)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long sevenParamParamValue = (sevenParam == null ? 0L : sevenParam.nativeObject.pointer);
		long countParamValue = count;
		projects_ISpatialReference_ev_real64_ev_uint32_NoVirtual(this.nativeObject.pointer, srParamValue, sevenParamParamValue, countParamValue);
	}

	native private void update_void(long pNativeObject);
	/**
	 * 更新对象
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_void_NoVirtual(long pNativeObject);
	protected void update_NoVirtual()
	{
		update_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long mirror_IGeometry(long pNativeObject, long line);
	/**
	 * 对称变换
	 * @param line 对称变换的参照线
	 * @return 变换后的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry mirror(com.earthview.world.spatial.geometry.Igeometry line)
	{
		long lineParamValue = (line == null ? 0L : line.nativeObject.pointer);
		long returnValue = mirror_IGeometry(this.nativeObject.pointer, lineParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long mirror_IGeometry_NoVirtual(long pNativeObject, long line);
	protected com.earthview.world.spatial.geometry.Igeometry mirror_NoVirtual(com.earthview.world.spatial.geometry.Igeometry line)
	{
		long lineParamValue = (line == null ? 0L : line.nativeObject.pointer);
		long returnValue = mirror_IGeometry_NoVirtual(this.nativeObject.pointer, lineParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private long split_IGeometry(long pNativeObject, long pSplitGeom);
	/**
	 * 分割
	 * @param pSplitGeom 分割几何图形（可以为点，线）
	 * @return 分割后得到的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry split(com.earthview.world.spatial.geometry.Igeometry pSplitGeom)
	{
		long pSplitGeomParamValue = (pSplitGeom == null ? 0L : pSplitGeom.nativeObject.pointer);
		long returnValue = split_IGeometry(this.nativeObject.pointer, pSplitGeomParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long split_IGeometry_NoVirtual(long pNativeObject, long pSplitGeom);
	protected com.earthview.world.spatial.geometry.Igeometry split_NoVirtual(com.earthview.world.spatial.geometry.Igeometry pSplitGeom)
	{
		long pSplitGeomParamValue = (pSplitGeom == null ? 0L : pSplitGeom.nativeObject.pointer);
		long returnValue = split_IGeometry_NoVirtual(this.nativeObject.pointer, pSplitGeomParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private long clip_IGeometry(long pNativeObject, long clipRegion);
	/**
	 * 裁剪
	 * @param clipRegion 裁剪区域多边形
	 * @return 裁剪后得到的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry clip(com.earthview.world.spatial.geometry.Igeometry clipRegion)
	{
		long clipRegionParamValue = (clipRegion == null ? 0L : clipRegion.nativeObject.pointer);
		long returnValue = clip_IGeometry(this.nativeObject.pointer, clipRegionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long clip_IGeometry_NoVirtual(long pNativeObject, long clipRegion);
	protected com.earthview.world.spatial.geometry.Igeometry clip_NoVirtual(com.earthview.world.spatial.geometry.Igeometry clipRegion)
	{
		long clipRegionParamValue = (clipRegion == null ? 0L : clipRegion.nativeObject.pointer);
		long returnValue = clip_IGeometry_NoVirtual(this.nativeObject.pointer, clipRegionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private long snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(long pNativeObject, long point, double tolerance, long snap);
	/**
	 * 捕捉点
	 * @param point 输入点
	 * @param tolerance 捕捉距离上限
	 * @param snap 捕捉类型参数
	 * @return 捕捉到的点
	 */
	public com.earthview.world.spatial.geometry.Igeometry snapToPoint(com.earthview.world.spatial.geometry.Igeometry point, double tolerance, EnumPointer snap)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long snapParamValue = snap.nativeObject.pointer;
		long returnValue = snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(this.nativeObject.pointer, pointParamValue, toleranceParamValue, snapParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(long pNativeObject, long point, double tolerance, long snap);
	protected com.earthview.world.spatial.geometry.Igeometry snapToPoint_NoVirtual(com.earthview.world.spatial.geometry.Igeometry point, double tolerance, EnumPointer snap)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long snapParamValue = snap.nativeObject.pointer;
		long returnValue = snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(this.nativeObject.pointer, pointParamValue, toleranceParamValue, snapParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private long snapToSegment_IGeometry_ev_real64(long pNativeObject, long point, double tolerance);
	/**
	 * 捕捉线段
	 * @param point 输入点
	 * @param tolerance 捕捉距离上限
	 * @return 捕捉到的线段
	 */
	public com.earthview.world.spatial.geometry.Igeometry snapToSegment(com.earthview.world.spatial.geometry.Igeometry point, double tolerance)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long returnValue = snapToSegment_IGeometry_ev_real64(this.nativeObject.pointer, pointParamValue, toleranceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long snapToSegment_IGeometry_ev_real64_NoVirtual(long pNativeObject, long point, double tolerance);
	protected com.earthview.world.spatial.geometry.Igeometry snapToSegment_NoVirtual(com.earthview.world.spatial.geometry.Igeometry point, double tolerance)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long returnValue = snapToSegment_IGeometry_ev_real64_NoVirtual(this.nativeObject.pointer, pointParamValue, toleranceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private long smooth_ev_real64_EVDimensionType(long pNativeObject, double tolerance, int dimType);
	/**
	 * 平滑
	 * @param tolerance 最大的容差
	 * @param dimType 当前几何的维度
	 * @return 捕捉到的线段
	 */
	public com.earthview.world.spatial.geometry.Igeometry smooth(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimType)
	{
		double toleranceParamValue = tolerance;
		int dimTypeParamValue = dimType.getValue();
		long returnValue = smooth_ev_real64_EVDimensionType(this.nativeObject.pointer, toleranceParamValue, dimTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long smooth_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, double tolerance, int dimType);
	protected com.earthview.world.spatial.geometry.Igeometry smooth_NoVirtual(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimType)
	{
		double toleranceParamValue = tolerance;
		int dimTypeParamValue = dimType.getValue();
		long returnValue = smooth_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, toleranceParamValue, dimTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private boolean movePointTo_IGeometry_IGeometry(long pNativeObject, long frmPoint, long cpy_toPoint);
	/**
	 * 移动一个点
	 * @param frmPoint 待移动的点
	 * @param toPoint 目标点
	 */
	public boolean movePointTo(com.earthview.world.spatial.geometry.Igeometry frmPoint, com.earthview.world.spatial.geometry.Igeometry cpy_toPoint)
	{
		long frmPointParamValue = (frmPoint == null ? 0L : frmPoint.nativeObject.pointer);
		long cpy_toPointParamValue = (cpy_toPoint == null ? 0L : cpy_toPoint.nativeObject.pointer);
		boolean returnValue = movePointTo_IGeometry_IGeometry(this.nativeObject.pointer, frmPointParamValue, cpy_toPointParamValue);
		return returnValue;
	}
	native private boolean movePointTo_IGeometry_IGeometry_NoVirtual(long pNativeObject, long frmPoint, long cpy_toPoint);
	protected boolean movePointTo_NoVirtual(com.earthview.world.spatial.geometry.Igeometry frmPoint, com.earthview.world.spatial.geometry.Igeometry cpy_toPoint)
	{
		long frmPointParamValue = (frmPoint == null ? 0L : frmPoint.nativeObject.pointer);
		long cpy_toPointParamValue = (cpy_toPoint == null ? 0L : cpy_toPoint.nativeObject.pointer);
		boolean returnValue = movePointTo_IGeometry_IGeometry_NoVirtual(this.nativeObject.pointer, frmPointParamValue, cpy_toPointParamValue);
		return returnValue;
	}

	native private boolean addPointTo_IGeometry(long pNativeObject, long cpy_point);
	/**
	 * 增加一个点
	 * @param point 待增加的点
	 */
	public boolean addPointTo(com.earthview.world.spatial.geometry.Igeometry cpy_point)
	{
		long cpy_pointParamValue = (cpy_point == null ? 0L : cpy_point.nativeObject.pointer);
		boolean returnValue = addPointTo_IGeometry(this.nativeObject.pointer, cpy_pointParamValue);
		return returnValue;
	}
	native private boolean addPointTo_IGeometry_NoVirtual(long pNativeObject, long cpy_point);
	protected boolean addPointTo_NoVirtual(com.earthview.world.spatial.geometry.Igeometry cpy_point)
	{
		long cpy_pointParamValue = (cpy_point == null ? 0L : cpy_point.nativeObject.pointer);
		boolean returnValue = addPointTo_IGeometry_NoVirtual(this.nativeObject.pointer, cpy_pointParamValue);
		return returnValue;
	}

	native private boolean deletePoint_IGeometry(long pNativeObject, long point);
	/**
	 * 删除一个点
	 * @param point 待删除的点
	 */
	public boolean deletePoint(com.earthview.world.spatial.geometry.Igeometry point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		boolean returnValue = deletePoint_IGeometry(this.nativeObject.pointer, pointParamValue);
		return returnValue;
	}
	native private boolean deletePoint_IGeometry_NoVirtual(long pNativeObject, long point);
	protected boolean deletePoint_NoVirtual(com.earthview.world.spatial.geometry.Igeometry point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		boolean returnValue = deletePoint_IGeometry_NoVirtual(this.nativeObject.pointer, pointParamValue);
		return returnValue;
	}

	/**
	 * 默认拷贝构造函数
	 * @param  
	 */
	public LineString(com.earthview.world.spatial.geometry.LineString obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("JCLineStringProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.LineString".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CLineString(long pNativeObject, long obj);
	public com.earthview.world.spatial.geometry.LineString OperatorAssign(com.earthview.world.spatial.geometry.LineString obj)
	{
		long objParamValue = obj.nativeObject.pointer;
		long returnValue = OperatorAssign_CLineString(this.nativeObject.pointer, objParamValue);
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	public LineString(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LineString(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 判断是否环。判断标准是必须简单曲线，然后首尾点相等。
	 * @param  
	 */
	public boolean isRing()
	{
		return super.isRing_NoVirtual();
	}
	/**
	 * 转换成折线
	 * @param smooth 平滑度
	 */
	public com.earthview.world.spatial.geometry.LineString toLineString(long smooth)
	{
		return super.toLineString_NoVirtual(smooth);
	}
	/**
	 * 判断对象的参数是否发生变化
	 * @param  
	 * @return true，表示发生变化，false，表示没有变化
	 */
	public boolean isDirty()
	{
		return super.isDirty_NoVirtual();
	}
	/**
	 * 设置对象的更新标识
	 * @param dirty 新的更新标识
	 */
	public void setDirty(boolean dirty)
	{
		super.setDirty_NoVirtual(dirty);
	}
	/**
	 * 用道格拉斯算法对几何对象进行化简
	 * @param tolerance 距离容差
	 * @param dimension 几何对象的维度
	 * @return 化简后的几何对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry resample(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.resample_NoVirtual(tolerance, dimension);
	}
	/**
	 * 获取几何体对象的最大外包围盒
	 * @param  
	 * @return 最大外包围盒，const对象，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 获取几何体对象的空间参考系
	 * @param  
	 * @return 空间参考系，const对象指针，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		return super.getSpatialReferenceRef_NoVirtual();
	}
	/**
	 * 获取几何体对象的类型
	 * @param  
	 * @return 返回几何体类型
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 获取几何体对象的WKB类型
	 * @param  
	 * @return 返回几何体WKB类型
	 */
	public com.earthview.world.spatial.geometry.EVWKBGeometryType getWKBGeometryType()
	{
		return super.getWKBGeometryType_NoVirtual();
	}
	/**
	 * 判断几何体是否为简单几何体。所谓简单几何体，就是几何体对象没有自相交情况。
	 * @param  
	 * @return 如果为真，返回true；否则，返回false
	 */
	public boolean isSimple()
	{
		return super.isSimple_NoVirtual();
	}
	/**
	 * 把复杂几何体重新切分，组成简单几何体对象。内部会调用isSimple()方法，判断是否为简单几何体。
	 * @param  
	 */
	public void simplify()
	{
		super.simplify_NoVirtual();
	}
	/**
	 * 获取几何体对象的外边框对象。点的外边框对象为空；线的外边框对象是两个端点；面的外边框对象是外边界。
	 * @param  
	 * @return 返回Geometry对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry getBoundary()
	{
		return super.getBoundary_NoVirtual();
	}
	/**
	 * 设置空间坐标系
	 * @param sr 空间坐标系
	 */
	public void setSpatialReferenceRef(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReferenceRef_NoVirtual(ref_sr);
	}
	/**
	 * /判断该几何体对象是否包含指定几何体对象。/目前，只支持2维几何体对象的空间关系。/
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果包含，则返回true；否则，返回false
	 */
	public boolean isContains(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isContains_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否相离指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相离，则返回true；否则，返回false
	 */
	public boolean isDisjoin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isDisjoin_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否相交指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相交，则返回true；否则，返回false
	 */
	public boolean isIntersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isIntersects_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否被包含在指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果被包含，则返回true；否则，返回false
	 */
	public boolean isWithin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isWithin_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否与指定几何体对象相接。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相接，则返回true；否则，返回false
	 */
	public boolean isTouches(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isTouches_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否跨越指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果跨越，则返回true；否则，返回false
	 */
	public boolean isCrosses(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isCrosses_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否与指定几何体对象有空间关系。空间关系，利用九交模型进行描述。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param relateMatrix 空间关系九交矩阵
	 * @param dimension 指定几何体维数
	 * @return 如果有关系，则返回true；否则，返回false
	 */
	public boolean isRelates(com.earthview.world.spatial.geometry.Igeometry geom, String relateMatrix, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isRelates_NoVirtual(geom, relateMatrix, dimension);
	}
	/**
	 * 创建一个Buffer几何体。
	 * @param tolerance 指定容差范围
	 * @param dimension 指定几何体维数
	 * @return 新Buffer对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry buffer(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.buffer_NoVirtual(tolerance, dimension);
	}
	/**
	 * 获取凸多边形。目前，只支持2维几何体对象的空间关系。
	 * @param dimension 指定几何体维数
	 * @return 如果几何体对象本身就是凸多边形，则返回自身；否则，重新获取新几何体对象。
	 */
	public com.earthview.world.spatial.geometry.Igeometry convexHull(com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.convexHull_NoVirtual(dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该不同部分只包含该几何体对象，不包含指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry difference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.difference_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间最小距离。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 几何体之间的最小距离
	 */
	public double distance(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.distance_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的相交部分。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry intersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.intersects_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的相叠加。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry overlaps(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.overlaps_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该部分包括该几何体对象也包括指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry symDifference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.symDifference_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象合并后的新几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry unions(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.unions_NoVirtual(geom, dimension);
	}
	/**
	 * 序列化成WKB格式流
	 * @param stream 数据流
	 */
	public void toWKB(com.earthview.world.core.DataStream stream)
	{
		super.toWKB_NoVirtual(stream);
	}
	/**
	 * 序列化成WKT格式字符串
	 * @param wkt 字符串
	 */
	public void toWKT(StringPointer wkt)
	{
		super.toWKT_NoVirtual(wkt);
	}
	/**
	 * 序列化成数据流
	 * @param stream 数据流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	/**
	 * 获取内部中心点
	 * @param coor 内部中心点
	 * @return 获取成功返回true,否则返回false
	 */
	public boolean getInteriorPoint(com.earthview.world.spatial.geometry.Igeometry point)
	{
		return super.getInteriorPoint_NoVirtual(point);
	}
	
	native protected void register_add_CCoordinate_ev_int32(long pNativeObject, String method);
	native protected void register_add_CCoordinate_ev_uint32_ev_int32(long pNativeObject, String method);
	native protected void register_add_CPoint_ev_int32(long pNativeObject, String method);
	native protected void register_add_CPoint_ev_uint32_ev_int32(long pNativeObject, String method);
	native protected void register_add_CCoordinateSequence_ev_int32(long pNativeObject, String method);
	native protected void register_replace_CCoordinate_ev_uint32(long pNativeObject, String method);
	native protected void register_replace_CPoint_ev_uint32(long pNativeObject, String method);
	native protected void register_replace_CCoordinate_ev_size_t_ev_uint32(long pNativeObject, String method);
	native protected void register_replace_CPoint_ev_size_t_ev_uint32(long pNativeObject, String method);
	native protected void register_replace_CCoordinateSequence_ev_uint32(long pNativeObject, String method);
	native protected void register_remove_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_queryPoint_CPoint_ev_real64(long pNativeObject, String method);
	native protected void register_queryPoint_CCoordinate_ev_real64(long pNativeObject, String method);
	native protected void register_toLineString2_ev_uint32(long pNativeObject, String method);
	native protected void register_getStartPoint_void(long pNativeObject, String method);
	native protected void register_getStartPoint2_void(long pNativeObject, String method);
	native protected void register_getEndPoint_void(long pNativeObject, String method);
	native protected void register_getEndPoint2_void(long pNativeObject, String method);
	native protected void register_getLength_void(long pNativeObject, String method);
	native protected void register_isClosed_void(long pNativeObject, String method);
	native protected void register_isRing_void(long pNativeObject, String method);
	native protected void register_reverse_void(long pNativeObject, String method);
	native protected void register_toLineString_ev_uint32(long pNativeObject, String method);
	native protected void register_isDirty_void(long pNativeObject, String method);
	native protected void register_setDirty_ev_bool(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_resample_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_mirror_IGeometry(long pNativeObject, String method);
	native protected void register_split_IGeometry(long pNativeObject, String method);
	native protected void register_clip_IGeometry(long pNativeObject, String method);
	native protected void register_smooth_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(long pNativeObject, String method);
	native protected void register_snapToSegment_IGeometry_ev_real64(long pNativeObject, String method);
	native protected void register_movePointTo_IGeometry_IGeometry(long pNativeObject, String method);
	native protected void register_addPointTo_IGeometry(long pNativeObject, String method);
	native protected void register_deletePoint_IGeometry(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReferenceRef_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getWKBGeometryType_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isEmpty_void(long pNativeObject, String method);
	native protected void register_isSimple_void(long pNativeObject, String method);
	native protected void register_simplify_void(long pNativeObject, String method);
	native protected void register_getBoundary_void(long pNativeObject, String method);
	native protected void register_makeZ_ev_real64(long pNativeObject, String method);
	native protected void register_makeM_ev_real64(long pNativeObject, String method);
	native protected void register_setSpatialReferenceRef_ISpatialReference(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_isContains_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isEquals_IGeometry_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_isDisjoin_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isIntersects_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isWithin_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isTouches_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isCrosses_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isRelates_IGeometry_EVString_EVDimensionType(long pNativeObject, String method);
	native protected void register_buffer_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_convexHull_EVDimensionType(long pNativeObject, String method);
	native protected void register_difference_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_distance_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_intersects_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_overlaps_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_symDifference_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_unions_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_toWKB_CDataStream(long pNativeObject, String method);
	native protected void register_toWKT_EVString(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_translate_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_projects_ISpatialReference_ev_real64_ev_uint32(long pNativeObject, String method);
	native protected void register_getInteriorPoint_IGeometry(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_add_CCoordinate_ev_int32(this.nativeObject.pointer, "add_CCoordinate_ev_int32_callback");
			this.register_add_CCoordinate_ev_uint32_ev_int32(this.nativeObject.pointer, "add_CCoordinate_ev_uint32_ev_int32_callback");
			this.register_add_CPoint_ev_int32(this.nativeObject.pointer, "add_CPoint_ev_int32_callback");
			this.register_add_CPoint_ev_uint32_ev_int32(this.nativeObject.pointer, "add_CPoint_ev_uint32_ev_int32_callback");
			this.register_add_CCoordinateSequence_ev_int32(this.nativeObject.pointer, "add_CCoordinateSequence_ev_int32_callback");
			this.register_replace_CCoordinate_ev_uint32(this.nativeObject.pointer, "replace_CCoordinate_ev_uint32_callback");
			this.register_replace_CPoint_ev_uint32(this.nativeObject.pointer, "replace_CPoint_ev_uint32_callback");
			this.register_replace_CCoordinate_ev_size_t_ev_uint32(this.nativeObject.pointer, "replace_CCoordinate_ev_size_t_ev_uint32_callback");
			this.register_replace_CPoint_ev_size_t_ev_uint32(this.nativeObject.pointer, "replace_CPoint_ev_size_t_ev_uint32_callback");
			this.register_replace_CCoordinateSequence_ev_uint32(this.nativeObject.pointer, "replace_CCoordinateSequence_ev_uint32_callback");
			this.register_remove_ev_uint32_ev_uint32(this.nativeObject.pointer, "remove_ev_uint32_ev_uint32_callback");
			this.register_queryPoint_CPoint_ev_real64(this.nativeObject.pointer, "queryPoint_CPoint_ev_real64_callback");
			this.register_queryPoint_CCoordinate_ev_real64(this.nativeObject.pointer, "queryPoint_CCoordinate_ev_real64_callback");
			this.register_toLineString2_ev_uint32(this.nativeObject.pointer, "toLineString2_ev_uint32_callback");
			this.register_getStartPoint_void(this.nativeObject.pointer, "getStartPoint_void_callback");
			this.register_getStartPoint2_void(this.nativeObject.pointer, "getStartPoint2_void_callback");
			this.register_getEndPoint_void(this.nativeObject.pointer, "getEndPoint_void_callback");
			this.register_getEndPoint2_void(this.nativeObject.pointer, "getEndPoint2_void_callback");
			this.register_getLength_void(this.nativeObject.pointer, "getLength_void_callback");
			this.register_isClosed_void(this.nativeObject.pointer, "isClosed_void_callback");
			this.register_isRing_void(this.nativeObject.pointer, "isRing_void_callback");
			this.register_reverse_void(this.nativeObject.pointer, "reverse_void_callback");
			this.register_toLineString_ev_uint32(this.nativeObject.pointer, "toLineString_ev_uint32_callback");
			this.register_isDirty_void(this.nativeObject.pointer, "isDirty_void_callback");
			this.register_setDirty_ev_bool(this.nativeObject.pointer, "setDirty_ev_bool_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_resample_ev_real64_EVDimensionType(this.nativeObject.pointer, "resample_ev_real64_EVDimensionType_callback");
			this.register_mirror_IGeometry(this.nativeObject.pointer, "mirror_IGeometry_callback");
			this.register_split_IGeometry(this.nativeObject.pointer, "split_IGeometry_callback");
			this.register_clip_IGeometry(this.nativeObject.pointer, "clip_IGeometry_callback");
			this.register_smooth_ev_real64_EVDimensionType(this.nativeObject.pointer, "smooth_ev_real64_EVDimensionType_callback");
			this.register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(this.nativeObject.pointer, "snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback");
			this.register_snapToSegment_IGeometry_ev_real64(this.nativeObject.pointer, "snapToSegment_IGeometry_ev_real64_callback");
			this.register_movePointTo_IGeometry_IGeometry(this.nativeObject.pointer, "movePointTo_IGeometry_IGeometry_callback");
			this.register_addPointTo_IGeometry(this.nativeObject.pointer, "addPointTo_IGeometry_callback");
			this.register_deletePoint_IGeometry(this.nativeObject.pointer, "deletePoint_IGeometry_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReferenceRef_void(this.nativeObject.pointer, "getSpatialReferenceRef_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getWKBGeometryType_void(this.nativeObject.pointer, "getWKBGeometryType_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isEmpty_void(this.nativeObject.pointer, "isEmpty_void_callback");
			this.register_isSimple_void(this.nativeObject.pointer, "isSimple_void_callback");
			this.register_simplify_void(this.nativeObject.pointer, "simplify_void_callback");
			this.register_getBoundary_void(this.nativeObject.pointer, "getBoundary_void_callback");
			this.register_makeZ_ev_real64(this.nativeObject.pointer, "makeZ_ev_real64_callback");
			this.register_makeM_ev_real64(this.nativeObject.pointer, "makeM_ev_real64_callback");
			this.register_setSpatialReferenceRef_ISpatialReference(this.nativeObject.pointer, "setSpatialReferenceRef_ISpatialReference_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_isContains_IGeometry_EVDimensionType(this.nativeObject.pointer, "isContains_IGeometry_EVDimensionType_callback");
			this.register_isEquals_IGeometry_ev_real64_EVDimensionType(this.nativeObject.pointer, "isEquals_IGeometry_ev_real64_EVDimensionType_callback");
			this.register_isDisjoin_IGeometry_EVDimensionType(this.nativeObject.pointer, "isDisjoin_IGeometry_EVDimensionType_callback");
			this.register_isIntersects_IGeometry_EVDimensionType(this.nativeObject.pointer, "isIntersects_IGeometry_EVDimensionType_callback");
			this.register_isWithin_IGeometry_EVDimensionType(this.nativeObject.pointer, "isWithin_IGeometry_EVDimensionType_callback");
			this.register_isTouches_IGeometry_EVDimensionType(this.nativeObject.pointer, "isTouches_IGeometry_EVDimensionType_callback");
			this.register_isCrosses_IGeometry_EVDimensionType(this.nativeObject.pointer, "isCrosses_IGeometry_EVDimensionType_callback");
			this.register_isRelates_IGeometry_EVString_EVDimensionType(this.nativeObject.pointer, "isRelates_IGeometry_EVString_EVDimensionType_callback");
			this.register_buffer_ev_real64_EVDimensionType(this.nativeObject.pointer, "buffer_ev_real64_EVDimensionType_callback");
			this.register_convexHull_EVDimensionType(this.nativeObject.pointer, "convexHull_EVDimensionType_callback");
			this.register_difference_IGeometry_EVDimensionType(this.nativeObject.pointer, "difference_IGeometry_EVDimensionType_callback");
			this.register_distance_IGeometry_EVDimensionType(this.nativeObject.pointer, "distance_IGeometry_EVDimensionType_callback");
			this.register_intersects_IGeometry_EVDimensionType(this.nativeObject.pointer, "intersects_IGeometry_EVDimensionType_callback");
			this.register_overlaps_IGeometry_EVDimensionType(this.nativeObject.pointer, "overlaps_IGeometry_EVDimensionType_callback");
			this.register_symDifference_IGeometry_EVDimensionType(this.nativeObject.pointer, "symDifference_IGeometry_EVDimensionType_callback");
			this.register_unions_IGeometry_EVDimensionType(this.nativeObject.pointer, "unions_IGeometry_EVDimensionType_callback");
			this.register_toWKB_CDataStream(this.nativeObject.pointer, "toWKB_CDataStream_callback");
			this.register_toWKT_EVString(this.nativeObject.pointer, "toWKT_EVString_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_translate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "translate_ev_real64_ev_real64_ev_real64_callback");
			this.register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_projects_ISpatialReference_ev_real64_ev_uint32(this.nativeObject.pointer, "projects_ISpatialReference_ev_real64_ev_uint32_callback");
			this.register_getInteriorPoint_IGeometry(this.nativeObject.pointer, "getInteriorPoint_IGeometry_callback");
		}
	}
	
	public static LineString fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LineString obj = null;
 		if(baseObj instanceof LineString)
		{
			obj = (LineString)baseObj;
		} else {
			obj = new LineString(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLineString");
			obj.increaseCast();
		}

		return obj;
	}
}
