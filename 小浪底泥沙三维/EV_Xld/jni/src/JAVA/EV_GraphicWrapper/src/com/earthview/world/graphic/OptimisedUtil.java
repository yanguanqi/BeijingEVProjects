package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 优化功能类主要用于功能的优化
 */
public class OptimisedUtil extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COptimisedUtil", new OptimisedUtilClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOptimisedUtilProxy", new OptimisedUtilClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public OptimisedUtil() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOptimisedUtilProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.OptimisedUtil".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getImplementation_void();
	/**
	 * 得到类的实现
	 * @param  
	 * @return 返回指向EarthView::World::Graphic::COptimisedUtil类的指针
	 */
	public static com.earthview.world.graphic.OptimisedUtil getImplementation()
	{
		long returnValue = getImplementation_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OptimisedUtil __returnValue = new com.earthview.world.graphic.OptimisedUtil(CreatedWhenConstruct.CWC_NotToCreate, "COptimisedUtil");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OptimisedUtil)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COptimisedUtil");
		}
		return __returnValue;
	}
	protected  void softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback(long srcPosPtr, long destPosPtr, long srcNormPtr, long destNormPtr, long blendWeightPtr, long blendIndexPtr, long blendMatrices, long srcPosStride, long destPosStride, long srcNormStride, long destNormStride, long blendWeightStride, long blendIndexStride, long numWeightsPerVertex, long numVertices)
	{
		FloatPointer srcPosPtrParamValue = (srcPosPtr == 0L ? null : new FloatPointer(new InstancePointer(srcPosPtr)));
		FloatPointer destPosPtrParamValue = (destPosPtr == 0L ? null : new FloatPointer(new InstancePointer(destPosPtr)));
		FloatPointer srcNormPtrParamValue = (srcNormPtr == 0L ? null : new FloatPointer(new InstancePointer(srcNormPtr)));
		FloatPointer destNormPtrParamValue = (destNormPtr == 0L ? null : new FloatPointer(new InstancePointer(destNormPtr)));
		FloatPointer blendWeightPtrParamValue = (blendWeightPtr == 0L ? null : new FloatPointer(new InstancePointer(blendWeightPtr)));
		UBytePointer blendIndexPtrParamValue = (blendIndexPtr == 0L ? null : new UBytePointer(new InstancePointer(blendIndexPtr)));
		NativeObjectPointer<com.earthview.world.spatial.math.Matrix4> blendMatricesParamValue = (blendMatrices == 0L ? null : new NativeObjectPointer<com.earthview.world.spatial.math.Matrix4>(new InstancePointer(blendMatrices)));
		long srcPosStrideParamValue = srcPosStride;
		long destPosStrideParamValue = destPosStride;
		long srcNormStrideParamValue = srcNormStride;
		long destNormStrideParamValue = destNormStride;
		long blendWeightStrideParamValue = blendWeightStride;
		long blendIndexStrideParamValue = blendIndexStride;
		long numWeightsPerVertexParamValue = numWeightsPerVertex;
		long numVerticesParamValue = numVertices;
		softwareVertexSkinning(srcPosPtrParamValue, destPosPtrParamValue, srcNormPtrParamValue, destNormPtrParamValue, blendWeightPtrParamValue, blendIndexPtrParamValue, blendMatricesParamValue, srcPosStrideParamValue, destPosStrideParamValue, srcNormStrideParamValue, destNormStrideParamValue, blendWeightStrideParamValue, blendIndexStrideParamValue, numWeightsPerVertexParamValue, numVerticesParamValue);
	}

	native private void softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long srcPosPtr, long destPosPtr, long srcNormPtr, long destNormPtr, long blendWeightPtr, long blendIndexPtr, long blendMatrices, long srcPosStride, long destPosStride, long srcNormStride, long destNormStride, long blendWeightStride, long blendIndexStride, long numWeightsPerVertex, long numVertices);
	/**
	 * 顶点修饰
	 * @param srcPosPtr 来源位置的缓冲器
	 * @param destPosPtr 目标位置的缓冲器
	 * @param srcNormPtr 来源的法线的缓冲器
	 * @param destNormPtr 目标的法线的缓冲器
	 * @param blendWeightPtr 混合权重缓冲器
	 * @param blendIndexPtr 混合索引缓冲器
	 * @param blendMatrices 混合矩阵
	 * @param srcPosStride 来源位置的跨度
	 * @param destPosStride 目标位置的跨度
	 * @param srcNormStride 来源法线的跨度
	 * @param destNormStride 目标法线的跨度
	 * @param blendWeightStride 混合权重的跨度
	 * @param blendIndexStride 混合索引的跨度
	 * @param numWeightsPerVertex 每个顶点的混合权重个数
	 * @param numVertices 混合顶点个数
	 */
	public void softwareVertexSkinning(FloatPointer srcPosPtr, FloatPointer destPosPtr, FloatPointer srcNormPtr, FloatPointer destNormPtr, FloatPointer blendWeightPtr, UBytePointer blendIndexPtr, NativeObjectPointer<com.earthview.world.spatial.math.Matrix4> blendMatrices, long srcPosStride, long destPosStride, long srcNormStride, long destNormStride, long blendWeightStride, long blendIndexStride, long numWeightsPerVertex, long numVertices)
	{
		long srcPosPtrParamValue = (srcPosPtr == null ? 0L : srcPosPtr.nativeObject.pointer);
		long destPosPtrParamValue = (destPosPtr == null ? 0L : destPosPtr.nativeObject.pointer);
		long srcNormPtrParamValue = (srcNormPtr == null ? 0L : srcNormPtr.nativeObject.pointer);
		long destNormPtrParamValue = (destNormPtr == null ? 0L : destNormPtr.nativeObject.pointer);
		long blendWeightPtrParamValue = (blendWeightPtr == null ? 0L : blendWeightPtr.nativeObject.pointer);
		long blendIndexPtrParamValue = (blendIndexPtr == null ? 0L : blendIndexPtr.nativeObject.pointer);
		long blendMatricesParamValue = (blendMatrices == null ? 0L : blendMatrices.nativeObject.pointer);
		long srcPosStrideParamValue = srcPosStride;
		long destPosStrideParamValue = destPosStride;
		long srcNormStrideParamValue = srcNormStride;
		long destNormStrideParamValue = destNormStride;
		long blendWeightStrideParamValue = blendWeightStride;
		long blendIndexStrideParamValue = blendIndexStride;
		long numWeightsPerVertexParamValue = numWeightsPerVertex;
		long numVerticesParamValue = numVertices;
		softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, srcPosPtrParamValue, destPosPtrParamValue, srcNormPtrParamValue, destNormPtrParamValue, blendWeightPtrParamValue, blendIndexPtrParamValue, blendMatricesParamValue, srcPosStrideParamValue, destPosStrideParamValue, srcNormStrideParamValue, destNormStrideParamValue, blendWeightStrideParamValue, blendIndexStrideParamValue, numWeightsPerVertexParamValue, numVerticesParamValue);
	}
	native private void softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long srcPosPtr, long destPosPtr, long srcNormPtr, long destNormPtr, long blendWeightPtr, long blendIndexPtr, long blendMatrices, long srcPosStride, long destPosStride, long srcNormStride, long destNormStride, long blendWeightStride, long blendIndexStride, long numWeightsPerVertex, long numVertices);
	protected void softwareVertexSkinning_NoVirtual(FloatPointer srcPosPtr, FloatPointer destPosPtr, FloatPointer srcNormPtr, FloatPointer destNormPtr, FloatPointer blendWeightPtr, UBytePointer blendIndexPtr, NativeObjectPointer<com.earthview.world.spatial.math.Matrix4> blendMatrices, long srcPosStride, long destPosStride, long srcNormStride, long destNormStride, long blendWeightStride, long blendIndexStride, long numWeightsPerVertex, long numVertices)
	{
		long srcPosPtrParamValue = (srcPosPtr == null ? 0L : srcPosPtr.nativeObject.pointer);
		long destPosPtrParamValue = (destPosPtr == null ? 0L : destPosPtr.nativeObject.pointer);
		long srcNormPtrParamValue = (srcNormPtr == null ? 0L : srcNormPtr.nativeObject.pointer);
		long destNormPtrParamValue = (destNormPtr == null ? 0L : destNormPtr.nativeObject.pointer);
		long blendWeightPtrParamValue = (blendWeightPtr == null ? 0L : blendWeightPtr.nativeObject.pointer);
		long blendIndexPtrParamValue = (blendIndexPtr == null ? 0L : blendIndexPtr.nativeObject.pointer);
		long blendMatricesParamValue = (blendMatrices == null ? 0L : blendMatrices.nativeObject.pointer);
		long srcPosStrideParamValue = srcPosStride;
		long destPosStrideParamValue = destPosStride;
		long srcNormStrideParamValue = srcNormStride;
		long destNormStrideParamValue = destNormStride;
		long blendWeightStrideParamValue = blendWeightStride;
		long blendIndexStrideParamValue = blendIndexStride;
		long numWeightsPerVertexParamValue = numWeightsPerVertex;
		long numVerticesParamValue = numVertices;
		softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, srcPosPtrParamValue, destPosPtrParamValue, srcNormPtrParamValue, destNormPtrParamValue, blendWeightPtrParamValue, blendIndexPtrParamValue, blendMatricesParamValue, srcPosStrideParamValue, destPosStrideParamValue, srcNormStrideParamValue, destNormStrideParamValue, blendWeightStrideParamValue, blendIndexStrideParamValue, numWeightsPerVertexParamValue, numVerticesParamValue);
	}

	protected  void softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback(double t, long srcPos1, long srcPos2, long dstPos, long pos1VSize, long pos2VSize, long dstVSize, long numVertices, boolean morphNormals)
	{
		double tParamValue = t;
		FloatPointer srcPos1ParamValue = (srcPos1 == 0L ? null : new FloatPointer(new InstancePointer(srcPos1)));
		FloatPointer srcPos2ParamValue = (srcPos2 == 0L ? null : new FloatPointer(new InstancePointer(srcPos2)));
		FloatPointer dstPosParamValue = (dstPos == 0L ? null : new FloatPointer(new InstancePointer(dstPos)));
		long pos1VSizeParamValue = pos1VSize;
		long pos2VSizeParamValue = pos2VSize;
		long dstVSizeParamValue = dstVSize;
		long numVerticesParamValue = numVertices;
		boolean morphNormalsParamValue = morphNormals;
		softwareVertexMorph(tParamValue, srcPos1ParamValue, srcPos2ParamValue, dstPosParamValue, pos1VSizeParamValue, pos2VSizeParamValue, dstVSizeParamValue, numVerticesParamValue, morphNormalsParamValue);
	}

	native private void softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(long pNativeObject, double t, long srcPos1, long srcPos2, long dstPos, long pos1VSize, long pos2VSize, long dstVSize, long numVertices, boolean morphNormals);
	/**
	 * 顶点变换
	 * @param t 起始位置与终点位置的距离
	 * @param srcPos1 指向开始位置的缓冲器指针
	 * @param srcPos2 指向结束位置的缓冲器指针
	 * @param dstPos 指向目标位置的缓冲器指针
	 * @param numVertices 变换顶点的个数
	 */
	public void softwareVertexMorph(double t, FloatPointer srcPos1, FloatPointer srcPos2, FloatPointer dstPos, long pos1VSize, long pos2VSize, long dstVSize, long numVertices, boolean morphNormals)
	{
		double tParamValue = t;
		long srcPos1ParamValue = (srcPos1 == null ? 0L : srcPos1.nativeObject.pointer);
		long srcPos2ParamValue = (srcPos2 == null ? 0L : srcPos2.nativeObject.pointer);
		long dstPosParamValue = (dstPos == null ? 0L : dstPos.nativeObject.pointer);
		long pos1VSizeParamValue = pos1VSize;
		long pos2VSizeParamValue = pos2VSize;
		long dstVSizeParamValue = dstVSize;
		long numVerticesParamValue = numVertices;
		boolean morphNormalsParamValue = morphNormals;
		softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.nativeObject.pointer, tParamValue, srcPos1ParamValue, srcPos2ParamValue, dstPosParamValue, pos1VSizeParamValue, pos2VSizeParamValue, dstVSizeParamValue, numVerticesParamValue, morphNormalsParamValue);
	}
	native private void softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(long pNativeObject, double t, long srcPos1, long srcPos2, long dstPos, long pos1VSize, long pos2VSize, long dstVSize, long numVertices, boolean morphNormals);
	protected void softwareVertexMorph_NoVirtual(double t, FloatPointer srcPos1, FloatPointer srcPos2, FloatPointer dstPos, long pos1VSize, long pos2VSize, long dstVSize, long numVertices, boolean morphNormals)
	{
		double tParamValue = t;
		long srcPos1ParamValue = (srcPos1 == null ? 0L : srcPos1.nativeObject.pointer);
		long srcPos2ParamValue = (srcPos2 == null ? 0L : srcPos2.nativeObject.pointer);
		long dstPosParamValue = (dstPos == null ? 0L : dstPos.nativeObject.pointer);
		long pos1VSizeParamValue = pos1VSize;
		long pos2VSizeParamValue = pos2VSize;
		long dstVSizeParamValue = dstVSize;
		long numVerticesParamValue = numVertices;
		boolean morphNormalsParamValue = morphNormals;
		softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(this.nativeObject.pointer, tParamValue, srcPos1ParamValue, srcPos2ParamValue, dstPosParamValue, pos1VSizeParamValue, pos2VSizeParamValue, dstVSizeParamValue, numVerticesParamValue, morphNormalsParamValue);
	}

	protected  void concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback(long baseMatrix, long srcMatrices, long dstMatrices, long numMatrices)
	{
		com.earthview.world.spatial.math.Matrix4 baseMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		baseMatrixParamValue.setDelegate(true);
		baseMatrixParamValue.setInstancePointer(new InstancePointer(baseMatrix));
		IClassFactory baseMatrixParamValueClassFactory = GlobalClassFactoryMap.get(baseMatrixParamValue.getCppInstanceTypeName());
		if (baseMatrixParamValueClassFactory != null)
		{
			baseMatrixParamValue.setDelegate(true);
			baseMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)baseMatrixParamValueClassFactory.create();
			baseMatrixParamValue.setDelegate(true);
			baseMatrixParamValue.setInstancePointer(new InstancePointer(baseMatrix));
		}
		com.earthview.world.spatial.math.Matrix4 srcMatricesParamValue = (srcMatrices == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(srcMatricesParamValue != null)
		{
		srcMatricesParamValue.setDelegate(true);
		srcMatricesParamValue.setInstancePointer(new InstancePointer(srcMatrices));
		IClassFactory srcMatricesParamValueClassFactory = GlobalClassFactoryMap.get(srcMatricesParamValue.getCppInstanceTypeName());
		if (srcMatricesParamValueClassFactory != null)
		{
			srcMatricesParamValue.setDelegate(true);
			srcMatricesParamValue = (com.earthview.world.spatial.math.Matrix4)srcMatricesParamValueClassFactory.create();
			srcMatricesParamValue.setDelegate(true);
			srcMatricesParamValue.setInstancePointer(new InstancePointer(srcMatrices));
		}
		}
		com.earthview.world.spatial.math.Matrix4 dstMatricesParamValue = (dstMatrices == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(dstMatricesParamValue != null)
		{
		dstMatricesParamValue.setDelegate(true);
		dstMatricesParamValue.setInstancePointer(new InstancePointer(dstMatrices));
		IClassFactory dstMatricesParamValueClassFactory = GlobalClassFactoryMap.get(dstMatricesParamValue.getCppInstanceTypeName());
		if (dstMatricesParamValueClassFactory != null)
		{
			dstMatricesParamValue.setDelegate(true);
			dstMatricesParamValue = (com.earthview.world.spatial.math.Matrix4)dstMatricesParamValueClassFactory.create();
			dstMatricesParamValue.setDelegate(true);
			dstMatricesParamValue.setInstancePointer(new InstancePointer(dstMatrices));
		}
		}
		long numMatricesParamValue = numMatrices;
		concatenateAffineMatrices(baseMatrixParamValue, srcMatricesParamValue, dstMatricesParamValue, numMatricesParamValue);
	}

	native private void concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t(long pNativeObject, long baseMatrix, long srcMatrices, long dstMatrices, long numMatrices);
	/**
	 * 将一个仿射矩阵连接到一个仿射矩阵组阵列中
	 * @param baseMatrix 作为第一个操作数使用的矩阵
	 * @param srcMatrices 作为第二个操作数使用的矩阵阵列
	 * @param dstMatrices 存放矩阵连接结果的矩阵阵列
	 * @param numMatrices 阵列中矩阵个数
	 */
	public void concatenateAffineMatrices(com.earthview.world.spatial.math.Matrix4 baseMatrix, com.earthview.world.spatial.math.Matrix4 srcMatrices, com.earthview.world.spatial.math.Matrix4 dstMatrices, long numMatrices)
	{
		long baseMatrixParamValue = baseMatrix.nativeObject.pointer;
		long srcMatricesParamValue = (srcMatrices == null ? 0L : srcMatrices.nativeObject.pointer);
		long dstMatricesParamValue = (dstMatrices == null ? 0L : dstMatrices.nativeObject.pointer);
		long numMatricesParamValue = numMatrices;
		concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t(this.nativeObject.pointer, baseMatrixParamValue, srcMatricesParamValue, dstMatricesParamValue, numMatricesParamValue);
	}
	native private void concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_NoVirtual(long pNativeObject, long baseMatrix, long srcMatrices, long dstMatrices, long numMatrices);
	protected void concatenateAffineMatrices_NoVirtual(com.earthview.world.spatial.math.Matrix4 baseMatrix, com.earthview.world.spatial.math.Matrix4 srcMatrices, com.earthview.world.spatial.math.Matrix4 dstMatrices, long numMatrices)
	{
		long baseMatrixParamValue = baseMatrix.nativeObject.pointer;
		long srcMatricesParamValue = (srcMatrices == null ? 0L : srcMatrices.nativeObject.pointer);
		long dstMatricesParamValue = (dstMatrices == null ? 0L : dstMatrices.nativeObject.pointer);
		long numMatricesParamValue = numMatrices;
		concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_NoVirtual(this.nativeObject.pointer, baseMatrixParamValue, srcMatricesParamValue, dstMatricesParamValue, numMatricesParamValue);
	}

	protected  void calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback(long positions, long triangles, long faceNormals, long numTriangles)
	{
		FloatPointer positionsParamValue = (positions == 0L ? null : new FloatPointer(new InstancePointer(positions)));
		com.earthview.world.graphic.EdgeData.Triangle trianglesParamValue = (triangles == 0L ? null : new com.earthview.world.graphic.EdgeData.Triangle(CreatedWhenConstruct.CWC_NotToCreate));
		if(trianglesParamValue != null)
		{
		trianglesParamValue.setDelegate(true);
		trianglesParamValue.setInstancePointer(new InstancePointer(triangles));
		IClassFactory trianglesParamValueClassFactory = GlobalClassFactoryMap.get(trianglesParamValue.getCppInstanceTypeName());
		if (trianglesParamValueClassFactory != null)
		{
			trianglesParamValue.setDelegate(true);
			trianglesParamValue = (com.earthview.world.graphic.EdgeData.Triangle)trianglesParamValueClassFactory.create();
			trianglesParamValue.setDelegate(true);
			trianglesParamValue.setInstancePointer(new InstancePointer(triangles));
		}
		}
		com.earthview.world.spatial.math.Vector4 faceNormalsParamValue = (faceNormals == 0L ? null : new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate));
		if(faceNormalsParamValue != null)
		{
		faceNormalsParamValue.setDelegate(true);
		faceNormalsParamValue.setInstancePointer(new InstancePointer(faceNormals));
		IClassFactory faceNormalsParamValueClassFactory = GlobalClassFactoryMap.get(faceNormalsParamValue.getCppInstanceTypeName());
		if (faceNormalsParamValueClassFactory != null)
		{
			faceNormalsParamValue.setDelegate(true);
			faceNormalsParamValue = (com.earthview.world.spatial.math.Vector4)faceNormalsParamValueClassFactory.create();
			faceNormalsParamValue.setDelegate(true);
			faceNormalsParamValue.setInstancePointer(new InstancePointer(faceNormals));
		}
		}
		long numTrianglesParamValue = numTriangles;
		calculateFaceNormals(positionsParamValue, trianglesParamValue, faceNormalsParamValue, numTrianglesParamValue);
	}

	native private void calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t(long pNativeObject, long positions, long triangles, long faceNormals, long numTriangles);
	/**
	 * 计算某一位置上三角形的平面的法线
	 * @param positions ，三角形的位置信息，指向三角形平面的指针（通过三角形顶点索引来找到平面）
	 * @param triangles 需要计算平面法线的三角形
	 * @param faceNormals 存放三角形平面法线的阵列
	 * @param numTriangles 需要计算面法线的三角形的个数
	 */
	public void calculateFaceNormals(FloatPointer positions, com.earthview.world.graphic.EdgeData.Triangle triangles, com.earthview.world.spatial.math.Vector4 faceNormals, long numTriangles)
	{
		long positionsParamValue = (positions == null ? 0L : positions.nativeObject.pointer);
		long trianglesParamValue = (triangles == null ? 0L : triangles.nativeObject.pointer);
		long faceNormalsParamValue = (faceNormals == null ? 0L : faceNormals.nativeObject.pointer);
		long numTrianglesParamValue = numTriangles;
		calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t(this.nativeObject.pointer, positionsParamValue, trianglesParamValue, faceNormalsParamValue, numTrianglesParamValue);
	}
	native private void calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_NoVirtual(long pNativeObject, long positions, long triangles, long faceNormals, long numTriangles);
	protected void calculateFaceNormals_NoVirtual(FloatPointer positions, com.earthview.world.graphic.EdgeData.Triangle triangles, com.earthview.world.spatial.math.Vector4 faceNormals, long numTriangles)
	{
		long positionsParamValue = (positions == null ? 0L : positions.nativeObject.pointer);
		long trianglesParamValue = (triangles == null ? 0L : triangles.nativeObject.pointer);
		long faceNormalsParamValue = (faceNormals == null ? 0L : faceNormals.nativeObject.pointer);
		long numTrianglesParamValue = numTriangles;
		calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_NoVirtual(this.nativeObject.pointer, positionsParamValue, trianglesParamValue, faceNormalsParamValue, numTrianglesParamValue);
	}

	protected  void calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback(long lightPos, long faceNormals, long lightFacings, long numFaces)
	{
		com.earthview.world.spatial.math.Vector4 lightPosParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		lightPosParamValue.setDelegate(true);
		lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		IClassFactory lightPosParamValueClassFactory = GlobalClassFactoryMap.get(lightPosParamValue.getCppInstanceTypeName());
		if (lightPosParamValueClassFactory != null)
		{
			lightPosParamValue.setDelegate(true);
			lightPosParamValue = (com.earthview.world.spatial.math.Vector4)lightPosParamValueClassFactory.create();
			lightPosParamValue.setDelegate(true);
			lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		}
		com.earthview.world.spatial.math.Vector4 faceNormalsParamValue = (faceNormals == 0L ? null : new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate));
		if(faceNormalsParamValue != null)
		{
		faceNormalsParamValue.setDelegate(true);
		faceNormalsParamValue.setInstancePointer(new InstancePointer(faceNormals));
		IClassFactory faceNormalsParamValueClassFactory = GlobalClassFactoryMap.get(faceNormalsParamValue.getCppInstanceTypeName());
		if (faceNormalsParamValueClassFactory != null)
		{
			faceNormalsParamValue.setDelegate(true);
			faceNormalsParamValue = (com.earthview.world.spatial.math.Vector4)faceNormalsParamValueClassFactory.create();
			faceNormalsParamValue.setDelegate(true);
			faceNormalsParamValue.setInstancePointer(new InstancePointer(faceNormals));
		}
		}
		BytePointer lightFacingsParamValue = (lightFacings == 0L ? null : new BytePointer(new InstancePointer(lightFacings)));
		long numFacesParamValue = numFaces;
		calculateLightFacing(lightPosParamValue, faceNormalsParamValue, lightFacingsParamValue, numFacesParamValue);
	}

	native private void calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t(long pNativeObject, long lightPos, long faceNormals, long lightFacings, long numFaces);
	/**
	 * 计算光源面上三角形平面的法线
	 * @param lightPos 光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）
	 * @param faceNormals 三角形的面法线（面法线是单位正交向量加上到起点的距离）
	 * @param lightFacings 存放光源面的信息标记阵列，如果面法线朝向光源则标记是true，否则标记是false
	 * @param numFaces 需要计算的面法线的个数
	 */
	public void calculateLightFacing(com.earthview.world.spatial.math.Vector4 lightPos, com.earthview.world.spatial.math.Vector4 faceNormals, BytePointer lightFacings, long numFaces)
	{
		long lightPosParamValue = lightPos.nativeObject.pointer;
		long faceNormalsParamValue = (faceNormals == null ? 0L : faceNormals.nativeObject.pointer);
		long lightFacingsParamValue = (lightFacings == null ? 0L : lightFacings.nativeObject.pointer);
		long numFacesParamValue = numFaces;
		calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t(this.nativeObject.pointer, lightPosParamValue, faceNormalsParamValue, lightFacingsParamValue, numFacesParamValue);
	}
	native private void calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_NoVirtual(long pNativeObject, long lightPos, long faceNormals, long lightFacings, long numFaces);
	protected void calculateLightFacing_NoVirtual(com.earthview.world.spatial.math.Vector4 lightPos, com.earthview.world.spatial.math.Vector4 faceNormals, BytePointer lightFacings, long numFaces)
	{
		long lightPosParamValue = lightPos.nativeObject.pointer;
		long faceNormalsParamValue = (faceNormals == null ? 0L : faceNormals.nativeObject.pointer);
		long lightFacingsParamValue = (lightFacings == null ? 0L : lightFacings.nativeObject.pointer);
		long numFacesParamValue = numFaces;
		calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_NoVirtual(this.nativeObject.pointer, lightPosParamValue, faceNormalsParamValue, lightFacingsParamValue, numFacesParamValue);
	}

	protected  void extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback(long lightPos, double extrudeDist, long srcPositions, long destPositions, long numVertices)
	{
		com.earthview.world.spatial.math.Vector4 lightPosParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		lightPosParamValue.setDelegate(true);
		lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		IClassFactory lightPosParamValueClassFactory = GlobalClassFactoryMap.get(lightPosParamValue.getCppInstanceTypeName());
		if (lightPosParamValueClassFactory != null)
		{
			lightPosParamValue.setDelegate(true);
			lightPosParamValue = (com.earthview.world.spatial.math.Vector4)lightPosParamValueClassFactory.create();
			lightPosParamValue.setDelegate(true);
			lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		}
		double extrudeDistParamValue = extrudeDist;
		FloatPointer srcPositionsParamValue = (srcPositions == 0L ? null : new FloatPointer(new InstancePointer(srcPositions)));
		FloatPointer destPositionsParamValue = (destPositions == 0L ? null : new FloatPointer(new InstancePointer(destPositions)));
		long numVerticesParamValue = numVertices;
		extrudeVertices(lightPosParamValue, extrudeDistParamValue, srcPositionsParamValue, destPositionsParamValue, numVerticesParamValue);
	}

	native private void extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t(long pNativeObject, long lightPos, double extrudeDist, long srcPositions, long destPositions, long numVertices);
	/**
	 * 在距离光源固定的距离处拉伸顶点
	 * @param lightPos 光源的空间位置（光源位置是4D的，包括x、y、z（分别对应三维坐标）和w，w值为0.0f或者1.0f，w=0.0f，则光源为定向光源，w=1.0f，则光源是点光源）
	 * @param extrudeDist 拉伸距离
	 * @param srcPositions 指向顶点来源位置缓冲器的指针
	 * @param destPositions 指向顶点目标位置缓冲器的指针
	 * @param numVertices 需要拉伸的顶点个数
	 */
	public void extrudeVertices(com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist, FloatPointer srcPositions, FloatPointer destPositions, long numVertices)
	{
		long lightPosParamValue = lightPos.nativeObject.pointer;
		double extrudeDistParamValue = extrudeDist;
		long srcPositionsParamValue = (srcPositions == null ? 0L : srcPositions.nativeObject.pointer);
		long destPositionsParamValue = (destPositions == null ? 0L : destPositions.nativeObject.pointer);
		long numVerticesParamValue = numVertices;
		extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t(this.nativeObject.pointer, lightPosParamValue, extrudeDistParamValue, srcPositionsParamValue, destPositionsParamValue, numVerticesParamValue);
	}
	native private void extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_NoVirtual(long pNativeObject, long lightPos, double extrudeDist, long srcPositions, long destPositions, long numVertices);
	protected void extrudeVertices_NoVirtual(com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist, FloatPointer srcPositions, FloatPointer destPositions, long numVertices)
	{
		long lightPosParamValue = lightPos.nativeObject.pointer;
		double extrudeDistParamValue = extrudeDist;
		long srcPositionsParamValue = (srcPositions == null ? 0L : srcPositions.nativeObject.pointer);
		long destPositionsParamValue = (destPositions == null ? 0L : destPositions.nativeObject.pointer);
		long numVerticesParamValue = numVertices;
		extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_NoVirtual(this.nativeObject.pointer, lightPosParamValue, extrudeDistParamValue, srcPositionsParamValue, destPositionsParamValue, numVerticesParamValue);
	}

	public OptimisedUtil(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OptimisedUtil(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(long pNativeObject, String method);
	native protected void register_concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t(long pNativeObject, String method);
	native protected void register_calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t(long pNativeObject, String method);
	native protected void register_calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t(long pNativeObject, String method);
	native protected void register_extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, "softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback");
			this.register_softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.nativeObject.pointer, "softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback");
			this.register_concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t(this.nativeObject.pointer, "concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback");
			this.register_calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t(this.nativeObject.pointer, "calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback");
			this.register_calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t(this.nativeObject.pointer, "calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback");
			this.register_extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t(this.nativeObject.pointer, "extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback");
		}
	}
	
	public static OptimisedUtil fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OptimisedUtil obj = null;
 		if(baseObj instanceof OptimisedUtil)
		{
			obj = (OptimisedUtil)baseObj;
		} else {
			obj = new OptimisedUtil(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COptimisedUtil");
			obj.increaseCast();
		}

		return obj;
	}
}
