package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
///            矢量图元---长方体
/// 1. 长方体直接继承EarthView::World::Geometry3D::CGeometry3D，设置长方体的属性即可
/// 2. 提供了绘制方法
/// Note：若绘制成实心不加纹理，则是8个顶点和36个索引，若
/// 含有纹理，则绘制成6个面
/// <summary>
public class MovableCube extends com.earthview.world.geometry3d.Geometry3D {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CMovableCube", new MovableCubeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCMovableCubeProxy", new MovableCubeClassFactory());
	}

	public MovableCube() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMovableCubeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.MovableCube".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/// <summary>
	///  构造函数
	/// <summary>
	/// <param name="min">最小的顶点</param>
	/// <param name="max">最大的顶点</param>
	/// <param name="drawingMode">绘制模式</param>
	/// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
	public MovableCube(com.earthview.world.spatial.math.Vector3 min, com.earthview.world.spatial.math.Vector3 max, com.earthview.world.geometry3d.DrawingMode drawingMode, boolean bIncludeTextureCoordinates) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer minPtr = new BasePointer(min);
		list.add("min", minPtr.get());
		BasePointer maxPtr = new BasePointer(max);
		list.add("max", maxPtr.get());
		BasePointer drawingModePtr = new BasePointer(drawingMode);
		list.add("drawingMode", drawingModePtr.get());
		BasePointer bIncludeTextureCoordinatesPtr = new BasePointer(bIncludeTextureCoordinates);
		list.add("bIncludeTextureCoordinates", bIncludeTextureCoordinatesPtr.get());
		Create("JCMovableCubeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.MovableCube".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/// <summary>
	///  构造函数
	/// <summary>
	/// <param name="mx">最小的顶点x</param>
	/// <param name="my">最小的顶点y</param>
	/// <param name="mz">最小的顶点z</param>
	/// <param name="Mx">最大的顶点x</param>
	/// <param name="My">最大的顶点y</param>
	/// <param name="Mz">最大的顶点z</param>
	/// <param name="drawingMode">绘制模式</param>
	/// <param name="includeTextureCoordinates">是否包含纹理坐标,true为包含</param>
	public MovableCube(double mx, double my, double mz, double Mx, double My, double Mz, com.earthview.world.geometry3d.DrawingMode drawingMode, boolean bIncludeTextureCoordinates) {
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
		BasePointer drawingModePtr = new BasePointer(drawingMode);
		list.add("drawingMode", drawingModePtr.get());
		BasePointer bIncludeTextureCoordinatesPtr = new BasePointer(bIncludeTextureCoordinates);
		list.add("bIncludeTextureCoordinates", bIncludeTextureCoordinatesPtr.get());
		Create("JCMovableCubeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.MovableCube".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/// <summary>
	///  构造函数
	/// <summary>
	/// <param name="EarthView::World::Spatial::Math::CAxisAlignedBox">包围盒</param>
	public MovableCube(com.earthview.world.spatial.math.AxisAlignedBox box) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		Create("JCMovableCubeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.MovableCube".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public MovableCube(com.earthview.world.geometry3d.MovableCube other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("JCMovableCubeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.MovableCube".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CMovableCube(long pNativeObject, long other);
	public com.earthview.world.geometry3d.MovableCube OperatorAssign(com.earthview.world.geometry3d.MovableCube other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CMovableCube(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.geometry3d.MovableCube __returnValue = new com.earthview.world.geometry3d.MovableCube(CreatedWhenConstruct.CWC_NotToCreate, "CMovableCube");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.MovableCube)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableCube");
		}
		return __returnValue;
	}
	native private void setExtents_CVector3_CVector3(long pNativeObject, long min, long max);
	/// <summary>
	///  设置长方体范围
	/// <summary>
	/// <param name="min">最小的顶点</param>
	/// <param name="max">最大的顶点</param>
	public void setExtents(com.earthview.world.spatial.math.Vector3 min, com.earthview.world.spatial.math.Vector3 max)
	{
		long minParamValue = min.nativeObject.pointer;
		long maxParamValue = max.nativeObject.pointer;
		setExtents_CVector3_CVector3(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private void setExtents_Real_Real_Real_Real_Real_Real(long pNativeObject, double mx, double my, double mz, double Mx, double My, double Mz);
	/// <summary>
	///  设置长方体范围
	/// <summary>
	/// <param name="mx">最小的顶点x</param>
	/// <param name="my">最小的顶点y</param>
	/// <param name="mz">最小的顶点z</param>
	/// <param name="Mx">最大的顶点x</param>
	/// <param name="My">最大的顶点y</param>
	/// <param name="Mz">最大的顶点z</param>
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
	native private long getCorner_CubeCornerEnum(long pNativeObject, int corner);
	/// <summary>
	///  获取顶点信息
	/// <summary>
	/// <param name="corner">长方体点位置信息枚举</param>
	public com.earthview.world.spatial.math.Vector3 getCorner(com.earthview.world.geometry3d.CubeCornerEnum corner)
	{
		int cornerParamValue = corner.getValue();
		long returnValue = getCorner_CubeCornerEnum(this.nativeObject.pointer, cornerParamValue);
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
	native private long getMinimum_void(long pNativeObject);
	/// <summary>
	///  获取最小点位置信息
	/// <summary>
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
	native private void setMinimum_CVector3(long pNativeObject, long vec);
	/// <summary>
	///  设置最小点位置信息
	/// <summary>
	public void setMinimum(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setMinimum_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private long getMaximum_void(long pNativeObject);
	/// <summary>
	///  获取最大点位置信息
	/// <summary>
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
	native private void setMaximum_CVector3(long pNativeObject, long vec);
	/// <summary>
	///  设置最大点位置信息
	/// <summary>
	public void setMaximum(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setMaximum_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private boolean getDrawingMode_void(long pNativeObject);
	/// <summary>
	///  获取是绘制模式
	/// <summary>
	public boolean getDrawingMode()
	{
		boolean returnValue = getDrawingMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDrawingMode_DrawingMode(long pNativeObject, int drawingMode);
	/// <summary>
	///  设置绘制模式
	/// <summary>
	public void setDrawingMode(com.earthview.world.geometry3d.DrawingMode drawingMode)
	{
		int drawingModeParamValue = drawingMode.getValue();
		setDrawingMode_DrawingMode(this.nativeObject.pointer, drawingModeParamValue);
	}
	native private long getCornerColor_ev_bool_CubeCornerEnum(long pNativeObject, boolean fillColor, int corner);
	/// <summary>
	///  获取顶点颜色信息
	/// <summary>
	/// <param name="fillColor">获取填充颜色或线颜色</param>
	/// <param name="corner">长方体点位置信息枚举</param>
	public com.earthview.world.graphic.ColourValue getCornerColor(boolean fillColor, com.earthview.world.geometry3d.CubeCornerEnum corner)
	{
		boolean fillColorParamValue = fillColor;
		int cornerParamValue = corner.getValue();
		long returnValue = getCornerColor_ev_bool_CubeCornerEnum(this.nativeObject.pointer, fillColorParamValue, cornerParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setCornerColor_ev_bool_CubeCornerEnum_CColourValue(long pNativeObject, boolean fillColor, int corner, long clr);
	/// <summary>
	///  设置顶点颜色信息
	/// <summary>
	/// <param name="fillColor">设置填充颜色或线颜色</param>
	/// <param name="corner">长方体点位置信息枚举</param>
	/// <param name="clr">设置的颜色类</param>
	public void setCornerColor(boolean fillColor, com.earthview.world.geometry3d.CubeCornerEnum corner, com.earthview.world.graphic.ColourValue clr)
	{
		boolean fillColorParamValue = fillColor;
		int cornerParamValue = corner.getValue();
		long clrParamValue = clr.nativeObject.pointer;
		setCornerColor_ev_bool_CubeCornerEnum_CColourValue(this.nativeObject.pointer, fillColorParamValue, cornerParamValue, clrParamValue);
	}
	native private boolean getTextureCoordinatesIncluded_void(long pNativeObject);
	/// <summary>
	///  获取是否包含纹理,true为包含
	/// <summary>
	public boolean getTextureCoordinatesIncluded()
	{
		boolean returnValue = getTextureCoordinatesIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureCoordinatesInclude_ev_bool(long pNativeObject, boolean includeTextureCoordinates);
	/// <summary>
	///  设置是否包含纹理,true为包含
	/// <summary>
	public void setTextureCoordinatesInclude(boolean includeTextureCoordinates)
	{
		boolean includeTextureCoordinatesParamValue = includeTextureCoordinates;
		setTextureCoordinatesInclude_ev_bool(this.nativeObject.pointer, includeTextureCoordinatesParamValue);
	}
	native private void setFrameMaterial_EVString(long pNativeObject, String matName);
	/**
	 * 设置边框材质
	 * @param matName 材质名称
	 */
	public void setFrameMaterial(String matName)
	{
		String matNameParamValue = matName;
		setFrameMaterial_EVString(this.nativeObject.pointer, matNameParamValue);
	}
	protected  long getFrameMaterial_void_callback()
	{
		com.earthview.world.graphic.MaterialPtr returnValue = getFrameMaterial();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFrameMaterial_void(long pNativeObject);
	/**
	 * 获取边框材质
	 * @param  
	 * @return 边框材质
	 */
	public com.earthview.world.graphic.MaterialPtr getFrameMaterial()
	{
		long returnValue = getFrameMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getFrameMaterial_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getFrameMaterial_NoVirtual()
	{
		long returnValue = getFrameMaterial_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}

	native private void endFlash_void(long pNativeObject);
	/**
	 * 结束闪烁
	 */
	public void endFlash()
	{
		endFlash_void(this.nativeObject.pointer);
	}
	native private void endFlash_void_NoVirtual(long pNativeObject);
	protected void endFlash_NoVirtual()
	{
		endFlash_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制一个实体，相当调用赋值函数
	 * @return 另一个实体的指针
	 */
	public com.earthview.world.geometry3d.Geometry3D ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.Geometry3D __returnValue = new com.earthview.world.geometry3d.Geometry3D(CreatedWhenConstruct.CWC_NotToCreate, "CGeometry3D");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.Geometry3D)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeometry3D");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.geometry3d.Geometry3D ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.Geometry3D __returnValue = new com.earthview.world.geometry3d.Geometry3D(CreatedWhenConstruct.CWC_NotToCreate, "CGeometry3D");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.Geometry3D)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeometry3D");
		}
		return __returnValue;
	}

	native private void create_void(long pNativeObject);
	/**
	 * 创建矢量图元的抽象函数，各个矢量图元必须实现
	 * @return None
	 */
	public void create()
	{
		create_void(this.nativeObject.pointer);
	}
	native private void create_void_NoVirtual(long pNativeObject);
	protected void create_NoVirtual()
	{
		create_void_NoVirtual(this.nativeObject.pointer);
	}

	native private int getDrawingType_void(long pNativeObject);
	/**
	 * 获取创建矢量图元的类型
	 * @return 矢量图元类型的枚举
	 */
	public com.earthview.world.geometry3d.DrawingType getDrawingType()
	{
		int returnValue = getDrawingType_void(this.nativeObject.pointer);
		return com.earthview.world.geometry3d.DrawingType.toEnum(returnValue);
	}
	native private int getDrawingType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.geometry3d.DrawingType getDrawingType_NoVirtual()
	{
		int returnValue = getDrawingType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.geometry3d.DrawingType.toEnum(returnValue);
	}

	native private long convertToMesh_EVString_EVString(long pNativeObject, String meshName, String groupName);
	/**
	 * 矢量图元转为为网格
	 * @param meshName 网格的名字,不能是已经存在的网格名字
	 * @param groupName 网格在所在资源的组名称，DEFAULT即可
	 * @return 网格的指针,MaybeNull
	 */
	public com.earthview.world.graphic.MeshPtr convertToMesh(String meshName, String groupName)
	{
		String meshNameParamValue = meshName;
		String groupNameParamValue = groupName;
		long returnValue = convertToMesh_EVString_EVString(this.nativeObject.pointer, meshNameParamValue, groupNameParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long convertToMesh_EVString_EVString_NoVirtual(long pNativeObject, String meshName, String groupName);
	protected com.earthview.world.graphic.MeshPtr convertToMesh_NoVirtual(String meshName, String groupName)
	{
		String meshNameParamValue = meshName;
		String groupNameParamValue = groupName;
		long returnValue = convertToMesh_EVString_EVString_NoVirtual(this.nativeObject.pointer, meshNameParamValue, groupNameParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
	protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}

	native private double getBoundingRadius_void(long pNativeObject);
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
	protected double getBoundingRadius_NoVirtual()
	{
		double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	protected  void setFrameRenderOperation_CRenderOperation_callback(long rend)
	{
		com.earthview.world.graphic.RenderOperation rendParamValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		rendParamValue.setDelegate(true);
		rendParamValue.setInstancePointer(new InstancePointer(rend));
		IClassFactory rendParamValueClassFactory = GlobalClassFactoryMap.get(rendParamValue.getCppInstanceTypeName());
		if (rendParamValueClassFactory != null)
		{
			rendParamValue.setDelegate(true);
			rendParamValue = (com.earthview.world.graphic.RenderOperation)rendParamValueClassFactory.create();
			rendParamValue.setDelegate(true);
			rendParamValue.setInstancePointer(new InstancePointer(rend));
		}
		setFrameRenderOperation(rendParamValue);
	}

	native private void setFrameRenderOperation_CRenderOperation(long pNativeObject, long rend);
	public void setFrameRenderOperation(com.earthview.world.graphic.RenderOperation rend)
	{
		long rendParamValue = rend.nativeObject.pointer;
		setFrameRenderOperation_CRenderOperation(this.nativeObject.pointer, rendParamValue);
	}
	native private void setFrameRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long rend);
	protected void setFrameRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation rend)
	{
		long rendParamValue = rend.nativeObject.pointer;
		setFrameRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, rendParamValue);
	}

	protected  void getFrameRenderOperation_CRenderOperation_callback(long op)
	{
		com.earthview.world.graphic.RenderOperation opParamValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		opParamValue.setDelegate(true);
		opParamValue.setInstancePointer(new InstancePointer(op));
		IClassFactory opParamValueClassFactory = GlobalClassFactoryMap.get(opParamValue.getCppInstanceTypeName());
		if (opParamValueClassFactory != null)
		{
			opParamValue.setDelegate(true);
			opParamValue = (com.earthview.world.graphic.RenderOperation)opParamValueClassFactory.create();
			opParamValue.setDelegate(true);
			opParamValue.setInstancePointer(new InstancePointer(op));
		}
		getFrameRenderOperation(opParamValue);
	}

	native private void getFrameRenderOperation_CRenderOperation(long pNativeObject, long op);
	public void getFrameRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getFrameRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void getFrameRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
	protected void getFrameRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getFrameRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
	}

	public MovableCube(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MovableCube(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 渲染开始时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @return 如果自动执行渲染过程返回true,手动执行返回false
	 */
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		return super.preRender_NoVirtual(sm, rsys);
	}
	/**
	 * 渲染完成时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 */
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		super.postRender_NoVirtual(sm, rsys);
	}
	/**
	 * 进行（A∪B）的操作
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx unions(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		return super.unions_NoVirtual(another, pNewColor, offset);
	}
	/**
	 * 进行（A∩B）的操作
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx intersect(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		return super.intersect_NoVirtual(another, pNewColor, offset);
	}
	/**
	 * 进行（A-B）的操作，即去除A中包含的B的部分
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx minus(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		return super.minus_NoVirtual(another, pNewColor, offset);
	}
	/**
	 * 进行（（A∪B)-（A∩B））的操作对称差分（其结果是：两几何体求并的结果差分这两个几何体求交的结果所得到的几何体）
	 * @return 结果几何体
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx difference(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.spatial.display.Icolor pNewColor, com.earthview.world.spatial.math.Vector3 offset)
	{
		return super.difference_NoVirtual(another, pNewColor, offset);
	}
	/**
	 * 判断指定几何体与该几何体是否相交
	 * @return 是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.world.geometry3d.SimpleRenderableEx another)
	{
		return super.isIntersected_NoVirtual(another);
	}
	/**
	 * 判断线与体是否相交
	 * @return 返回是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.world.spatial.geometry.Curve curve)
	{
		return super.isIntersected_NoVirtual(curve);
	}
	/**
	 * 判断点与体的关系
	 * @return 返回关系枚举
	 */
	public com.earthview.world.geometry3d.EVPointWithinType contains(com.earthview.world.spatial.geometry.Point point)
	{
		return super.contains_NoVirtual(point);
	}
	/**
	 * 用非封闭几何体对封闭几何体进行切片操作，并且对结果进行分类
	 * @return 处理是否成功
	 */
	public boolean sliceAndClassify(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet faceMap, com.earthview.world.spatial.geometry.CoordinateSequence sharedEdges, com.earthview.world.spatial.display.Icolor pNewColor)
	{
		return super.sliceAndClassify_NoVirtual(another, faceMap, sharedEdges, pNewColor);
	}
	/**
	 * 用封闭几何体对封闭进行切片操作，并且对结果进行分类：
	 * @return 处理是否成功
	 */
	public boolean slice(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceA, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet sliceB, com.earthview.world.spatial.geometry.CoordinateSequence sharedEdges, com.earthview.world.spatial.display.Icolor pNewColor)
	{
		return super.slice_NoVirtual(another, sliceA, sliceB, sharedEdges, pNewColor);
	}
	/**
	 * 闪烁
	 */
	public void flash(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms, long flashCount)
	{
		super.flash_NoVirtual(color, hightLight_ms, normally_ms, flashCount);
	}
	public com.earthview.world.graphic.SimpleRenderable.SimpleRenderableInternal getRenderable()
	{
		return super.getRenderable_NoVirtual();
	}
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		return super.getMaterial_NoVirtual();
	}
	public void setRenderOperation(com.earthview.world.graphic.RenderOperation rend)
	{
		super.setRenderOperation_NoVirtual(rend);
	}
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		super.getRenderOperation_NoVirtual(op);
	}
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		super.getWorldTransforms_NoVirtual(xform);
	}
	public com.earthview.world.graphic.LightList getLights()
	{
		return super.getLights_NoVirtual();
	}
	public boolean getCastsShadows()
	{
		return super.getCastsShadows_NoVirtual();
	}
	public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
	{
		return super.getAnimableObjectPtr_NoVirtual();
	}
	/**
	 * 获取渲染队列ID
	 * @param  
	 */
	public short getRenderQueueId()
	{
		return super.getRenderQueueId_NoVirtual();
	}
	/**
	 * 通报创建者只能内部使用
	 * @param fact 实例
	 */
	public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		super._notifyCreator_NoVirtual(ref_fact);
	}
	/**
	 * 获取创建者如果有的话，获取，只能在内部使用
	 * @param  
	 * @return 移动对象工厂类
	 */
	public com.earthview.world.graphic.MovableObjectFactory _getCreator()
	{
		return super._getCreator_NoVirtual();
	}
	/**
	 * 通报场景管理器只能内部使用
	 * @param man 场景管理者
	 */
	public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		super._notifyManager_NoVirtual(ref_mgr);
	}
	/**
	 * 获取场景管理器
	 * @param  
	 * @return 管理者
	 */
	public com.earthview.world.graphic.SceneManager _getManager()
	{
		return super._getManager_NoVirtual();
	}
	/**
	 * 获取对象的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
	public String getMovableType()
	{
		return super.getMovableType_NoVirtual();
	}
	/**
	 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
	 * @param  
	 * @return 节点名称
	 */
	public com.earthview.world.graphic.Node getParentNode()
	{
		return super.getParentNode_NoVirtual();
	}
	/**
	 * 获取对象的场景父节点
	 * @param  
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		return super.getParentSceneNode_NoVirtual();
	}
	/**
	 * 判断父节点是否是骨骼节点
	 * @param  
	 * @return 成功，返回标签点，否则为场景节点
	 */
	public boolean isParentTagPoint()
	{
		return super.isParentTagPoint_NoVirtual();
	}
	/**
	 * 通报被挂接内部方法
	 * @param parent 父节点名称
	 * @param isTagPoint 是否挂接在节点下
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		super._notifyAttached_NoVirtual(ref_parent, isTagPoint);
	}
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		super._notifyAttached_NoVirtual(ref_parent);
	}
	/**
	 * 是否已挂接
	 * @param  
	 * @return 为真，挂接
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 将指定对象从父节点分离
	 * @param  
	 */
	public void detachFromParent()
	{
		super.detachFromParent_NoVirtual();
	}
	/**
	 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
	 * @param  
	 */
	public boolean isInScene()
	{
		return super.isInScene_NoVirtual();
	}
	/**
	 * 通报被移动内部方法
	 * @param  
	 */
	public void _notifyMoved()
	{
		super._notifyMoved_NoVirtual();
	}
	/**
	 * 通报光源查询结束内部方法
	 * @param  
	 */
	public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
	{
		super._notifyLightsQueried_NoVirtual(lightList);
	}
	public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		super.setLightQueriedListener_NoVirtual(listener);
	}
	public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
	{
		return super.getLightQueriedListener_NoVirtual();
	}
	public long getLightListUpdated()
	{
		return super.getLightListUpdated_NoVirtual();
	}
	public void setLightListUpdated(long frame)
	{
		super.setLightListUpdated_NoVirtual(frame);
	}
	/**
	 * 通报当前相机内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		super._notifyCurrentCamera_NoVirtual(ref_cam);
	}
	/**
	 * 获取模型坐标系下的包围盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		return super.getBoundingBox_NoVirtual();
	}
	/**
	 * 在世界空间中获取当前对象的边框球体
	 * @param derive 是否检索
	 */
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
	{
		return super.getWorldBoundingSphere_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
	{
		return super.getWorldBoundingSphere_NoVirtual();
	}
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 获取是否可见,与setVisible对应
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
	 * @param  
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		super.setRenderingMaxDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		return super.getRenderingMaxDistance_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		super.setRenderingMinDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		return super.getRenderingMinDistance_NoVirtual();
	}
	/**
	 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
	 * @param pixelSize 像素大小
	 */
	public void setRenderingMinPixelSize(double pixelSize)
	{
		super.setRenderingMinPixelSize_NoVirtual(pixelSize);
	}
	/**
	 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
	 * @param  
	 * @return 像素大小
	 */
	public double getRenderingMinPixelSize()
	{
		return super.getRenderingMinPixelSize_NoVirtual();
	}
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		super.setSelectionColour_NoVirtual(colour);
	}
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		return super.setSelected_NoVirtual(objIndics);
	}
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		return super.getSelected_NoVirtual();
	}
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 选中的对象序号
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, point);
	}
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(aabb, prepareToRenderSelection, indexVec);
	}
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(sphere, prepareToRenderSelection, indexVec);
	}
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 物体序号
	 * @param submeshIndex submesh序号
	 * @param instanceIndex instance序号
	 * @param segmentIndex 索引分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectComponentBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
	}
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		super.renderSelection_NoVirtual();
	}
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 开始编辑
	 * @param  
	 */
	public boolean startEditing(long objectIndex)
	{
		return super.startEditing_NoVirtual(objectIndex);
	}
	/**
	 * 结束编辑
	 * @param  
	 */
	public void endEditing()
	{
		super.endEditing_NoVirtual();
	}
	/**
	 * 获得编辑包围盒
	 * @param  
	 */
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		return super.getEditBoundingBox_NoVirtual();
	}
	/**
	 * 获得选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.getSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	/**
	 * 设置选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.setSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		super.setRenderQueueGroup_NoVirtual(queueID);
	}
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
	}
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * 获取父节点的全部变化信息
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
	{
		return super._getParentNodeFullTransform_NoVirtual();
	}
	/**
	 * 设置该对象的询问标识
	 * @param flags 
	 */
	public void setQueryFlags(long flags)
	{
		super.setQueryFlags_NoVirtual(flags);
	}
	/**
	 * 添加询问标识
	 * @param flags 
	 */
	public void addQueryFlags(long flags)
	{
		super.addQueryFlags_NoVirtual(flags);
	}
	/**
	 * 移除询问标识
	 * @param flags 
	 */
	public void removeQueryFlags(long flags)
	{
		super.removeQueryFlags_NoVirtual(flags);
	}
	/**
	 * 获取询问标识
	 * @param  
	 */
	public long getQueryFlags()
	{
		return super.getQueryFlags_NoVirtual();
	}
	/**
	 * 设置对象可见标识
	 * @param flags 
	 */
	public void setVisibilityFlags(long flags)
	{
		super.setVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 添加对象可见标识
	 * @param flags 
	 */
	public void addVisibilityFlags(long flags)
	{
		super.addVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 移除对象可见标识
	 * @param flags 
	 */
	public void removeVisibilityFlags(long flags)
	{
		super.removeVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 获取对象可见标识
	 * @param flags 
	 */
	public long getVisibilityFlags()
	{
		return super.getVisibilityFlags_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取光源列表以距离可移动物体由近到远顺序排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList queryLights()
	{
		return super.queryLights_NoVirtual();
	}
	/**
	 * 获取光线掩码默认所有光源影响对象
	 * @param  
	 */
	public long getLightMask()
	{
		return super.getLightMask_NoVirtual();
	}
	/**
	 * 设置光线掩码
	 * @param lightMask 
	 */
	public void setLightMask(long lightMask)
	{
		super.setLightMask_NoVirtual(lightMask);
	}
	/**
	 * 获取指向该对象当前光列表
	 * @param  
	 */
	public com.earthview.world.graphic.LightList _getLightList()
	{
		return super._getLightList_NoVirtual();
	}
	/**
	 * 设置投射阴影
	 * @param enabled 
	 */
	public void setCastShadows(boolean enabled)
	{
		super.setCastShadows_NoVirtual(enabled);
	}
	/**
	 * 是否接收阴影
	 * @param  
	 */
	public boolean getReceivesShadows()
	{
		return super.getReceivesShadows_NoVirtual();
	}
	/**
	 * 获取可移动对象的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		return super.getTypeFlags_NoVirtual();
	}
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，渲染对象将添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		super.visitRenderables_NoVirtual(visitor, debugRenderables);
	}
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		super.visitRenderables_NoVirtual(visitor);
	}
	/**
	 * 设置调试该对象是否启用
	 * @param  
	 */
	public void setDebugDisplayEnabled(boolean enabled)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled);
	}
	/**
	 * 是否调试该对象是否启用
	 * @param  
	 */
	public boolean isDebugDisplayEnabled()
	{
		return super.isDebugDisplayEnabled_NoVirtual();
	}
	public boolean getCastShadows()
	{
		return super.getCastShadows_NoVirtual();
	}
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		return super.getEdgeList_NoVirtual();
	}
	public boolean hasEdgeList()
	{
		return super.hasEdgeList_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		return super.getWorldBoundingBox_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		return super.getWorldBoundingBox_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		return super.getLightCapBounds_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
	}
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		return super.getPointExtrusionDistance_NoVirtual(l);
	}
	public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
	}
	public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
	}
	public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
	}
	
	native protected void register_getFrameMaterial_void(long pNativeObject, String method);
	native protected void register_setFrameRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getFrameRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_convertToMesh_EVString_EVString(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_create_void(long pNativeObject, String method);
	native protected void register_getDrawingType_void(long pNativeObject, String method);
	native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_unions_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_intersect_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_minus_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_difference_CSimpleRenderableEx_IColor_CVector3(long pNativeObject, String method);
	native protected void register_isIntersected_CSimpleRenderableEx(long pNativeObject, String method);
	native protected void register_isIntersected_CCurve(long pNativeObject, String method);
	native protected void register_contains_CPoint(long pNativeObject, String method);
	native protected void register_sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(long pNativeObject, String method);
	native protected void register_slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(long pNativeObject, String method);
	native protected void register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_endFlash_void(long pNativeObject, String method);
	native protected void register_getRenderable_void(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_setRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getCastsShadows_void(long pNativeObject, String method);
	native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
	native protected void register_getRenderQueueId_void(long pNativeObject, String method);
	native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
	native protected void register__getCreator_void(long pNativeObject, String method);
	native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
	native protected void register__getManager_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register_getParentNode_void(long pNativeObject, String method);
	native protected void register_getParentSceneNode_void(long pNativeObject, String method);
	native protected void register_isParentTagPoint_void(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_detachFromParent_void(long pNativeObject, String method);
	native protected void register_isInScene_void(long pNativeObject, String method);
	native protected void register__notifyMoved_void(long pNativeObject, String method);
	native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
	native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
	native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
	native protected void register_getLightListUpdated_void(long pNativeObject, String method);
	native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_setSelected_IntVector(long pNativeObject, String method);
	native protected void register_getSelected_void(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_renderSelection_void(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
	native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
	native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryFlags_void(long pNativeObject, String method);
	native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
	native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_queryLights_void(long pNativeObject, String method);
	native protected void register_getLightMask_void(long pNativeObject, String method);
	native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
	native protected void register__getLightList_void(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
	native protected void register_getTypeFlags_void(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_getEdgeList_void(long pNativeObject, String method);
	native protected void register_hasEdgeList_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
	native protected void register_getLightCapBounds_void(long pNativeObject, String method);
	native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
	native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
	native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
	native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
	native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFrameMaterial_void(this.nativeObject.pointer, "getFrameMaterial_void_callback");
			this.register_setFrameRenderOperation_CRenderOperation(this.nativeObject.pointer, "setFrameRenderOperation_CRenderOperation_callback");
			this.register_getFrameRenderOperation_CRenderOperation(this.nativeObject.pointer, "getFrameRenderOperation_CRenderOperation_callback");
			this.register_convertToMesh_EVString_EVString(this.nativeObject.pointer, "convertToMesh_EVString_EVString_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_create_void(this.nativeObject.pointer, "create_void_callback");
			this.register_getDrawingType_void(this.nativeObject.pointer, "getDrawingType_void_callback");
			this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
			this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
			this.register_unions_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "unions_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_intersect_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "intersect_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_minus_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "minus_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_difference_CSimpleRenderableEx_IColor_CVector3(this.nativeObject.pointer, "difference_CSimpleRenderableEx_IColor_CVector3_callback");
			this.register_isIntersected_CSimpleRenderableEx(this.nativeObject.pointer, "isIntersected_CSimpleRenderableEx_callback");
			this.register_isIntersected_CCurve(this.nativeObject.pointer, "isIntersected_CCurve_callback");
			this.register_contains_CPoint(this.nativeObject.pointer, "contains_CPoint_callback");
			this.register_sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(this.nativeObject.pointer, "sliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_callback");
			this.register_slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(this.nativeObject.pointer, "slice_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_callback");
			this.register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_endFlash_void(this.nativeObject.pointer, "endFlash_void_callback");
			this.register_getRenderable_void(this.nativeObject.pointer, "getRenderable_void_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_setRenderOperation_CRenderOperation(this.nativeObject.pointer, "setRenderOperation_CRenderOperation_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
			this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
			this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
			this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
			this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
			this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
			this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
			this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
			this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
			this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
			this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
			this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
			this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
			this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
			this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
			this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
			this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
			this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
			this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
			this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
			this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
			this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
			this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
			this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
			this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
			this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
			this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
			this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
			this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
			this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
			this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
			this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
			this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
			this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
			this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
			this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
			this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
			this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
			this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
			this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
			this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
			this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
			this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
			this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
			this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
			this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
			this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
		}
	}
	
	public static MovableCube fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MovableCube obj = null;
 		if(baseObj instanceof MovableCube)
		{
			obj = (MovableCube)baseObj;
		} else {
			obj = new MovableCube(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMovableCube");
			obj.increaseCast();
		}

		return obj;
	}
}
