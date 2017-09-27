package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纹理合并、mesh合并的参数结构体
 */
public class MeshParams extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshParams", new MeshParamsClassFactory());
	}

	/**
	 * 构造函数
	 */
	public MeshParams() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshParams", null);
	}

	/**
	 * 纹理渲染的类型
	 */
	public enum CompositeType implements INativeEnum<CompositeType> {
		CT_EffectFirst(CompositeTypeHelper.ENUM_VALUES[0]),
		CT_EfficiencyFirst(CompositeTypeHelper.ENUM_VALUES[1]);
		private int value;
		CompositeType(int i) {
			this.value = i;
		}
		public CompositeType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CompositeType toEnum(int retval) {
			if(retval == CT_EffectFirst.value){
				return CT_EffectFirst;
			}
			else if(retval == CT_EfficiencyFirst.value){
				return CT_EfficiencyFirst;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CompositeTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * CoordinateSystemType坐标系的类型
	 */
	public enum CSType implements INativeEnum<CSType> {
		CST_LeftHandle(CSTypeHelper.ENUM_VALUES[0]),
		CST_RightHandle(CSTypeHelper.ENUM_VALUES[1]);
		private int value;
		CSType(int i) {
			this.value = i;
		}
		public CSType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CSType toEnum(int retval) {
			if(retval == CST_LeftHandle.value){
				return CST_LeftHandle;
			}
			else if(retval == CST_RightHandle.value){
				return CST_RightHandle;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CSTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private boolean get_m_bOnlyForPC_void(long pNativeObject);
	public boolean get_m_bOnlyForPC()
	{
		boolean jniValue = get_m_bOnlyForPC_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bOnlyForPC_ev_bool (long pNativeObject, boolean value);
	public void set_m_bOnlyForPC(boolean m_bOnlyForPC)
	{
		boolean m_bOnlyForPCParamValue = m_bOnlyForPC;
		
		set_m_bOnlyForPC_ev_bool(this.nativeObject.pointer, m_bOnlyForPCParamValue);
	}
	
	native private boolean get_m_bCreateLod_void(long pNativeObject);
	public boolean get_m_bCreateLod()
	{
		boolean jniValue = get_m_bCreateLod_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bCreateLod_ev_bool (long pNativeObject, boolean value);
	public void set_m_bCreateLod(boolean m_bCreateLod)
	{
		boolean m_bCreateLodParamValue = m_bCreateLod;
		
		set_m_bCreateLod_ev_bool(this.nativeObject.pointer, m_bCreateLodParamValue);
	}
	
	native private boolean get_m_bYAxisUp_void(long pNativeObject);
	public boolean get_m_bYAxisUp()
	{
		boolean jniValue = get_m_bYAxisUp_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bYAxisUp_ev_bool (long pNativeObject, boolean value);
	public void set_m_bYAxisUp(boolean m_bYAxisUp)
	{
		boolean m_bYAxisUpParamValue = m_bYAxisUp;
		
		set_m_bYAxisUp_ev_bool(this.nativeObject.pointer, m_bYAxisUpParamValue);
	}
	
	native private boolean get_m_bShareGeometry_void(long pNativeObject);
	public boolean get_m_bShareGeometry()
	{
		boolean jniValue = get_m_bShareGeometry_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bShareGeometry_ev_bool (long pNativeObject, boolean value);
	public void set_m_bShareGeometry(boolean m_bShareGeometry)
	{
		boolean m_bShareGeometryParamValue = m_bShareGeometry;
		
		set_m_bShareGeometry_ev_bool(this.nativeObject.pointer, m_bShareGeometryParamValue);
	}
	
	native private boolean get_m_exportLine_void(long pNativeObject);
	public boolean get_m_exportLine()
	{
		boolean jniValue = get_m_exportLine_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_exportLine_ev_bool (long pNativeObject, boolean value);
	public void set_m_exportLine(boolean m_exportLine)
	{
		boolean m_exportLineParamValue = m_exportLine;
		
		set_m_exportLine_ev_bool(this.nativeObject.pointer, m_exportLineParamValue);
	}
	
	native private boolean get_AnimationResample_void(long pNativeObject);
	public boolean get_AnimationResample()
	{
		boolean jniValue = get_AnimationResample_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_AnimationResample_ev_bool (long pNativeObject, boolean value);
	public void set_AnimationResample(boolean AnimationResample)
	{
		boolean AnimationResampleParamValue = AnimationResample;
		
		set_AnimationResample_ev_bool(this.nativeObject.pointer, AnimationResampleParamValue);
	}
	
	native private boolean get_mbImportModelDB_void(long pNativeObject);
	public boolean get_mbImportModelDB()
	{
		boolean jniValue = get_mbImportModelDB_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbImportModelDB_ev_bool (long pNativeObject, boolean value);
	public void set_mbImportModelDB(boolean mbImportModelDB)
	{
		boolean mbImportModelDBParamValue = mbImportModelDB;
		
		set_mbImportModelDB_ev_bool(this.nativeObject.pointer, mbImportModelDBParamValue);
	}
	
	native private boolean get_mbscenefile_void(long pNativeObject);
	public boolean get_mbscenefile()
	{
		boolean jniValue = get_mbscenefile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbscenefile_ev_bool (long pNativeObject, boolean value);
	public void set_mbscenefile(boolean mbscenefile)
	{
		boolean mbscenefileParamValue = mbscenefile;
		
		set_mbscenefile_ev_bool(this.nativeObject.pointer, mbscenefileParamValue);
	}
	
	native private boolean get_mbTraverseFolder_void(long pNativeObject);
	public boolean get_mbTraverseFolder()
	{
		boolean jniValue = get_mbTraverseFolder_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbTraverseFolder_ev_bool (long pNativeObject, boolean value);
	public void set_mbTraverseFolder(boolean mbTraverseFolder)
	{
		boolean mbTraverseFolderParamValue = mbTraverseFolder;
		
		set_mbTraverseFolder_ev_bool(this.nativeObject.pointer, mbTraverseFolderParamValue);
	}
	
	native private int get_CoordType_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataexchange.MeshParams.CSType get_CoordType()
	{
		int jniValue = get_CoordType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.dataexchange.MeshParams.CSType.toEnum(jniValue);
	}
	
	native private void set_CoordType_CSType (long pNativeObject, int value);
	public void set_CoordType(com.earthview.world.spatial3d.dataexchange.MeshParams.CSType CoordType)
	{
		int CoordTypeParamValue = CoordType.getValue();
		
		set_CoordType_CSType(this.nativeObject.pointer, CoordTypeParamValue);
	}
	
	native private int get_SrsID_void(long pNativeObject);
	public int get_SrsID()
	{
		int jniValue = get_SrsID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_SrsID_ev_int32 (long pNativeObject, int value);
	public void set_SrsID(int SrsID)
	{
		int SrsIDParamValue = SrsID;
		
		set_SrsID_ev_int32(this.nativeObject.pointer, SrsIDParamValue);
	}
	
	native private boolean get_CompositeSubMesh_void(long pNativeObject);
	public boolean get_CompositeSubMesh()
	{
		boolean jniValue = get_CompositeSubMesh_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_CompositeSubMesh_ev_bool (long pNativeObject, boolean value);
	public void set_CompositeSubMesh(boolean CompositeSubMesh)
	{
		boolean CompositeSubMeshParamValue = CompositeSubMesh;
		
		set_CompositeSubMesh_ev_bool(this.nativeObject.pointer, CompositeSubMeshParamValue);
	}
	
	native private boolean get_BothSide_void(long pNativeObject);
	public boolean get_BothSide()
	{
		boolean jniValue = get_BothSide_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_BothSide_ev_bool (long pNativeObject, boolean value);
	public void set_BothSide(boolean BothSide)
	{
		boolean BothSideParamValue = BothSide;
		
		set_BothSide_ev_bool(this.nativeObject.pointer, BothSideParamValue);
	}
	
	native private boolean get_BuildEageList_void(long pNativeObject);
	public boolean get_BuildEageList()
	{
		boolean jniValue = get_BuildEageList_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_BuildEageList_ev_bool (long pNativeObject, boolean value);
	public void set_BuildEageList(boolean BuildEageList)
	{
		boolean BuildEageListParamValue = BuildEageList;
		
		set_BuildEageList_ev_bool(this.nativeObject.pointer, BuildEageListParamValue);
	}
	
	native private boolean get_mbIsCompress_void(long pNativeObject);
	public boolean get_mbIsCompress()
	{
		boolean jniValue = get_mbIsCompress_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbIsCompress_ev_bool (long pNativeObject, boolean value);
	public void set_mbIsCompress(boolean mbIsCompress)
	{
		boolean mbIsCompressParamValue = mbIsCompress;
		
		set_mbIsCompress_ev_bool(this.nativeObject.pointer, mbIsCompressParamValue);
	}
	
	native private int get_Method_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataexchange.MeshParams.CompositeType get_Method()
	{
		int jniValue = get_Method_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.dataexchange.MeshParams.CompositeType.toEnum(jniValue);
	}
	
	native private void set_Method_CompositeType (long pNativeObject, int value);
	public void set_Method(com.earthview.world.spatial3d.dataexchange.MeshParams.CompositeType Method)
	{
		int MethodParamValue = Method.getValue();
		
		set_Method_CompositeType(this.nativeObject.pointer, MethodParamValue);
	}
	
	native private long get_MaxWidth_void(long pNativeObject);
	public long get_MaxWidth()
	{
		long jniValue = get_MaxWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_MaxWidth_ev_uint32 (long pNativeObject, long value);
	public void set_MaxWidth(long MaxWidth)
	{
		long MaxWidthParamValue = MaxWidth;
		
		set_MaxWidth_ev_uint32(this.nativeObject.pointer, MaxWidthParamValue);
	}
	
	native private long get_MaxHeight_void(long pNativeObject);
	public long get_MaxHeight()
	{
		long jniValue = get_MaxHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_MaxHeight_ev_uint32 (long pNativeObject, long value);
	public void set_MaxHeight(long MaxHeight)
	{
		long MaxHeightParamValue = MaxHeight;
		
		set_MaxHeight_ev_uint32(this.nativeObject.pointer, MaxHeightParamValue);
	}
	
	native private long get_Margin_void(long pNativeObject);
	public long get_Margin()
	{
		long jniValue = get_Margin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Margin_ev_uint32 (long pNativeObject, long value);
	public void set_Margin(long Margin)
	{
		long MarginParamValue = Margin;
		
		set_Margin_ev_uint32(this.nativeObject.pointer, MarginParamValue);
	}
	
	native private boolean get_m_bClearTarget_void(long pNativeObject);
	public boolean get_m_bClearTarget()
	{
		boolean jniValue = get_m_bClearTarget_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bClearTarget_ev_bool (long pNativeObject, boolean value);
	public void set_m_bClearTarget(boolean m_bClearTarget)
	{
		boolean m_bClearTargetParamValue = m_bClearTarget;
		
		set_m_bClearTarget_ev_bool(this.nativeObject.pointer, m_bClearTargetParamValue);
	}
	
	native private static long get_DEFAULT_void();
	public static com.earthview.world.spatial3d.dataexchange.MeshParams get_DEFAULT()
	{
		long jniValue = get_DEFAULT_void();
		
		com.earthview.world.spatial3d.dataexchange.MeshParams __returnValue = new com.earthview.world.spatial3d.dataexchange.MeshParams(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshParams");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.MeshParams)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshParams");
		}
		return __returnValue;
	}
	
	native private short get_AlphaRejection_void(long pNativeObject);
	public short get_AlphaRejection()
	{
		short jniValue = get_AlphaRejection_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_AlphaRejection_ev_byte (long pNativeObject, short value);
	public void set_AlphaRejection(short AlphaRejection)
	{
		short AlphaRejectionParamValue = AlphaRejection;
		
		set_AlphaRejection_ev_byte(this.nativeObject.pointer, AlphaRejectionParamValue);
	}
	
	public MeshParams(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshParams(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshParams fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshParams obj = null;
 		if(baseObj instanceof MeshParams)
		{
			obj = (MeshParams)baseObj;
		} else {
			obj = new MeshParams(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshParams");
			obj.increaseCast();
		}

		return obj;
	}
}
