package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何体类，是一个基类，用于描述几何体一般性信息。
 */
public class Geometry extends com.earthview.world.spatial.geometry.Igeometry {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CGeometry", new GeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JCGeometryProxy", new GeometryClassFactory());
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取几何体对象的最大外包围盒
	 * @param  
	 * @return 最大外包围盒，const对象，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private long getSpatialReferenceRef_void(long pNativeObject);
	/**
	 * 获取几何体对象的空间参考系
	 * @param  
	 * @return 空间参考系，const对象指针，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		long returnValue = getSpatialReferenceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReferenceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef_NoVirtual()
	{
		long returnValue = getSpatialReferenceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取几何体对象的类型
	 * @param  
	 * @return 返回几何体类型
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}

	native private int getWKBGeometryType_void(long pNativeObject);
	/**
	 * 获取几何体对象的WKB类型
	 * @param  
	 * @return 返回几何体WKB类型
	 */
	public com.earthview.world.spatial.geometry.EVWKBGeometryType getWKBGeometryType()
	{
		int returnValue = getWKBGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVWKBGeometryType.toEnum(returnValue);
	}
	native private int getWKBGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVWKBGeometryType getWKBGeometryType_NoVirtual()
	{
		int returnValue = getWKBGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVWKBGeometryType.toEnum(returnValue);
	}

	native private void setSpatialReferenceRef_ISpatialReference(long pNativeObject, long ref_sr);
	/**
	 * 设置空间坐标系
	 * @param sr 空间坐标系
	 */
	public void setSpatialReferenceRef(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReferenceRef_ISpatialReference(this.nativeObject.pointer, ref_srParamValue);
	}
	native private void setSpatialReferenceRef_ISpatialReference_NoVirtual(long pNativeObject, long ref_sr);
	protected void setSpatialReferenceRef_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReferenceRef_ISpatialReference_NoVirtual(this.nativeObject.pointer, ref_srParamValue);
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

	native private boolean isSimple_void(long pNativeObject);
	/**
	 * 判断几何体是否为简单几何体。所谓简单几何体，就是几何体对象没有自相交情况。
	 * @param  
	 * @return 如果为真，返回true；否则，返回false
	 */
	public boolean isSimple()
	{
		boolean returnValue = isSimple_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSimple_void_NoVirtual(long pNativeObject);
	protected boolean isSimple_NoVirtual()
	{
		boolean returnValue = isSimple_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void simplify_void(long pNativeObject);
	/**
	 * 把复杂几何体重新切分，组成简单几何体对象。内部会调用isSimple()方法，判断是否为简单几何体。
	 * @param  
	 */
	public void simplify()
	{
		simplify_void(this.nativeObject.pointer);
	}
	native private void simplify_void_NoVirtual(long pNativeObject);
	protected void simplify_NoVirtual()
	{
		simplify_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long buffer_ev_real64_EVDimensionType(long pNativeObject, double tolerance, int dimension);
	/**
	 * 获取缓冲区
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Igeometry buffer(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		long returnValue = buffer_ev_real64_EVDimensionType(this.nativeObject.pointer, toleranceParamValue, dimensionParamValue);
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
	native private long buffer_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, double tolerance, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry buffer_NoVirtual(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		long returnValue = buffer_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, toleranceParamValue, dimensionParamValue);
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

	native private long getBoundary_void(long pNativeObject);
	/**
	 * 获取几何体对象的外边框对象。点的外边框对象为空；线的外边框对象是两个端点；面的外边框对象是外边界。
	 * @param  
	 * @return 返回Geometry对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry getBoundary()
	{
		long returnValue = getBoundary_void(this.nativeObject.pointer);
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
	native private long getBoundary_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry getBoundary_NoVirtual()
	{
		long returnValue = getBoundary_void_NoVirtual(this.nativeObject.pointer);
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

	native private void makeZ_ev_real64(long pNativeObject, double z);
	/**
	 * 统一设置Z值
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
	 * /深度拷贝几何体对象/
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

	native private boolean isContains_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * /判断该几何体对象是否包含指定几何体对象。/目前，只支持2维几何体对象的空间关系。/
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果包含，则返回true；否则，返回false
	 */
	public boolean isContains(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isContains_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isContains_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected boolean isContains_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isContains_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
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

	native private boolean isDisjoin_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 判断该几何体对象是否相离指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相离，则返回true；否则，返回false
	 */
	public boolean isDisjoin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isDisjoin_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isDisjoin_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected boolean isDisjoin_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isDisjoin_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}

	native private boolean isIntersects_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 判断该几何体对象是否相交指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相交，则返回true；否则，返回false
	 */
	public boolean isIntersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isIntersects_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isIntersects_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected boolean isIntersects_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isIntersects_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}

	native private boolean isWithin_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 判断该几何体对象是否被包含在指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果被包含，则返回true；否则，返回false
	 */
	public boolean isWithin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isWithin_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isWithin_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected boolean isWithin_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isWithin_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}

	native private boolean isTouches_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 判断该几何体对象是否与指定几何体对象相接。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相接，则返回true；否则，返回false
	 */
	public boolean isTouches(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isTouches_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isTouches_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected boolean isTouches_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isTouches_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}

	native private boolean isCrosses_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 判断该几何体对象是否跨越指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果跨越，则返回true；否则，返回false
	 */
	public boolean isCrosses(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isCrosses_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isCrosses_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected boolean isCrosses_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isCrosses_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}

	native private boolean isRelates_IGeometry_EVString_EVDimensionType(long pNativeObject, long geom, String relateMatrix, int dimension);
	/**
	 * 判断该几何体对象是否与指定几何体对象有空间关系。空间关系，利用九交模型进行描述。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param relateMatrix 空间关系九交矩阵
	 * @param dimension 指定几何体维数
	 * @return 如果有关系，则返回true；否则，返回false
	 */
	public boolean isRelates(com.earthview.world.spatial.geometry.Igeometry geom, String relateMatrix, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		String relateMatrixParamValue = relateMatrix;
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isRelates_IGeometry_EVString_EVDimensionType(this.nativeObject.pointer, geomParamValue, relateMatrixParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isRelates_IGeometry_EVString_EVDimensionType_NoVirtual(long pNativeObject, long geom, String relateMatrix, int dimension);
	protected boolean isRelates_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, String relateMatrix, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		String relateMatrixParamValue = relateMatrix;
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isRelates_IGeometry_EVString_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, relateMatrixParamValue, dimensionParamValue);
		return returnValue;
	}

	native private long convexHull_EVDimensionType(long pNativeObject, int dimension);
	/**
	 * 获取凸多边形。目前，只支持2维几何体对象的空间关系。
	 * @param dimension 指定几何体维数
	 * @return 如果几何体对象本身就是凸多边形，则返回自身；否则，重新获取新几何体对象。
	 */
	public com.earthview.world.spatial.geometry.Igeometry convexHull(com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		int dimensionParamValue = dimension.getValue();
		long returnValue = convexHull_EVDimensionType(this.nativeObject.pointer, dimensionParamValue);
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
	native private long convexHull_EVDimensionType_NoVirtual(long pNativeObject, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry convexHull_NoVirtual(com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		int dimensionParamValue = dimension.getValue();
		long returnValue = convexHull_EVDimensionType_NoVirtual(this.nativeObject.pointer, dimensionParamValue);
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

	native private long difference_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该不同部分只包含该几何体对象，不包含指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry difference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = difference_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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
	native private long difference_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry difference_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = difference_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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

	native private double distance_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 获取几何体对象与指定几何体对象之间最小距离。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 几何体之间的最小距离
	 */
	public double distance(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		double returnValue = distance_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}
	native private double distance_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected double distance_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		double returnValue = distance_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
		return returnValue;
	}

	native private long intersects_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 获取几何体对象与指定几何体对象之间的相交部分。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry intersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = intersects_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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
	native private long intersects_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry intersects_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = intersects_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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

	native private long overlaps_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 获取几何体对象与指定几何体对象之间的相叠加。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry overlaps(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = overlaps_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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
	native private long overlaps_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry overlaps_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = overlaps_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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

	native private long symDifference_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该部分包括该几何体对象也包括指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry symDifference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = symDifference_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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
	native private long symDifference_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry symDifference_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = symDifference_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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

	native private long unions_IGeometry_EVDimensionType(long pNativeObject, long geom, int dimension);
	/**
	 * 获取几何体对象与指定几何体对象合并后的新几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry unions(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = unions_IGeometry_EVDimensionType(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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
	native private long unions_IGeometry_EVDimensionType_NoVirtual(long pNativeObject, long geom, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry unions_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		int dimensionParamValue = dimension.getValue();
		long returnValue = unions_IGeometry_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, dimensionParamValue);
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

	native private void toWKB_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成WKB格式流
	 * @param stream 数据流
	 */
	public void toWKB(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toWKB_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toWKB_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toWKB_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toWKB_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private void toWKT_EVString(long pNativeObject, long wkt);
	/**
	 * 序列化成WKT格式字符串
	 * @param wkt 字符串
	 */
	public void toWKT(StringPointer wkt)
	{
		long wktParamValue = wkt.nativeObject.pointer;
		toWKT_EVString(this.nativeObject.pointer, wktParamValue);
	}
	native private void toWKT_EVString_NoVirtual(long pNativeObject, long wkt);
	protected void toWKT_NoVirtual(StringPointer wkt)
	{
		long wktParamValue = wkt.nativeObject.pointer;
		toWKT_EVString_NoVirtual(this.nativeObject.pointer, wktParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成数据流
	 * @param stream 数据流
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

	protected  boolean isDirty_void_callback()
	{
		boolean returnValue = isDirty();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDirty_void(long pNativeObject);
	/**
	 * 判断对象的参数是否发生变化
	 * @param  
	 * @return true，表示发生变化，false，表示没有变化
	 */
	public boolean isDirty()
	{
		boolean returnValue = isDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDirty_void_NoVirtual(long pNativeObject);
	protected boolean isDirty_NoVirtual()
	{
		boolean returnValue = isDirty_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDirty_ev_bool_callback(boolean dirty)
	{
		boolean dirtyParamValue = dirty;
		setDirty(dirtyParamValue);
	}

	native private void setDirty_ev_bool(long pNativeObject, boolean dirty);
	/**
	 * 设置对象的更新标识
	 * @param dirty 新的更新标识
	 */
	public void setDirty(boolean dirty)
	{
		boolean dirtyParamValue = dirty;
		setDirty_ev_bool(this.nativeObject.pointer, dirtyParamValue);
	}
	native private void setDirty_ev_bool_NoVirtual(long pNativeObject, boolean dirty);
	protected void setDirty_NoVirtual(boolean dirty)
	{
		boolean dirtyParamValue = dirty;
		setDirty_ev_bool_NoVirtual(this.nativeObject.pointer, dirtyParamValue);
	}

	protected  void update_void_callback()
	{
		update();
	}

	native private void update_void(long pNativeObject);
	/**
	 * 更新对象
	 * @param  
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

	protected  long resample_ev_real64_EVDimensionType_callback(double tolerance, int dimension)
	{
		double toleranceParamValue = tolerance;
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = resample(toleranceParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long resample_ev_real64_EVDimensionType(long pNativeObject, double tolerance, int dimension);
	/**
	 * 用道格拉斯算法对几何对象进行化简
	 * @param tolerance 距离容差
	 * @param dimension 几何对象的维度
	 * @return 化简后的几何对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry resample(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		long returnValue = resample_ev_real64_EVDimensionType(this.nativeObject.pointer, toleranceParamValue, dimensionParamValue);
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
	native private long resample_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, double tolerance, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry resample_NoVirtual(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		long returnValue = resample_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, toleranceParamValue, dimensionParamValue);
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

	protected  long mirror_IGeometry_callback(long line)
	{
		com.earthview.world.spatial.geometry.Igeometry lineParamValue = (line == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(lineParamValue != null)
		{
		lineParamValue.setDelegate(true);
		lineParamValue.setInstancePointer(new InstancePointer(line));
		IClassFactory lineParamValueClassFactory = GlobalClassFactoryMap.get(lineParamValue.getCppInstanceTypeName());
		if (lineParamValueClassFactory != null)
		{
			lineParamValue.setDelegate(true);
			lineParamValue = (com.earthview.world.spatial.geometry.Igeometry)lineParamValueClassFactory.create();
			lineParamValue.setDelegate(true);
			lineParamValue.setInstancePointer(new InstancePointer(line));
		}
		}
		com.earthview.world.spatial.geometry.Igeometry returnValue = mirror(lineParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long split_IGeometry_callback(long pSplitGeom)
	{
		com.earthview.world.spatial.geometry.Igeometry pSplitGeomParamValue = (pSplitGeom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSplitGeomParamValue != null)
		{
		pSplitGeomParamValue.setDelegate(true);
		pSplitGeomParamValue.setInstancePointer(new InstancePointer(pSplitGeom));
		IClassFactory pSplitGeomParamValueClassFactory = GlobalClassFactoryMap.get(pSplitGeomParamValue.getCppInstanceTypeName());
		if (pSplitGeomParamValueClassFactory != null)
		{
			pSplitGeomParamValue.setDelegate(true);
			pSplitGeomParamValue = (com.earthview.world.spatial.geometry.Igeometry)pSplitGeomParamValueClassFactory.create();
			pSplitGeomParamValue.setDelegate(true);
			pSplitGeomParamValue.setInstancePointer(new InstancePointer(pSplitGeom));
		}
		}
		com.earthview.world.spatial.geometry.Igeometry returnValue = split(pSplitGeomParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long clip_IGeometry_callback(long clipRegion)
	{
		com.earthview.world.spatial.geometry.Igeometry clipRegionParamValue = (clipRegion == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(clipRegionParamValue != null)
		{
		clipRegionParamValue.setDelegate(true);
		clipRegionParamValue.setInstancePointer(new InstancePointer(clipRegion));
		IClassFactory clipRegionParamValueClassFactory = GlobalClassFactoryMap.get(clipRegionParamValue.getCppInstanceTypeName());
		if (clipRegionParamValueClassFactory != null)
		{
			clipRegionParamValue.setDelegate(true);
			clipRegionParamValue = (com.earthview.world.spatial.geometry.Igeometry)clipRegionParamValueClassFactory.create();
			clipRegionParamValue.setDelegate(true);
			clipRegionParamValue.setInstancePointer(new InstancePointer(clipRegion));
		}
		}
		com.earthview.world.spatial.geometry.Igeometry returnValue = clip(clipRegionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long smooth_ev_real64_EVDimensionType_callback(double tolerance, int dimension)
	{
		double toleranceParamValue = tolerance;
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = smooth(toleranceParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long smooth_ev_real64_EVDimensionType(long pNativeObject, double tolerance, int dimension);
	/**
	 * 平滑
	 * @param tolerance 距离容差
	 * @param dimension 几何对象的维度
	 * @return 平滑处理后的几何对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry smooth(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		long returnValue = smooth_ev_real64_EVDimensionType(this.nativeObject.pointer, toleranceParamValue, dimensionParamValue);
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
	native private long smooth_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, double tolerance, int dimension);
	protected com.earthview.world.spatial.geometry.Igeometry smooth_NoVirtual(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		long returnValue = smooth_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, toleranceParamValue, dimensionParamValue);
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

	protected  long snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback(long point, double tolerance, long snap)
	{
		com.earthview.world.spatial.geometry.Igeometry pointParamValue = (point == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(pointParamValue != null)
		{
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Igeometry)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		}
		double toleranceParamValue = tolerance;
		EnumPointer snapParamValue = new EnumPointer(new InstancePointer(snap));
		com.earthview.world.spatial.geometry.Igeometry returnValue = snapToPoint(pointParamValue, toleranceParamValue, snapParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long snapToSegment_IGeometry_ev_real64_callback(long point, double tolerance)
	{
		com.earthview.world.spatial.geometry.Igeometry pointParamValue = (point == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(pointParamValue != null)
		{
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Igeometry)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		}
		double toleranceParamValue = tolerance;
		com.earthview.world.spatial.geometry.Igeometry returnValue = snapToSegment(pointParamValue, toleranceParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  boolean movePointTo_IGeometry_IGeometry_callback(long frmPoint, long cpy_toPoint)
	{
		com.earthview.world.spatial.geometry.Igeometry frmPointParamValue = (frmPoint == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(frmPointParamValue != null)
		{
		frmPointParamValue.setDelegate(true);
		frmPointParamValue.setInstancePointer(new InstancePointer(frmPoint));
		IClassFactory frmPointParamValueClassFactory = GlobalClassFactoryMap.get(frmPointParamValue.getCppInstanceTypeName());
		if (frmPointParamValueClassFactory != null)
		{
			frmPointParamValue.setDelegate(true);
			frmPointParamValue = (com.earthview.world.spatial.geometry.Igeometry)frmPointParamValueClassFactory.create();
			frmPointParamValue.setDelegate(true);
			frmPointParamValue.setInstancePointer(new InstancePointer(frmPoint));
		}
		}
		com.earthview.world.spatial.geometry.Igeometry cpy_toPointParamValue = (cpy_toPoint == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(cpy_toPointParamValue != null)
		{
		cpy_toPointParamValue.setDelegate(true);
		cpy_toPointParamValue.setInstancePointer(new InstancePointer(cpy_toPoint));
		IClassFactory cpy_toPointParamValueClassFactory = GlobalClassFactoryMap.get(cpy_toPointParamValue.getCppInstanceTypeName());
		if (cpy_toPointParamValueClassFactory != null)
		{
			cpy_toPointParamValue.setDelegate(true);
			cpy_toPointParamValue = (com.earthview.world.spatial.geometry.Igeometry)cpy_toPointParamValueClassFactory.create();
			cpy_toPointParamValue.setDelegate(true);
			cpy_toPointParamValue.setInstancePointer(new InstancePointer(cpy_toPoint));
		}
		}
		boolean returnValue = movePointTo(frmPointParamValue, cpy_toPointParamValue);
		boolean __returnValue = returnValue;
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

	protected  boolean addPointTo_IGeometry_callback(long cpy_point)
	{
		com.earthview.world.spatial.geometry.Igeometry cpy_pointParamValue = (cpy_point == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(cpy_pointParamValue != null)
		{
		cpy_pointParamValue.setDelegate(true);
		cpy_pointParamValue.setInstancePointer(new InstancePointer(cpy_point));
		IClassFactory cpy_pointParamValueClassFactory = GlobalClassFactoryMap.get(cpy_pointParamValue.getCppInstanceTypeName());
		if (cpy_pointParamValueClassFactory != null)
		{
			cpy_pointParamValue.setDelegate(true);
			cpy_pointParamValue = (com.earthview.world.spatial.geometry.Igeometry)cpy_pointParamValueClassFactory.create();
			cpy_pointParamValue.setDelegate(true);
			cpy_pointParamValue.setInstancePointer(new InstancePointer(cpy_point));
		}
		}
		boolean returnValue = addPointTo(cpy_pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean deletePoint_IGeometry_callback(long point)
	{
		com.earthview.world.spatial.geometry.Igeometry pointParamValue = (point == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(pointParamValue != null)
		{
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Igeometry)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		}
		boolean returnValue = deletePoint(pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	native private boolean hasZ_void(long pNativeObject);
	public boolean hasZ()
	{
		boolean returnValue = hasZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasM_void(long pNativeObject);
	public boolean hasM()
	{
		boolean returnValue = hasM_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setZFlag_ev_bool_ev_bool(long pNativeObject, boolean z, boolean isClear);
	public void setZFlag(boolean z, boolean isClear)
	{
		boolean zParamValue = z;
		boolean isClearParamValue = isClear;
		setZFlag_ev_bool_ev_bool(this.nativeObject.pointer, zParamValue, isClearParamValue);
	}
	native private void setMFlag_ev_bool_ev_bool(long pNativeObject, boolean m, boolean isClear);
	public void setMFlag(boolean m, boolean isClear)
	{
		boolean mParamValue = m;
		boolean isClearParamValue = isClear;
		setMFlag_ev_bool_ev_bool(this.nativeObject.pointer, mParamValue, isClearParamValue);
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

	native private boolean updateGeos_void(long pNativeObject);
	public boolean updateGeos()
	{
		boolean returnValue = updateGeos_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getInteriorPoint_IGeometry(long pNativeObject, long point);
	/**
	 * 获取内部中心点
	 * @param coor 内部中心点
	 * @return 获取成功返回true,否则返回false
	 */
	public boolean getInteriorPoint(com.earthview.world.spatial.geometry.Igeometry point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		boolean returnValue = getInteriorPoint_IGeometry(this.nativeObject.pointer, pointParamValue);
		return returnValue;
	}
	native private boolean getInteriorPoint_IGeometry_NoVirtual(long pNativeObject, long point);
	protected boolean getInteriorPoint_NoVirtual(com.earthview.world.spatial.geometry.Igeometry point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		boolean returnValue = getInteriorPoint_IGeometry_NoVirtual(this.nativeObject.pointer, pointParamValue);
		return returnValue;
	}

	public Geometry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Geometry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static Geometry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Geometry obj = null;
 		if(baseObj instanceof Geometry)
		{
			obj = (Geometry)baseObj;
		} else {
			obj = new Geometry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometry");
			obj.increaseCast();
		}

		return obj;
	}
}
