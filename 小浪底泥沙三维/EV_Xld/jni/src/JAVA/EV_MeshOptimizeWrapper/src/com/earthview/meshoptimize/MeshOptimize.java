package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimize extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimize", new MeshOptimizeClassFactory());
	}

	public MeshOptimize(com.earthview.meshoptimize.MeshOptimizeParams params) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer paramsPtr = new BasePointer(params);
		list.add("params", paramsPtr.get());
		Create("CMeshOptimize", list);
	}

	///
	public static final class NormAndVertexInfo extends RemoteNativeObject {
	
		public NormAndVertexInfo(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public NormAndVertexInfo(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public NormAndVertexInfo() {
			super(new InstancePointer(Create()),false);
		}
		native private long get_faceNormal_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_faceNormal()
		{
			long jniValue = get_faceNormal_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_faceNormal_CVector3 (long pNativeObject, long value);
		public void set_faceNormal(com.earthview.world.spatial.math.Vector3 faceNormal)
		{
			long faceNormalParamValue = faceNormal.nativeObject.pointer;
			
			set_faceNormal_CVector3(this.nativeObject.pointer, faceNormalParamValue);
		}
		
		native private long get_dstVertexIndex_void(long pNativeObject);
		public long get_dstVertexIndex()
		{
			long jniValue = get_dstVertexIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_dstVertexIndex_ev_uint32 (long pNativeObject, long value);
		public void set_dstVertexIndex(long dstVertexIndex)
		{
			long dstVertexIndexParamValue = dstVertexIndex;
			
			set_dstVertexIndex_ev_uint32(this.nativeObject.pointer, dstVertexIndexParamValue);
		}
		
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	///
	public static final class NormalInfo extends RemoteNativeObject {
	
		public NormalInfo(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public NormalInfo(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public NormalInfo() {
			super(new InstancePointer(Create()),false);
		}
		native private long get_faceNormal_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_faceNormal()
		{
			long jniValue = get_faceNormal_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_faceNormal_CVector3 (long pNativeObject, long value);
		public void set_faceNormal(com.earthview.world.spatial.math.Vector3 faceNormal)
		{
			long faceNormalParamValue = faceNormal.nativeObject.pointer;
			
			set_faceNormal_CVector3(this.nativeObject.pointer, faceNormalParamValue);
		}
		
		native private long[] get_vertexNormal_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3[] get_vertexNormal()
		{
			long[] jniValue = get_vertexNormal_void(this.nativeObject.pointer);
			
			if(jniValue == null) {
				return null;
			}
			com.earthview.world.spatial.math.Vector3[] __returnValueArray = new com.earthview.world.spatial.math.Vector3[3];
			for(int i = 0; i < jniValue.length; i++)
			{
			com.earthview.world.spatial.math.Vector3 __pointerValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			__pointerValue.setDelegate(true);
			__pointerValue.setInstancePointer(new InstancePointer(jniValue[i]));
			IClassFactory __pointerValueClassFactory = GlobalClassFactoryMap.get(__pointerValue.getCppInstanceTypeName());
			if (__pointerValueClassFactory != null)
			{
				__pointerValue.setDelegate(true);
				__pointerValue = (com.earthview.world.spatial.math.Vector3)__pointerValueClassFactory.create();
				__pointerValue.setDelegate(true);
				__pointerValue.setInstancePointer(new InstancePointer(jniValue[i]));
			}
			__returnValueArray[i] = __pointerValue;
			}
			return __returnValueArray;
		}
		
		native private void set_vertexNormal_CVector3 (long pNativeObject, long[] value);
		public void set_vertexNormal(com.earthview.world.spatial.math.Vector3[] vertexNormal)
		{
			long[] vertexNormalParamValue = (vertexNormal == null ? null : ArrayUtils.convertToLongArray(vertexNormal));
			
			set_vertexNormal_CVector3(this.nativeObject.pointer, vertexNormalParamValue);
		}
		
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	native private void addVertex_float_float_float(long pNativeObject, float x, float y, float z);
	///填数据接口
	public void addVertex(float x, float y, float z)
	{
		float xParamValue = x;
		float yParamValue = y;
		float zParamValue = z;
		addVertex_float_float_float(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void addNormal_float_float_float(long pNativeObject, float x, float y, float z);
	public void addNormal(float x, float y, float z)
	{
		float xParamValue = x;
		float yParamValue = y;
		float zParamValue = z;
		addNormal_float_float_float(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void addTex_float_float(long pNativeObject, float u, float v);
	public void addTex(float u, float v)
	{
		float uParamValue = u;
		float vParamValue = v;
		addTex_float_float(this.nativeObject.pointer, uParamValue, vParamValue);
	}
	native private void addColor_float_float_float_float(long pNativeObject, float r, float g, float b, float a);
	public void addColor(float r, float g, float b, float a)
	{
		float rParamValue = r;
		float gParamValue = g;
		float bParamValue = b;
		float aParamValue = a;
		addColor_float_float_float_float(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue, aParamValue);
	}
	native private void addFace_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long v0, long v1, long v2);
	public void addFace(long v0, long v1, long v2)
	{
		long v0ParamValue = v0;
		long v1ParamValue = v1;
		long v2ParamValue = v2;
		addFace_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, v0ParamValue, v1ParamValue, v2ParamValue);
	}
	native private boolean optimize_void(long pNativeObject);
	///优化接口
	public boolean optimize()
	{
		boolean returnValue = optimize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean vertex_is_valid_ev_uint32(long pNativeObject, long vertexID);
	///返回数据接口
	public boolean vertex_is_valid(long vertexID)
	{
		long vertexIDParamValue = vertexID;
		boolean returnValue = vertex_is_valid_ev_uint32(this.nativeObject.pointer, vertexIDParamValue);
		return returnValue;
	}
	native private long vertexCount_void(long pNativeObject);
	public long vertexCount()
	{
		long returnValue = vertexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void vertex_ev_uint32_float_float_float(long pNativeObject, long i, long x, long y, long z);
	public void vertex(long i, FloatPointer x, FloatPointer y, FloatPointer z)
	{
		long iParamValue = i;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		vertex_ev_uint32_float_float_float(this.nativeObject.pointer, iParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private long normalCount_void(long pNativeObject);
	public long normalCount()
	{
		long returnValue = normalCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void normal_ev_uint32_float_float_float(long pNativeObject, long i, long x, long y, long z);
	public void normal(long i, FloatPointer x, FloatPointer y, FloatPointer z)
	{
		long iParamValue = i;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		normal_ev_uint32_float_float_float(this.nativeObject.pointer, iParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private long texCount_void(long pNativeObject);
	public long texCount()
	{
		long returnValue = texCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void tex_ev_uint32_float_float(long pNativeObject, long i, long u, long v);
	public void tex(long i, FloatPointer u, FloatPointer v)
	{
		long iParamValue = i;
		long uParamValue = u.nativeObject.pointer;
		long vParamValue = v.nativeObject.pointer;
		tex_ev_uint32_float_float(this.nativeObject.pointer, iParamValue, uParamValue, vParamValue);
	}
	native private boolean face_is_valid_ev_uint32(long pNativeObject, long faceID);
	public boolean face_is_valid(long faceID)
	{
		long faceIDParamValue = faceID;
		boolean returnValue = face_is_valid_ev_uint32(this.nativeObject.pointer, faceIDParamValue);
		return returnValue;
	}
	native private long faceCount_void(long pNativeObject);
	public long faceCount()
	{
		long returnValue = faceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void face_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long i, long v0, long v1, long v2);
	public void face(long i, UIntegerPointer v0, UIntegerPointer v1, UIntegerPointer v2)
	{
		long iParamValue = i;
		long v0ParamValue = v0.nativeObject.pointer;
		long v1ParamValue = v1.nativeObject.pointer;
		long v2ParamValue = v2.nativeObject.pointer;
		face_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, iParamValue, v0ParamValue, v1ParamValue, v2ParamValue);
	}
	native private long colorCount_void(long pNativeObject);
	public long colorCount()
	{
		long returnValue = colorCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void color_ev_uint32_float_float_float_float(long pNativeObject, long i, long r, long g, long b, long a);
	public void color(long i, FloatPointer r, FloatPointer g, FloatPointer b, FloatPointer a)
	{
		long iParamValue = i;
		long rParamValue = r.nativeObject.pointer;
		long gParamValue = g.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		color_ev_uint32_float_float_float_float(this.nativeObject.pointer, iParamValue, rParamValue, gParamValue, bParamValue, aParamValue);
	}
	native private void dispose_void(long pNativeObject);
	///销毁释放内存
	public void dispose()
	{
		dispose_void(this.nativeObject.pointer);
	}
	native private void createStdModel_void(long pNativeObject);
	///
	public void createStdModel()
	{
		createStdModel_void(this.nativeObject.pointer);
	}
	native private void initializeQSlim_void(long pNativeObject);
	///
	public void initializeQSlim()
	{
		initializeQSlim_void(this.nativeObject.pointer);
	}
	native private void computeFaceNormal_ev_uint32_float_float_float_bool(long pNativeObject, long f, long x, long y, long z, boolean will_unitize);
	///
	public void computeFaceNormal(long f, FloatPointer x, FloatPointer y, FloatPointer z, boolean will_unitize)
	{
		long fParamValue = f;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		boolean will_unitizeParamValue = will_unitize;
		computeFaceNormal_ev_uint32_float_float_float_bool(this.nativeObject.pointer, fParamValue, xParamValue, yParamValue, zParamValue, will_unitizeParamValue);
	}
	native private void computeVertexNormal_ev_uint32_float_float_float(long pNativeObject, long v, long x, long y, long z);
	///
	public void computeVertexNormal(long v, FloatPointer x, FloatPointer y, FloatPointer z)
	{
		long vParamValue = v;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		computeVertexNormal_ev_uint32_float_float_float(this.nativeObject.pointer, vParamValue, xParamValue, yParamValue, zParamValue);
	}
	public MeshOptimize(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshOptimize(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshOptimize fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshOptimize obj = null;
 		if(baseObj instanceof MeshOptimize)
		{
			obj = (MeshOptimize)baseObj;
		} else {
			obj = new MeshOptimize(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshOptimize");
			obj.increaseCast();
		}

		return obj;
	}
}
