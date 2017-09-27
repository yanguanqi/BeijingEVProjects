package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何体接口
 */
public class Igeometry extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::IGeometry", new IgeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JIGeometryProxy", new IgeometryClassFactory());
	}

	protected  long getEnvelopeRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getEnvelopeRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long getSpatialReferenceRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSpatialReferenceRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  int getGeometryType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVGeometryType returnValue = getGeometryType();
		int __returnValue = returnValue.getValue();
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

	protected  int getWKBGeometryType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVWKBGeometryType returnValue = getWKBGeometryType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
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

	protected  boolean isValid_void_callback()
	{
		boolean returnValue = isValid();
		boolean __returnValue = returnValue;
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

	protected  boolean isEmpty_void_callback()
	{
		boolean returnValue = isEmpty();
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isSimple_void_callback()
	{
		boolean returnValue = isSimple();
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void simplify_void_callback()
	{
		simplify();
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

	protected  long getBoundary_void_callback()
	{
		com.earthview.world.spatial.geometry.Igeometry returnValue = getBoundary();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  void makeZ_ev_real64_callback(double z)
	{
		double zParamValue = z;
		makeZ(zParamValue);
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

	protected  void makeM_ev_real64_callback(double m)
	{
		double mParamValue = m;
		makeM(mParamValue);
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

	protected  void setSpatialReferenceRef_ISpatialReference_callback(long ref_sr)
	{
		com.earthview.world.spatial.geometry.Ispatialreference ref_srParamValue = (ref_sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_srParamValue != null)
		{
		ref_srParamValue.setDelegate(true);
		ref_srParamValue.setInstancePointer(new InstancePointer(ref_sr));
		IClassFactory ref_srParamValueClassFactory = GlobalClassFactoryMap.get(ref_srParamValue.getCppInstanceTypeName());
		if (ref_srParamValueClassFactory != null)
		{
			ref_srParamValue.setDelegate(true);
			ref_srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)ref_srParamValueClassFactory.create();
			ref_srParamValue.setDelegate(true);
			ref_srParamValue.setInstancePointer(new InstancePointer(ref_sr));
		}
		}
		setSpatialReferenceRef(ref_srParamValue);
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

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geometry.Igeometry returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  boolean isContains_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isContains(geomParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
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

	protected  boolean isEquals_IGeometry_ev_real64_EVDimensionType_callback(long geom, double tolerance, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		double toleranceParamValue = tolerance;
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isEquals(geomParamValue, toleranceParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
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

	protected  boolean isDisjoin_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isDisjoin(geomParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isIntersects_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isIntersects(geomParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isWithin_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isWithin(geomParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isTouches_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isTouches(geomParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isCrosses_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isCrosses(geomParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isRelates_IGeometry_EVString_EVDimensionType_callback(long geom, String relateMatrix, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		String relateMatrixParamValue = relateMatrix;
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		boolean returnValue = isRelates(geomParamValue, relateMatrixParamValue, dimensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  long buffer_ev_real64_EVDimensionType_callback(double tolerance, int dimension)
	{
		double toleranceParamValue = tolerance;
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = buffer(toleranceParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long buffer_ev_real64_EVDimensionType(long pNativeObject, double tolerance, int dimension);
	/**
	 * 创建一个Buffer几何体。
	 * @param tolerance 指定容差范围
	 * @param dimension 指定几何体维数
	 * @return 新Buffer对象
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  long convexHull_EVDimensionType_callback(int dimension)
	{
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = convexHull(dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  long difference_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = difference(geomParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  double distance_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		double returnValue = distance(geomParamValue, dimensionParamValue);
		double __returnValue = returnValue;
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

	protected  long intersects_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = intersects(geomParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  long overlaps_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = overlaps(geomParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  long symDifference_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = symDifference(geomParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  long unions_IGeometry_EVDimensionType_callback(long geom, int dimension)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		com.earthview.world.spatial.geometry.EVDimensionType dimensionParamValue = com.earthview.world.spatial.geometry.EVDimensionType.toEnum(dimension);
		com.earthview.world.spatial.geometry.Igeometry returnValue = unions(geomParamValue, dimensionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	protected  void toWKB_CDataStream_callback(long stream)
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
		toWKB(streamParamValue);
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

	protected  void toWKT_EVString_callback(long wkt)
	{
		StringPointer wktParamValue = new StringPointer(new InstancePointer(wkt));
		toWKT(wktParamValue);
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

	protected  void translate_ev_real64_ev_real64_ev_real64_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate(xParamValue, yParamValue, zParamValue);
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

	protected  void projects_ISpatialReference_ev_real64_ev_uint32_callback(long sr, long sevenParam, long count)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srParamValue = (sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srParamValue != null)
		{
		srParamValue.setDelegate(true);
		srParamValue.setInstancePointer(new InstancePointer(sr));
		IClassFactory srParamValueClassFactory = GlobalClassFactoryMap.get(srParamValue.getCppInstanceTypeName());
		if (srParamValueClassFactory != null)
		{
			srParamValue.setDelegate(true);
			srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srParamValueClassFactory.create();
			srParamValue.setDelegate(true);
			srParamValue.setInstancePointer(new InstancePointer(sr));
		}
		}
		DoublePointer sevenParamParamValue = (sevenParam == 0L ? null : new DoublePointer(new InstancePointer(sevenParam)));
		long countParamValue = count;
		projects(srParamValue, sevenParamParamValue, countParamValue);
	}

	native private void projects_ISpatialReference_ev_real64_ev_uint32(long pNativeObject, long sr, long sevenParam, long count);
	/**
	 * 投影坐标转换，默认采取布尔莎算法。七参数不足7个，按默认为0处理。
	 * @param sr 新坐标系统
	 * @param seven 七参数，顺序为：offsetX,offsetY,offsetZ,rotateX,rotateY,rotateZ,radio
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

	protected  boolean getInteriorPoint_IGeometry_callback(long point)
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
		boolean returnValue = getInteriorPoint(pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	public Igeometry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Igeometry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static Igeometry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Igeometry obj = null;
 		if(baseObj instanceof Igeometry)
		{
			obj = (Igeometry)baseObj;
		} else {
			obj = new Igeometry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IGeometry");
			obj.increaseCast();
		}

		return obj;
	}
}
