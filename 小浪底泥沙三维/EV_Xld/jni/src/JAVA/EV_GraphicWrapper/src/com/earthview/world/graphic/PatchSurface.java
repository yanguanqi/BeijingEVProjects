package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PatchSurface extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPatchSurface", new PatchSurfaceClassFactory());
	}

	public PatchSurface() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPatchSurface", null);
	}

	public enum PatchSurfaceType implements INativeEnum<PatchSurfaceType> {
		PST_BEZIER(PatchSurfaceTypeHelper.ENUM_VALUES[0]);
		private int value;
		PatchSurfaceType(int i) {
			this.value = i;
		}
		public PatchSurfaceType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final PatchSurfaceType toEnum(int retval) {
			if(retval == PST_BEZIER.value){
				return PST_BEZIER;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class PatchSurfaceTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Constant for indicating automatic determination of subdivision level for patches
	public enum SubdivisionLevel implements INativeEnum<SubdivisionLevel> {
		AUTO_LEVEL(SubdivisionLevelHelper.ENUM_VALUES[0]);
		private int value;
		SubdivisionLevel(int i) {
			this.value = i;
		}
		public SubdivisionLevel getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final SubdivisionLevel toEnum(int retval) {
			if(retval == AUTO_LEVEL.value){
				return AUTO_LEVEL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class SubdivisionLevelHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum VisibleSide implements INativeEnum<VisibleSide> {
		VS_FRONT(VisibleSideHelper.ENUM_VALUES[0]),
		VS_BACK(VisibleSideHelper.ENUM_VALUES[1]),
		VS_BOTH(VisibleSideHelper.ENUM_VALUES[2]);
		private int value;
		VisibleSide(int i) {
			this.value = i;
		}
		public VisibleSide getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final VisibleSide toEnum(int retval) {
			if(retval == VS_FRONT.value){
				return VS_FRONT;
			}
			else if(retval == VS_BACK.value){
				return VS_BACK;
			}
			else if(retval == VS_BOTH.value){
				return VS_BOTH;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class VisibleSideHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t_ev_size_t_VisibleSide(long pNativeObject, long controlPointBuffer, long ref_declaration, long width, long height, int pType, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide);
	//// Both sides are visible - warning this creates 2x the number of triangles and adds extra overhead for calculating normals
	public void defineSurface(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration ref_declaration, long width, long height, com.earthview.world.graphic.PatchSurface.PatchSurfaceType pType, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long ref_declarationParamValue = (ref_declaration == null ? 0L : ref_declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		int pTypeParamValue = pType.getValue();
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t_ev_size_t_VisibleSide(this.nativeObject.pointer, controlPointBufferParamValue, ref_declarationParamValue, widthParamValue, heightParamValue, pTypeParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue);
	}
	native private void defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t_ev_size_t(long pNativeObject, long controlPointBuffer, long ref_declaration, long width, long height, int pType, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel);
	public void defineSurface(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration ref_declaration, long width, long height, com.earthview.world.graphic.PatchSurface.PatchSurfaceType pType, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long ref_declarationParamValue = (ref_declaration == null ? 0L : ref_declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		int pTypeParamValue = pType.getValue();
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t_ev_size_t(this.nativeObject.pointer, controlPointBufferParamValue, ref_declarationParamValue, widthParamValue, heightParamValue, pTypeParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue);
	}
	native private void defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t(long pNativeObject, long controlPointBuffer, long ref_declaration, long width, long height, int pType, long uMaxSubdivisionLevel);
	public void defineSurface(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration ref_declaration, long width, long height, com.earthview.world.graphic.PatchSurface.PatchSurfaceType pType, long uMaxSubdivisionLevel)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long ref_declarationParamValue = (ref_declaration == null ? 0L : ref_declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		int pTypeParamValue = pType.getValue();
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t(this.nativeObject.pointer, controlPointBufferParamValue, ref_declarationParamValue, widthParamValue, heightParamValue, pTypeParamValue, uMaxSubdivisionLevelParamValue);
	}
	native private void defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType(long pNativeObject, long controlPointBuffer, long ref_declaration, long width, long height, int pType);
	public void defineSurface(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration ref_declaration, long width, long height, com.earthview.world.graphic.PatchSurface.PatchSurfaceType pType)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long ref_declarationParamValue = (ref_declaration == null ? 0L : ref_declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		int pTypeParamValue = pType.getValue();
		defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType(this.nativeObject.pointer, controlPointBufferParamValue, ref_declarationParamValue, widthParamValue, heightParamValue, pTypeParamValue);
	}
	native private void defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t(long pNativeObject, long controlPointBuffer, long ref_declaration, long width, long height);
	public void defineSurface(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration ref_declaration, long width, long height)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long ref_declarationParamValue = (ref_declaration == null ? 0L : ref_declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		defineSurface_void_CVertexDeclaration_ev_size_t_ev_size_t(this.nativeObject.pointer, controlPointBufferParamValue, ref_declarationParamValue, widthParamValue, heightParamValue);
	}
	native private long getRequiredVertexCount_void(long pNativeObject);
	public long getRequiredVertexCount()
	{
		long returnValue = getRequiredVertexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRequiredIndexCount_void(long pNativeObject);
	public long getRequiredIndexCount()
	{
		long returnValue = getRequiredIndexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCurrentIndexCount_void(long pNativeObject);
	public long getCurrentIndexCount()
	{
		long returnValue = getCurrentIndexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getIndexOffset_void(long pNativeObject);
	//// Returns the index offset used by this buffer to write data into the buffer
	public long getIndexOffset()
	{
		long returnValue = getIndexOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVertexOffset_void(long pNativeObject);
	//// Returns the vertex offset used by this buffer to write data into the buffer
	public long getVertexOffset()
	{
		long returnValue = getVertexOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBounds_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getBounds()
	{
		long returnValue = getBounds_void(this.nativeObject.pointer);
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
	native private double getBoundingSphereRadius_void(long pNativeObject);
	public double getBoundingSphereRadius()
	{
		double returnValue = getBoundingSphereRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void build_CHardwareVertexBufferSharedPtr_ev_size_t_CHardwareIndexBufferSharedPtr_ev_size_t(long pNativeObject, long destVertexBuffer, long vertexStart, long destIndexBuffer, long indexStart);
	public void build(com.earthview.world.graphic.HardwareVertexBufferSharedPtr destVertexBuffer, long vertexStart, com.earthview.world.graphic.HardwareIndexBufferSharedPtr destIndexBuffer, long indexStart)
	{
		long destVertexBufferParamValue = destVertexBuffer.nativeObject.pointer;
		long vertexStartParamValue = vertexStart;
		long destIndexBufferParamValue = destIndexBuffer.nativeObject.pointer;
		long indexStartParamValue = indexStart;
		build_CHardwareVertexBufferSharedPtr_ev_size_t_CHardwareIndexBufferSharedPtr_ev_size_t(this.nativeObject.pointer, destVertexBufferParamValue, vertexStartParamValue, destIndexBufferParamValue, indexStartParamValue);
	}
	native private void setSubdivisionFactor_Real(long pNativeObject, double factor);
	public void setSubdivisionFactor(double factor)
	{
		double factorParamValue = factor;
		setSubdivisionFactor_Real(this.nativeObject.pointer, factorParamValue);
	}
	native private double getSubdivisionFactor_void(long pNativeObject);
	public double getSubdivisionFactor()
	{
		double returnValue = getSubdivisionFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getControlPointBuffer_void(long pNativeObject);
	public VoidPointer getControlPointBuffer()
	{
		long returnValue = getControlPointBuffer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void notifyControlPointBufferDeallocated_void(long pNativeObject);
	public void notifyControlPointBufferDeallocated()
	{
		notifyControlPointBufferDeallocated_void(this.nativeObject.pointer);
	}
	public PatchSurface(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PatchSurface(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PatchSurface fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PatchSurface obj = null;
 		if(baseObj instanceof PatchSurface)
		{
			obj = (PatchSurface)baseObj;
		} else {
			obj = new PatchSurface(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPatchSurface");
			obj.increaseCast();
		}

		return obj;
	}
}
