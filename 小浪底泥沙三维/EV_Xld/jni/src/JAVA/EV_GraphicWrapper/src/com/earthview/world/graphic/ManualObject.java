package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 手动创建对象类此类提供简单的接口供用户创建对象，可以在程序中定义你绘制的信息。
 */
public class ManualObject extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualObject", new ManualObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCManualObjectProxy", new ManualObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名称
	 */
	public ManualObject(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCManualObjectProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ManualObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void clear_void_callback()
	{
		clear();
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清除对象所有内容
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void estimateVertexCount_ev_size_t_callback(long vcount)
	{
		long vcountParamValue = vcount;
		estimateVertexCount(vcountParamValue);
	}

	native private void estimateVertexCount_ev_size_t(long pNativeObject, long vcount);
	/**
	 * 预先估计顶点数量为了避免内存分配的浪费
	 * @param vcount 顶点数量
	 */
	public void estimateVertexCount(long vcount)
	{
		long vcountParamValue = vcount;
		estimateVertexCount_ev_size_t(this.nativeObject.pointer, vcountParamValue);
	}
	native private void estimateVertexCount_ev_size_t_NoVirtual(long pNativeObject, long vcount);
	protected void estimateVertexCount_NoVirtual(long vcount)
	{
		long vcountParamValue = vcount;
		estimateVertexCount_ev_size_t_NoVirtual(this.nativeObject.pointer, vcountParamValue);
	}

	protected  void estimateIndexCount_ev_size_t_callback(long icount)
	{
		long icountParamValue = icount;
		estimateIndexCount(icountParamValue);
	}

	native private void estimateIndexCount_ev_size_t(long pNativeObject, long icount);
	/**
	 * 预先估计索引顶点数量需要渲染顶点时，我们可以通过索引，重复使用某个顶点
	 * @param icount 索引数量
	 */
	public void estimateIndexCount(long icount)
	{
		long icountParamValue = icount;
		estimateIndexCount_ev_size_t(this.nativeObject.pointer, icountParamValue);
	}
	native private void estimateIndexCount_ev_size_t_NoVirtual(long pNativeObject, long icount);
	protected void estimateIndexCount_NoVirtual(long icount)
	{
		long icountParamValue = icount;
		estimateIndexCount_ev_size_t_NoVirtual(this.nativeObject.pointer, icountParamValue);
	}

	protected  void begin_EVString_OperationType_EVString_callback(String materialName, int opType, String groupName)
	{
		String materialNameParamValue = materialName;
		com.earthview.world.graphic.RenderOperation.OperationType opTypeParamValue = com.earthview.world.graphic.RenderOperation.OperationType.toEnum(opType);
		String groupNameParamValue = groupName;
		begin(materialNameParamValue, opTypeParamValue, groupNameParamValue);
	}

	native private void begin_EVString_OperationType_EVString(long pNativeObject, String materialName, int opType, String groupName);
	/**
	 * 开始定义对象的一部分每次使用这个方法，就渲染新划分的部分。
	 * @param materialName 渲染对象这部分材质的名称
	 * @param opType 使用的渲染类型
	 * @param groupName 组名
	 */
	public void begin(String materialName, com.earthview.world.graphic.RenderOperation.OperationType opType, String groupName)
	{
		String materialNameParamValue = materialName;
		int opTypeParamValue = opType.getValue();
		String groupNameParamValue = groupName;
		begin_EVString_OperationType_EVString(this.nativeObject.pointer, materialNameParamValue, opTypeParamValue, groupNameParamValue);
	}
	native private void begin_EVString_OperationType_EVString_NoVirtual(long pNativeObject, String materialName, int opType, String groupName);
	protected void begin_NoVirtual(String materialName, com.earthview.world.graphic.RenderOperation.OperationType opType, String groupName)
	{
		String materialNameParamValue = materialName;
		int opTypeParamValue = opType.getValue();
		String groupNameParamValue = groupName;
		begin_EVString_OperationType_EVString_NoVirtual(this.nativeObject.pointer, materialNameParamValue, opTypeParamValue, groupNameParamValue);
	}

	protected  void begin_EVString_OperationType_callback(String materialName, int opType)
	{
		String materialNameParamValue = materialName;
		com.earthview.world.graphic.RenderOperation.OperationType opTypeParamValue = com.earthview.world.graphic.RenderOperation.OperationType.toEnum(opType);
		begin(materialNameParamValue, opTypeParamValue);
	}

	native private void begin_EVString_OperationType(long pNativeObject, String materialName, int opType);
	public void begin(String materialName, com.earthview.world.graphic.RenderOperation.OperationType opType)
	{
		String materialNameParamValue = materialName;
		int opTypeParamValue = opType.getValue();
		begin_EVString_OperationType(this.nativeObject.pointer, materialNameParamValue, opTypeParamValue);
	}
	native private void begin_EVString_OperationType_NoVirtual(long pNativeObject, String materialName, int opType);
	protected void begin_NoVirtual(String materialName, com.earthview.world.graphic.RenderOperation.OperationType opType)
	{
		String materialNameParamValue = materialName;
		int opTypeParamValue = opType.getValue();
		begin_EVString_OperationType_NoVirtual(this.nativeObject.pointer, materialNameParamValue, opTypeParamValue);
	}

	protected  void begin_EVString_callback(String materialName)
	{
		String materialNameParamValue = materialName;
		begin(materialNameParamValue);
	}

	native private void begin_EVString(long pNativeObject, String materialName);
	public void begin(String materialName)
	{
		String materialNameParamValue = materialName;
		begin_EVString(this.nativeObject.pointer, materialNameParamValue);
	}
	native private void begin_EVString_NoVirtual(long pNativeObject, String materialName);
	protected void begin_NoVirtual(String materialName)
	{
		String materialNameParamValue = materialName;
		begin_EVString_NoVirtual(this.nativeObject.pointer, materialNameParamValue);
	}

	protected  void setDynamic_ev_bool_callback(boolean dyn)
	{
		boolean dynParamValue = dyn;
		setDynamic(dynParamValue);
	}

	native private void setDynamic_ev_bool(long pNativeObject, boolean dyn);
	/**
	 * 设置缓冲区是否与Dynamic改造信息匹配
	 * @param dyn 是否合适
	 */
	public void setDynamic(boolean dyn)
	{
		boolean dynParamValue = dyn;
		setDynamic_ev_bool(this.nativeObject.pointer, dynParamValue);
	}
	native private void setDynamic_ev_bool_NoVirtual(long pNativeObject, boolean dyn);
	protected void setDynamic_NoVirtual(boolean dyn)
	{
		boolean dynParamValue = dyn;
		setDynamic_ev_bool_NoVirtual(this.nativeObject.pointer, dynParamValue);
	}

	protected  boolean getDynamic_void_callback()
	{
		boolean returnValue = getDynamic();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getDynamic_void(long pNativeObject);
	/**
	 * 判断缓冲区是否与Dynamic改造信息匹配
	 * @param  
	 * @return 合适返回true，否则返回false
	 */
	public boolean getDynamic()
	{
		boolean returnValue = getDynamic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getDynamic_void_NoVirtual(long pNativeObject);
	protected boolean getDynamic_NoVirtual()
	{
		boolean returnValue = getDynamic_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void beginUpdate_ev_size_t_callback(long sectionIndex)
	{
		long sectionIndexParamValue = sectionIndex;
		beginUpdate(sectionIndexParamValue);
	}

	native private void beginUpdate_ev_size_t(long pNativeObject, long sectionIndex);
	/**
	 * 更新对象渲染的那一部分
	 * @param sectionIndex 索引你要更新的那部分，第一次启动进程为0，第二次为1，以此递增
	 */
	public void beginUpdate(long sectionIndex)
	{
		long sectionIndexParamValue = sectionIndex;
		beginUpdate_ev_size_t(this.nativeObject.pointer, sectionIndexParamValue);
	}
	native private void beginUpdate_ev_size_t_NoVirtual(long pNativeObject, long sectionIndex);
	protected void beginUpdate_NoVirtual(long sectionIndex)
	{
		long sectionIndexParamValue = sectionIndex;
		beginUpdate_ev_size_t_NoVirtual(this.nativeObject.pointer, sectionIndexParamValue);
	}

	protected  void position_CVector3_callback(long pos)
	{
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		position(posParamValue);
	}

	native private void position_CVector3(long pNativeObject, long pos);
	/**
	 * 添加顶点位置信息，同时创建一个新的顶点
	 * @param pos 三维矢量
	 */
	public void position(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		position_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private void position_CVector3_NoVirtual(long pNativeObject, long pos);
	protected void position_NoVirtual(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		position_CVector3_NoVirtual(this.nativeObject.pointer, posParamValue);
	}

	protected  void position_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		position(xParamValue, yParamValue, zParamValue);
	}

	native private void position_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 添加顶点位置信息，同时创建一个新的顶点
	 * @param x x值
	 * @param y y值
	 * @param z z值
	 */
	public void position(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		position_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void position_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void position_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		position_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void normal_CVector3_callback(long norm)
	{
		com.earthview.world.spatial.math.Vector3 normParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		normParamValue.setDelegate(true);
		normParamValue.setInstancePointer(new InstancePointer(norm));
		IClassFactory normParamValueClassFactory = GlobalClassFactoryMap.get(normParamValue.getCppInstanceTypeName());
		if (normParamValueClassFactory != null)
		{
			normParamValue.setDelegate(true);
			normParamValue = (com.earthview.world.spatial.math.Vector3)normParamValueClassFactory.create();
			normParamValue.setDelegate(true);
			normParamValue.setInstancePointer(new InstancePointer(norm));
		}
		normal(normParamValue);
	}

	native private void normal_CVector3(long pNativeObject, long norm);
	/**
	 * 为当前顶点定义法线
	 * @param norm 三维矢量
	 */
	public void normal(com.earthview.world.spatial.math.Vector3 norm)
	{
		long normParamValue = norm.nativeObject.pointer;
		normal_CVector3(this.nativeObject.pointer, normParamValue);
	}
	native private void normal_CVector3_NoVirtual(long pNativeObject, long norm);
	protected void normal_NoVirtual(com.earthview.world.spatial.math.Vector3 norm)
	{
		long normParamValue = norm.nativeObject.pointer;
		normal_CVector3_NoVirtual(this.nativeObject.pointer, normParamValue);
	}

	protected  void normal_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		normal(xParamValue, yParamValue, zParamValue);
	}

	native private void normal_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 为当前顶点定义法线
	 * @param x x值
	 * @param y y值
	 * @param z z值
	 */
	public void normal(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		normal_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void normal_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void normal_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		normal_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void tangent_CVector3_callback(long tan)
	{
		com.earthview.world.spatial.math.Vector3 tanParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		tanParamValue.setDelegate(true);
		tanParamValue.setInstancePointer(new InstancePointer(tan));
		IClassFactory tanParamValueClassFactory = GlobalClassFactoryMap.get(tanParamValue.getCppInstanceTypeName());
		if (tanParamValueClassFactory != null)
		{
			tanParamValue.setDelegate(true);
			tanParamValue = (com.earthview.world.spatial.math.Vector3)tanParamValueClassFactory.create();
			tanParamValue.setDelegate(true);
			tanParamValue.setInstancePointer(new InstancePointer(tan));
		}
		tangent(tanParamValue);
	}

	native private void tangent_CVector3(long pNativeObject, long tan);
	/**
	 * 为当前顶点添加切线
	 * @param norm 三维矢量
	 */
	public void tangent(com.earthview.world.spatial.math.Vector3 tan)
	{
		long tanParamValue = tan.nativeObject.pointer;
		tangent_CVector3(this.nativeObject.pointer, tanParamValue);
	}
	native private void tangent_CVector3_NoVirtual(long pNativeObject, long tan);
	protected void tangent_NoVirtual(com.earthview.world.spatial.math.Vector3 tan)
	{
		long tanParamValue = tan.nativeObject.pointer;
		tangent_CVector3_NoVirtual(this.nativeObject.pointer, tanParamValue);
	}

	protected  void tangent_Real_Real_Real_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		tangent(xParamValue, yParamValue, zParamValue);
	}

	native private void tangent_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 为当前顶点添加切线
	 * @param x x值
	 * @param y y值
	 * @param z z值
	 */
	public void tangent(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		tangent_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void tangent_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void tangent_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		tangent_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  void textureCoord_Real_callback(double u)
	{
		double uParamValue = u;
		textureCoord(uParamValue);
	}

	native private void textureCoord_Real(long pNativeObject, double u);
	/**
	 * 为当前顶点添加纹理坐标根据需求，可以是一维到三维的
	 * @param u 
	 */
	public void textureCoord(double u)
	{
		double uParamValue = u;
		textureCoord_Real(this.nativeObject.pointer, uParamValue);
	}
	native private void textureCoord_Real_NoVirtual(long pNativeObject, double u);
	protected void textureCoord_NoVirtual(double u)
	{
		double uParamValue = u;
		textureCoord_Real_NoVirtual(this.nativeObject.pointer, uParamValue);
	}

	protected  void textureCoord_Real_Real_callback(double u, double v)
	{
		double uParamValue = u;
		double vParamValue = v;
		textureCoord(uParamValue, vParamValue);
	}

	native private void textureCoord_Real_Real(long pNativeObject, double u, double v);
	/**
	 * 为当前顶点添加纹理坐标根据需求，可以是一维到三维的
	 * @param u 
	 * @param v 
	 */
	public void textureCoord(double u, double v)
	{
		double uParamValue = u;
		double vParamValue = v;
		textureCoord_Real_Real(this.nativeObject.pointer, uParamValue, vParamValue);
	}
	native private void textureCoord_Real_Real_NoVirtual(long pNativeObject, double u, double v);
	protected void textureCoord_NoVirtual(double u, double v)
	{
		double uParamValue = u;
		double vParamValue = v;
		textureCoord_Real_Real_NoVirtual(this.nativeObject.pointer, uParamValue, vParamValue);
	}

	protected  void textureCoord_Real_Real_Real_callback(double u, double v, double w)
	{
		double uParamValue = u;
		double vParamValue = v;
		double wParamValue = w;
		textureCoord(uParamValue, vParamValue, wParamValue);
	}

	native private void textureCoord_Real_Real_Real(long pNativeObject, double u, double v, double w);
	/**
	 * 为当前顶点添加纹理坐标根据需求，可以是一维到三维的
	 * @param u 
	 * @param v 
	 * @param w 
	 */
	public void textureCoord(double u, double v, double w)
	{
		double uParamValue = u;
		double vParamValue = v;
		double wParamValue = w;
		textureCoord_Real_Real_Real(this.nativeObject.pointer, uParamValue, vParamValue, wParamValue);
	}
	native private void textureCoord_Real_Real_Real_NoVirtual(long pNativeObject, double u, double v, double w);
	protected void textureCoord_NoVirtual(double u, double v, double w)
	{
		double uParamValue = u;
		double vParamValue = v;
		double wParamValue = w;
		textureCoord_Real_Real_Real_NoVirtual(this.nativeObject.pointer, uParamValue, vParamValue, wParamValue);
	}

	protected  void textureCoord_Real_Real_Real_Real_callback(double x, double y, double z, double w)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		double wParamValue = w;
		textureCoord(xParamValue, yParamValue, zParamValue, wParamValue);
	}

	native private void textureCoord_Real_Real_Real_Real(long pNativeObject, double x, double y, double z, double w);
	/**
	 * 为当前顶点添加纹理坐标根据需求，可以是一维到三维的
	 * @param x 
	 * @param y 
	 * @param z 
	 * @param w 
	 */
	public void textureCoord(double x, double y, double z, double w)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		double wParamValue = w;
		textureCoord_Real_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, wParamValue);
	}
	native private void textureCoord_Real_Real_Real_Real_NoVirtual(long pNativeObject, double x, double y, double z, double w);
	protected void textureCoord_NoVirtual(double x, double y, double z, double w)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		double wParamValue = w;
		textureCoord_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, wParamValue);
	}

	protected  void textureCoord_CVector2_callback(long uv)
	{
		com.earthview.world.spatial.math.Vector2 uvParamValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		uvParamValue.setDelegate(true);
		uvParamValue.setInstancePointer(new InstancePointer(uv));
		IClassFactory uvParamValueClassFactory = GlobalClassFactoryMap.get(uvParamValue.getCppInstanceTypeName());
		if (uvParamValueClassFactory != null)
		{
			uvParamValue.setDelegate(true);
			uvParamValue = (com.earthview.world.spatial.math.Vector2)uvParamValueClassFactory.create();
			uvParamValue.setDelegate(true);
			uvParamValue.setInstancePointer(new InstancePointer(uv));
		}
		textureCoord(uvParamValue);
	}

	native private void textureCoord_CVector2(long pNativeObject, long uv);
	/**
	 * 为当前顶点添加纹理坐标根据需求，可以是一维到三维的
	 * @param uv 二维矢量
	 */
	public void textureCoord(com.earthview.world.spatial.math.Vector2 uv)
	{
		long uvParamValue = uv.nativeObject.pointer;
		textureCoord_CVector2(this.nativeObject.pointer, uvParamValue);
	}
	native private void textureCoord_CVector2_NoVirtual(long pNativeObject, long uv);
	protected void textureCoord_NoVirtual(com.earthview.world.spatial.math.Vector2 uv)
	{
		long uvParamValue = uv.nativeObject.pointer;
		textureCoord_CVector2_NoVirtual(this.nativeObject.pointer, uvParamValue);
	}

	protected  void textureCoord_CVector3_callback(long uvw)
	{
		com.earthview.world.spatial.math.Vector3 uvwParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		uvwParamValue.setDelegate(true);
		uvwParamValue.setInstancePointer(new InstancePointer(uvw));
		IClassFactory uvwParamValueClassFactory = GlobalClassFactoryMap.get(uvwParamValue.getCppInstanceTypeName());
		if (uvwParamValueClassFactory != null)
		{
			uvwParamValue.setDelegate(true);
			uvwParamValue = (com.earthview.world.spatial.math.Vector3)uvwParamValueClassFactory.create();
			uvwParamValue.setDelegate(true);
			uvwParamValue.setInstancePointer(new InstancePointer(uvw));
		}
		textureCoord(uvwParamValue);
	}

	native private void textureCoord_CVector3(long pNativeObject, long uvw);
	/**
	 * 为当前顶点添加纹理坐标根据需求，可以是一维到三维的
	 * @param uvw 三维矢量
	 */
	public void textureCoord(com.earthview.world.spatial.math.Vector3 uvw)
	{
		long uvwParamValue = uvw.nativeObject.pointer;
		textureCoord_CVector3(this.nativeObject.pointer, uvwParamValue);
	}
	native private void textureCoord_CVector3_NoVirtual(long pNativeObject, long uvw);
	protected void textureCoord_NoVirtual(com.earthview.world.spatial.math.Vector3 uvw)
	{
		long uvwParamValue = uvw.nativeObject.pointer;
		textureCoord_CVector3_NoVirtual(this.nativeObject.pointer, uvwParamValue);
	}

	protected  void textureCoord_CVector4_callback(long xyzw)
	{
		com.earthview.world.spatial.math.Vector4 xyzwParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		xyzwParamValue.setDelegate(true);
		xyzwParamValue.setInstancePointer(new InstancePointer(xyzw));
		IClassFactory xyzwParamValueClassFactory = GlobalClassFactoryMap.get(xyzwParamValue.getCppInstanceTypeName());
		if (xyzwParamValueClassFactory != null)
		{
			xyzwParamValue.setDelegate(true);
			xyzwParamValue = (com.earthview.world.spatial.math.Vector4)xyzwParamValueClassFactory.create();
			xyzwParamValue.setDelegate(true);
			xyzwParamValue.setInstancePointer(new InstancePointer(xyzw));
		}
		textureCoord(xyzwParamValue);
	}

	native private void textureCoord_CVector4(long pNativeObject, long xyzw);
	/**
	 * 为当前顶点添加纹理坐标根据需求，可以是一维到三维的
	 * @param xyzw 四维矢量
	 */
	public void textureCoord(com.earthview.world.spatial.math.Vector4 xyzw)
	{
		long xyzwParamValue = xyzw.nativeObject.pointer;
		textureCoord_CVector4(this.nativeObject.pointer, xyzwParamValue);
	}
	native private void textureCoord_CVector4_NoVirtual(long pNativeObject, long xyzw);
	protected void textureCoord_NoVirtual(com.earthview.world.spatial.math.Vector4 xyzw)
	{
		long xyzwParamValue = xyzw.nativeObject.pointer;
		textureCoord_CVector4_NoVirtual(this.nativeObject.pointer, xyzwParamValue);
	}

	protected  void colour_CColourValue_callback(long col)
	{
		com.earthview.world.graphic.ColourValue colParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colParamValue.setDelegate(true);
		colParamValue.setInstancePointer(new InstancePointer(col));
		IClassFactory colParamValueClassFactory = GlobalClassFactoryMap.get(colParamValue.getCppInstanceTypeName());
		if (colParamValueClassFactory != null)
		{
			colParamValue.setDelegate(true);
			colParamValue = (com.earthview.world.graphic.ColourValue)colParamValueClassFactory.create();
			colParamValue.setDelegate(true);
			colParamValue.setInstancePointer(new InstancePointer(col));
		}
		colour(colParamValue);
	}

	native private void colour_CColourValue(long pNativeObject, long col);
	/**
	 * 为顶点添加颜色
	 * @param col 颜色
	 */
	public void colour(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		colour_CColourValue(this.nativeObject.pointer, colParamValue);
	}
	native private void colour_CColourValue_NoVirtual(long pNativeObject, long col);
	protected void colour_NoVirtual(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		colour_CColourValue_NoVirtual(this.nativeObject.pointer, colParamValue);
	}

	protected  void colour_Real_Real_Real_Real_callback(double r, double g, double b, double a)
	{
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		colour(rParamValue, gParamValue, bParamValue, aParamValue);
	}

	native private void colour_Real_Real_Real_Real(long pNativeObject, double r, double g, double b, double a);
	/**
	 * 为顶点添加颜色
	 * @param r 
	 * @param g 
	 * @param b 
	 * @param a 默认为1.0f
	 */
	public void colour(double r, double g, double b, double a)
	{
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		colour_Real_Real_Real_Real(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue, aParamValue);
	}
	native private void colour_Real_Real_Real_Real_NoVirtual(long pNativeObject, double r, double g, double b, double a);
	protected void colour_NoVirtual(double r, double g, double b, double a)
	{
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		colour_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue, aParamValue);
	}

	protected  void colour_Real_Real_Real_callback(double r, double g, double b)
	{
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		colour(rParamValue, gParamValue, bParamValue);
	}

	native private void colour_Real_Real_Real(long pNativeObject, double r, double g, double b);
	public void colour(double r, double g, double b)
	{
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		colour_Real_Real_Real(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue);
	}
	native private void colour_Real_Real_Real_NoVirtual(long pNativeObject, double r, double g, double b);
	protected void colour_NoVirtual(double r, double g, double b)
	{
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		colour_Real_Real_Real_NoVirtual(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue);
	}

	protected  void index_ev_uint32_callback(long idx)
	{
		long idxParamValue = idx;
		index(idxParamValue);
	}

	native private void index_ev_uint32(long pNativeObject, long idx);
	public void index(long idx)
	{
		long idxParamValue = idx;
		index_ev_uint32(this.nativeObject.pointer, idxParamValue);
	}
	native private void index_ev_uint32_NoVirtual(long pNativeObject, long idx);
	protected void index_NoVirtual(long idx)
	{
		long idxParamValue = idx;
		index_ev_uint32_NoVirtual(this.nativeObject.pointer, idxParamValue);
	}

	protected  void triangle_ev_uint32_ev_uint32_ev_uint32_callback(long i1, long i2, long i3)
	{
		long i1ParamValue = i1;
		long i2ParamValue = i2;
		long i3ParamValue = i3;
		triangle(i1ParamValue, i2ParamValue, i3ParamValue);
	}

	native private void triangle_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long i1, long i2, long i3);
	public void triangle(long i1, long i2, long i3)
	{
		long i1ParamValue = i1;
		long i2ParamValue = i2;
		long i3ParamValue = i3;
		triangle_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, i1ParamValue, i2ParamValue, i3ParamValue);
	}
	native private void triangle_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long i1, long i2, long i3);
	protected void triangle_NoVirtual(long i1, long i2, long i3)
	{
		long i1ParamValue = i1;
		long i2ParamValue = i2;
		long i3ParamValue = i3;
		triangle_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, i1ParamValue, i2ParamValue, i3ParamValue);
	}

	protected  void quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(long i1, long i2, long i3, long i4)
	{
		long i1ParamValue = i1;
		long i2ParamValue = i2;
		long i3ParamValue = i3;
		long i4ParamValue = i4;
		quad(i1ParamValue, i2ParamValue, i3ParamValue, i4ParamValue);
	}

	native private void quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long i1, long i2, long i3, long i4);
	public void quad(long i1, long i2, long i3, long i4)
	{
		long i1ParamValue = i1;
		long i2ParamValue = i2;
		long i3ParamValue = i3;
		long i4ParamValue = i4;
		quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, i1ParamValue, i2ParamValue, i3ParamValue, i4ParamValue);
	}
	native private void quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long i1, long i2, long i3, long i4);
	protected void quad_NoVirtual(long i1, long i2, long i3, long i4)
	{
		long i1ParamValue = i1;
		long i2ParamValue = i2;
		long i3ParamValue = i3;
		long i4ParamValue = i4;
		quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, i1ParamValue, i2ParamValue, i3ParamValue, i4ParamValue);
	}

	protected  long getCurrentVertexCount_void_callback()
	{
		long returnValue = getCurrentVertexCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getCurrentVertexCount_void(long pNativeObject);
	//// Get the number of vertices in the section currently being defined (returns 0 if no section is in progress).
	public long getCurrentVertexCount()
	{
		long returnValue = getCurrentVertexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCurrentVertexCount_void_NoVirtual(long pNativeObject);
	protected long getCurrentVertexCount_NoVirtual()
	{
		long returnValue = getCurrentVertexCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getCurrentIndexCount_void_callback()
	{
		long returnValue = getCurrentIndexCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getCurrentIndexCount_void(long pNativeObject);
	//// Get the number of indices in the section currently being defined (returns 0 if no section is in progress).
	public long getCurrentIndexCount()
	{
		long returnValue = getCurrentIndexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCurrentIndexCount_void_NoVirtual(long pNativeObject);
	protected long getCurrentIndexCount_NoVirtual()
	{
		long returnValue = getCurrentIndexCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long end_void_callback()
	{
		com.earthview.world.graphic.ManualObject.ManualObjectSection returnValue = end();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long end_void(long pNativeObject);
	public com.earthview.world.graphic.ManualObject.ManualObjectSection end()
	{
		long returnValue = end_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ManualObject.ManualObjectSection __returnValue = new com.earthview.world.graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate, "CManualObjectSection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ManualObject.ManualObjectSection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualObjectSection");
		}
		return __returnValue;
	}
	native private long end_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ManualObject.ManualObjectSection end_NoVirtual()
	{
		long returnValue = end_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ManualObject.ManualObjectSection __returnValue = new com.earthview.world.graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate, "CManualObjectSection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ManualObject.ManualObjectSection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualObjectSection");
		}
		return __returnValue;
	}

	protected  void setMaterialName_ev_size_t_EVString_EVString_callback(long subindex, String name, String group)
	{
		long subindexParamValue = subindex;
		String nameParamValue = name;
		String groupParamValue = group;
		setMaterialName(subindexParamValue, nameParamValue, groupParamValue);
	}

	native private void setMaterialName_ev_size_t_EVString_EVString(long pNativeObject, long subindex, String name, String group);
	public void setMaterialName(long subindex, String name, String group)
	{
		long subindexParamValue = subindex;
		String nameParamValue = name;
		String groupParamValue = group;
		setMaterialName_ev_size_t_EVString_EVString(this.nativeObject.pointer, subindexParamValue, nameParamValue, groupParamValue);
	}
	native private void setMaterialName_ev_size_t_EVString_EVString_NoVirtual(long pNativeObject, long subindex, String name, String group);
	protected void setMaterialName_NoVirtual(long subindex, String name, String group)
	{
		long subindexParamValue = subindex;
		String nameParamValue = name;
		String groupParamValue = group;
		setMaterialName_ev_size_t_EVString_EVString_NoVirtual(this.nativeObject.pointer, subindexParamValue, nameParamValue, groupParamValue);
	}

	protected  void setMaterialName_ev_size_t_EVString_callback(long subindex, String name)
	{
		long subindexParamValue = subindex;
		String nameParamValue = name;
		setMaterialName(subindexParamValue, nameParamValue);
	}

	native private void setMaterialName_ev_size_t_EVString(long pNativeObject, long subindex, String name);
	public void setMaterialName(long subindex, String name)
	{
		long subindexParamValue = subindex;
		String nameParamValue = name;
		setMaterialName_ev_size_t_EVString(this.nativeObject.pointer, subindexParamValue, nameParamValue);
	}
	native private void setMaterialName_ev_size_t_EVString_NoVirtual(long pNativeObject, long subindex, String name);
	protected void setMaterialName_NoVirtual(long subindex, String name)
	{
		long subindexParamValue = subindex;
		String nameParamValue = name;
		setMaterialName_ev_size_t_EVString_NoVirtual(this.nativeObject.pointer, subindexParamValue, nameParamValue);
	}

	protected  long convertToMesh_EVString_EVString_callback(String meshName, String groupName)
	{
		String meshNameParamValue = meshName;
		String groupNameParamValue = groupName;
		com.earthview.world.graphic.MeshPtr returnValue = convertToMesh(meshNameParamValue, groupNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long convertToMesh_EVString_EVString(long pNativeObject, String meshName, String groupName);
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

	protected  long convertToMesh_EVString_callback(String meshName)
	{
		String meshNameParamValue = meshName;
		com.earthview.world.graphic.MeshPtr returnValue = convertToMesh(meshNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long convertToMesh_EVString(long pNativeObject, String meshName);
	public com.earthview.world.graphic.MeshPtr convertToMesh(String meshName)
	{
		String meshNameParamValue = meshName;
		long returnValue = convertToMesh_EVString(this.nativeObject.pointer, meshNameParamValue);
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
	native private long convertToMesh_EVString_NoVirtual(long pNativeObject, String meshName);
	protected com.earthview.world.graphic.MeshPtr convertToMesh_NoVirtual(String meshName)
	{
		String meshNameParamValue = meshName;
		long returnValue = convertToMesh_EVString_NoVirtual(this.nativeObject.pointer, meshNameParamValue);
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

	native private void setUseIdentityProjection_ev_bool(long pNativeObject, boolean useIdentityProjection);
	public void setUseIdentityProjection(boolean useIdentityProjection)
	{
		boolean useIdentityProjectionParamValue = useIdentityProjection;
		setUseIdentityProjection_ev_bool(this.nativeObject.pointer, useIdentityProjectionParamValue);
	}
	native private boolean getUseIdentityProjection_void(long pNativeObject);
	public boolean getUseIdentityProjection()
	{
		boolean returnValue = getUseIdentityProjection_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseIdentityView_ev_bool(long pNativeObject, boolean useIdentityView);
	public void setUseIdentityView(boolean useIdentityView)
	{
		boolean useIdentityViewParamValue = useIdentityView;
		setUseIdentityView_ev_bool(this.nativeObject.pointer, useIdentityViewParamValue);
	}
	native private boolean getUseIdentityView_void(long pNativeObject);
	public boolean getUseIdentityView()
	{
		boolean returnValue = getUseIdentityView_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBoundingBox_CAxisAlignedBox(long pNativeObject, long box);
	public void setBoundingBox(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		setBoundingBox_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
	}
	native private long getSection_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.graphic.ManualObject.ManualObjectSection getSection(long index)
	{
		long indexParamValue = index;
		long returnValue = getSection_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ManualObject.ManualObjectSection __returnValue = new com.earthview.world.graphic.ManualObject.ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate, "CManualObjectSection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ManualObject.ManualObjectSection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualObjectSection");
		}
		return __returnValue;
	}
	native private long getNumSections_void(long pNativeObject);
	public long getNumSections()
	{
		long returnValue = getNumSections_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setKeepDeclarationOrder_ev_bool(long pNativeObject, boolean keepOrder);
	public void setKeepDeclarationOrder(boolean keepOrder)
	{
		boolean keepOrderParamValue = keepOrder;
		setKeepDeclarationOrder_ev_bool(this.nativeObject.pointer, keepOrderParamValue);
	}
	native private boolean getKeepDeclarationOrder_void(long pNativeObject);
	public boolean getKeepDeclarationOrder()
	{
		boolean returnValue = getKeepDeclarationOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private void setSelectionColour_CColourValue_NoVirtual(long pNativeObject, long colour);
	protected void setSelectionColour_NoVirtual(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue_NoVirtual(this.nativeObject.pointer, colourParamValue);
	}

	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
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
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectBy_CSphere_ev_bool_IntVector(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CSphere_ev_bool_IntVector_NoVirtual(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
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
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private void renderSelection_void(long pNativeObject);
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		renderSelection_void(this.nativeObject.pointer);
	}
	native private void renderSelection_void_NoVirtual(long pNativeObject);
	protected void renderSelection_NoVirtual()
	{
		renderSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private String getMovableType_void(long pNativeObject);
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
	public String getMovableType()
	{
		String returnValue = getMovableType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMovableType_void_NoVirtual(long pNativeObject);
	protected String getMovableType_NoVirtual()
	{
		String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获得限制的边框盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		long returnValue = getBoundingBox_void(this.nativeObject.pointer);
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
	native private long getBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
	{
		long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
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

	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获得限制范围
	 * @param  
	 * @return 范围
	 */
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
	/**
	 * 更新渲染队列
	 * @param queue 渲染队列
	 */
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

	native private long getEdgeList_void(long pNativeObject);
	/**
	 * 获得边列表
	 * @param  
	 */
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		long returnValue = getEdgeList_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}
	native private long getEdgeList_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EdgeData getEdgeList_NoVirtual()
	{
		long returnValue = getEdgeList_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}

	native private boolean hasEdgeList_void(long pNativeObject);
	/**
	 * 是否存在边列表
	 * @param  
	 */
	public boolean hasEdgeList()
	{
		boolean returnValue = hasEdgeList_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasEdgeList_void_NoVirtual(long pNativeObject);
	protected boolean hasEdgeList_NoVirtual()
	{
		boolean returnValue = hasEdgeList_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist, long flags);
	/**
	 * 获取阴影锥渲染对象的迭代器
	 * @param shadowTechnique 阴影技术
	 * @param light 光源
	 * @param indexBuffer 索引
	 * @param extrudeVertices 为真，在软件中挤压顶点后面的体积成为三维实体
	 * @param extrusionDist 距离
	 * @param flags 标识
	 */
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist, long flags);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist);
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDist);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDist)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistParamValue = extrusionDist;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	//// Built, renderable section of geometry
	public static class ManualObjectSection extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualObject::CManualObjectSection", new ManualObjectSectionClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualObject::JCManualObjectSectionProxy", new ManualObjectSectionClassFactory());
		}

		public ManualObjectSection(com.earthview.world.graphic.ManualObject parent, String materialName, com.earthview.world.graphic.RenderOperation.OperationType opType, String groupName) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			BasePointer materialNamePtr = new BasePointer(materialName);
			list.add("materialName", materialNamePtr.get());
			BasePointer opTypePtr = new BasePointer(opType);
			list.add("opType", opTypePtr.get());
			BasePointer groupNamePtr = new BasePointer(groupName);
			list.add("groupName", groupNamePtr.get());
			Create("JCManualObjectSectionProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ManualObject$ManualObjectSection".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public ManualObjectSection(com.earthview.world.graphic.ManualObject parent, String materialName, com.earthview.world.graphic.RenderOperation.OperationType opType) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			BasePointer materialNamePtr = new BasePointer(materialName);
			list.add("materialName", materialNamePtr.get());
			BasePointer opTypePtr = new BasePointer(opType);
			list.add("opType", opTypePtr.get());
			Create("JCManualObjectSectionProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ManualObject$ManualObjectSection".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getRenderOperation_void(long pNativeObject);
		//// Retrieve render operation for manipulation
		public com.earthview.world.graphic.RenderOperation getRenderOperation()
		{
			long returnValue = getRenderOperation_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderOperation __returnValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderOperation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderOperation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderOperation");
			}
			return __returnValue;
		}
		native private long getMaterialName_void(long pNativeObject);
		//// Retrieve the material name in use
		public StringPointer getMaterialName()
		{
			long returnValue = getMaterialName_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long getMaterialGroup_void(long pNativeObject);
		//// Retrieve the material group in use
		public StringPointer getMaterialGroup()
		{
			long returnValue = getMaterialGroup_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void setMaterialName_EVString_EVString(long pNativeObject, String name, String groupName);
		//// update the material name in use
		public void setMaterialName(String name, String groupName)
		{
			String nameParamValue = name;
			String groupNameParamValue = groupName;
			setMaterialName_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
		}
		native private void setMaterialName_EVString(long pNativeObject, String name);
		public void setMaterialName(String name)
		{
			String nameParamValue = name;
			setMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
		}
		native private void setMaterial_CMaterialPtr(long pNativeObject, long material);
		public void setMaterial(com.earthview.world.graphic.MaterialPtr material)
		{
			long materialParamValue = material.nativeObject.pointer;
			setMaterial_CMaterialPtr(this.nativeObject.pointer, materialParamValue);
		}
		native private void set32BitIndices_ev_bool(long pNativeObject, boolean n32);
		//// Set whether we need 32-bit indices
		public void set32BitIndices(boolean n32)
		{
			boolean n32ParamValue = n32;
			set32BitIndices_ev_bool(this.nativeObject.pointer, n32ParamValue);
		}
		native private boolean get32BitIndices_void(long pNativeObject);
		//// Get whether we need 32-bit indices
		public boolean get32BitIndices()
		{
			boolean returnValue = get32BitIndices_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getMaterial_void(long pNativeObject);
		/// EarthView::World::Graphic::CRenderable overrides
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			long returnValue = getMaterial_void(this.nativeObject.pointer);
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
		native private long getMaterial_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
		{
			long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
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

		native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
		}
		native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
		protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
		}

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
		}
		native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
		protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
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

		native private long getLights_void(long pNativeObject);
		public com.earthview.world.graphic.LightList getLights()
		{
			long returnValue = getLights_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}
		native private long getLights_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.LightList getLights_NoVirtual()
		{
			long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}

		protected  boolean selectBy_CRay_CViewport_CVector3_callback(long ray, long viewport, long point)
		{
			com.earthview.world.spatial.math.Ray rayParamValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
			rayParamValue.setDelegate(true);
			rayParamValue.setInstancePointer(new InstancePointer(ray));
			IClassFactory rayParamValueClassFactory = GlobalClassFactoryMap.get(rayParamValue.getCppInstanceTypeName());
			if (rayParamValueClassFactory != null)
			{
				rayParamValue.setDelegate(true);
				rayParamValue = (com.earthview.world.spatial.math.Ray)rayParamValueClassFactory.create();
				rayParamValue.setDelegate(true);
				rayParamValue.setInstancePointer(new InstancePointer(ray));
			}
			com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
			if(viewportParamValue != null)
			{
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
			IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
			if (viewportParamValueClassFactory != null)
			{
				viewportParamValue.setDelegate(true);
				viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
				viewportParamValue.setDelegate(true);
				viewportParamValue.setInstancePointer(new InstancePointer(viewport));
			}
			}
			com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
			IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
			if (pointParamValueClassFactory != null)
			{
				pointParamValue.setDelegate(true);
				pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
				pointParamValue.setDelegate(true);
				pointParamValue.setInstancePointer(new InstancePointer(point));
			}
			boolean returnValue = selectBy(rayParamValue, viewportParamValue, pointParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean selectBy_CRay_CViewport_CVector3(long pNativeObject, long ray, long viewport, long point);
		/**
		 * 射线选择
		 * @param ray 射线对象
		 * @param viewport 所在视口
		 * @param point 交点
		 * @return true:与射线相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point)
		{
			long rayParamValue = ray.nativeObject.pointer;
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			long pointParamValue = point.nativeObject.pointer;
			boolean returnValue = selectBy_CRay_CViewport_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue);
			return returnValue;
		}
		native private boolean selectBy_CRay_CViewport_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, long point);
		protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point)
		{
			long rayParamValue = ray.nativeObject.pointer;
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			long pointParamValue = point.nativeObject.pointer;
			boolean returnValue = selectBy_CRay_CViewport_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue);
			return returnValue;
		}

		native private long getMovableObject_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject getMovableObject()
		{
			long returnValue = getMovableObject_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long getMovableObject_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.MovableObject getMovableObject_NoVirtual()
		{
			long returnValue = getMovableObject_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}

		public ManualObjectSection(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ManualObjectSection(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 获得技术
		 * @param  
		 */
		public com.earthview.world.graphic.Technique getTechnique()
		{
			return super.getTechnique_NoVirtual();
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
		 * 获得渲染对象的世界变换矩阵的数量
		 * @param  
		 */
		public int getNumWorldTransforms()
		{
			return super.getNumWorldTransforms_NoVirtual();
		}
		/**
		 * 是否投射投影
		 * @param  
		 */
		public boolean getCastsShadows()
		{
			return super.getCastsShadows_NoVirtual();
		}
		/**
		 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
		 * @param constantEntry CAutoConstantEntry的别名
		 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
		 */
		public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
		{
			super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
		}
		/**
		 * 设置多边形渲染方式是否可重写
		 * @param override 设置参数
		 * @return true可以超越，false不可以
		 */
		public void setPolygonModeOverrideable(boolean override)
		{
			super.setPolygonModeOverrideable_NoVirtual(override);
		}
		/**
		 * 获得多边形渲染方式是否可重写
		 * @param  
		 */
		public boolean getPolygonModeOverrideable()
		{
			return super.getPolygonModeOverrideable_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数
		 * @param  
		 */
		public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
		{
			super.setCustomAmbient_NoVirtual(ambient);
		}
		/**
		 * 获取自定义环境光系数
		 * @param  
		 */
		public com.earthview.world.graphic.ColourValue getCustomAmbient()
		{
			return super.getCustomAmbient_NoVirtual();
		}
		/**
		 * 获取自定义环境光系数是否启用
		 * @param  
		 */
		public boolean getCustomAmbientEnabled()
		{
			return super.getCustomAmbientEnabled_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数是否启用
		 * @param  
		 */
		public void setCustomAmbientEnabled(boolean enabled)
		{
			super.setCustomAmbientEnabled_NoVirtual(enabled);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
		{
			super.addListener_NoVirtual(ref_listener);
		}
		/**
		 * 移除监听器
		 * @param listener 
		 */
		public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
		{
			super.removeListener_NoVirtual(listener);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
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
		public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
		{
			return super.getListener_NoVirtual(index);
		}
		/**
		 * 设置渲染系统的私有数据
		 * @param  
		 */
		public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
		{
			return super.getRenderSystemData_NoVirtual();
		}
		/**
		 * 获得渲染系统的私有数据
		 * @param  
		 */
		public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
		{
			super.setRenderSystemData_NoVirtual(ref_val);
		}
		
		native protected void register_selectBy_CRay_CViewport_CVector3(long pNativeObject, String method);
		native protected void register_getMaterial_void(long pNativeObject, String method);
		native protected void register_getTechnique_void(long pNativeObject, String method);
		native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
		native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
		native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
		native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
		native protected void register_getLights_void(long pNativeObject, String method);
		native protected void register_getCastsShadows_void(long pNativeObject, String method);
		native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
		native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
		native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
		native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
		native protected void register_getCustomAmbient_void(long pNativeObject, String method);
		native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
		native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
		native protected void register_getMovableObject_void(long pNativeObject, String method);
		native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_getListenerCount_void(long pNativeObject, String method);
		native protected void register_getListener_ev_uint32(long pNativeObject, String method);
		native protected void register_getRenderSystemData_void(long pNativeObject, String method);
		native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_selectBy_CRay_CViewport_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_CVector3_callback");
				this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
				this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
				this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
				this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
				this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
				this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
				this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
				this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
				this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
				this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
				this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
				this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
				this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
				this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
				this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
				this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
				this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
				this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
				this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
				this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
				this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
				this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
				this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
				this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
				this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
			}
		}
		
		public static ManualObjectSection fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ManualObjectSection obj = null;
 			if(baseObj instanceof ManualObjectSection)
			{
				obj = (ManualObjectSection)baseObj;
			} else {
				obj = new ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CManualObjectSection");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ManualObjectSectionClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ManualObjectSection emptyInstance = new ManualObjectSection(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ManualObjectSectionShadowRenderable extends com.earthview.world.graphic.ShadowRenderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualObject::ManualObjectSectionShadowRenderable", new ManualObjectSectionShadowRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualObject::JManualObjectSectionShadowRenderableProxy", new ManualObjectSectionShadowRenderableClassFactory());
		}

		public ManualObjectSectionShadowRenderable(com.earthview.world.graphic.ManualObject parent, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.VertexData vertexData, boolean createSeparateLightCap, boolean isLightCap) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			BasePointer indexBufferPtr = new BasePointer(indexBuffer);
			list.add("indexBuffer", indexBufferPtr.get());
			BasePointer vertexDataPtr = new BasePointer(vertexData);
			list.add("vertexData", vertexDataPtr.get());
			BasePointer createSeparateLightCapPtr = new BasePointer(createSeparateLightCap);
			list.add("createSeparateLightCap", createSeparateLightCapPtr.get());
			BasePointer isLightCapPtr = new BasePointer(isLightCap);
			list.add("isLightCap", isLightCapPtr.get());
			Create("JManualObjectSectionShadowRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ManualObject$ManualObjectSectionShadowRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public ManualObjectSectionShadowRenderable(com.earthview.world.graphic.ManualObject parent, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.VertexData vertexData, boolean createSeparateLightCap) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			BasePointer indexBufferPtr = new BasePointer(indexBuffer);
			list.add("indexBuffer", indexBufferPtr.get());
			BasePointer vertexDataPtr = new BasePointer(vertexData);
			list.add("vertexData", vertexDataPtr.get());
			BasePointer createSeparateLightCapPtr = new BasePointer(createSeparateLightCap);
			list.add("createSeparateLightCap", createSeparateLightCapPtr.get());
			Create("JManualObjectSectionShadowRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ManualObject$ManualObjectSectionShadowRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		//// Overridden from EarthView::World::Graphic::CShadowRenderable
		public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
		}
		native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
		protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
		}

		native private long getPositionBuffer_void(long pNativeObject);
		public com.earthview.world.graphic.HardwareVertexBufferSharedPtr getPositionBuffer()
		{
			long returnValue = getPositionBuffer_void(this.nativeObject.pointer);
			com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			}
			return __returnValue;
		}
		native private long getWBuffer_void(long pNativeObject);
		public com.earthview.world.graphic.HardwareVertexBufferSharedPtr getWBuffer()
		{
			long returnValue = getWBuffer_void(this.nativeObject.pointer);
			com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			}
			return __returnValue;
		}
		native private void rebindIndexBuffer_CHardwareIndexBufferSharedPtr(long pNativeObject, long indexBuffer);
		//// Overridden from ShadowRenderable
		public void rebindIndexBuffer(com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer)
		{
			long indexBufferParamValue = indexBuffer.nativeObject.pointer;
			rebindIndexBuffer_CHardwareIndexBufferSharedPtr(this.nativeObject.pointer, indexBufferParamValue);
		}
		native private void rebindIndexBuffer_CHardwareIndexBufferSharedPtr_NoVirtual(long pNativeObject, long indexBuffer);
		protected void rebindIndexBuffer_NoVirtual(com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer)
		{
			long indexBufferParamValue = indexBuffer.nativeObject.pointer;
			rebindIndexBuffer_CHardwareIndexBufferSharedPtr_NoVirtual(this.nativeObject.pointer, indexBufferParamValue);
		}

		public ManualObjectSectionShadowRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ManualObjectSectionShadowRenderable(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		//// Should this EarthView::World::Graphic::CShadowRenderable be treated as visible?
		public boolean isVisible()
		{
			return super.isVisible_NoVirtual();
		}
		/**
		 * 获得材质
		 * @param  
		 */
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			return super.getMaterial_NoVirtual();
		}
		/**
		 * 获得技术
		 * @param  
		 */
		public com.earthview.world.graphic.Technique getTechnique()
		{
			return super.getTechnique_NoVirtual();
		}
		/**
		 * 获得渲染操作
		 * @param op 
		 */
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			super.getRenderOperation_NoVirtual(op);
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
		 * 获得渲染对象的世界变换矩阵的数量
		 * @param  
		 */
		public int getNumWorldTransforms()
		{
			return super.getNumWorldTransforms_NoVirtual();
		}
		/// <summary>
		/// 返回渲染实体相对虚拟相机的观察深度的平方
		/// </summary>
		/// <param name="cam"></param>
		/// <returns</returns>
		public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
		{
			return super.getSquaredViewDepth_NoVirtual(cam);
		}
		/**
		 * 获得光照的列表，按照相对于渲染实体的远近排列
		 * @param  
		 */
		public com.earthview.world.graphic.LightList getLights()
		{
			return super.getLights_NoVirtual();
		}
		/**
		 * 是否投射投影
		 * @param  
		 */
		public boolean getCastsShadows()
		{
			return super.getCastsShadows_NoVirtual();
		}
		/**
		 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
		 * @param constantEntry CAutoConstantEntry的别名
		 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
		 */
		public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
		{
			super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
		}
		/**
		 * 设置多边形渲染方式是否可重写
		 * @param override 设置参数
		 * @return true可以超越，false不可以
		 */
		public void setPolygonModeOverrideable(boolean override)
		{
			super.setPolygonModeOverrideable_NoVirtual(override);
		}
		/**
		 * 获得多边形渲染方式是否可重写
		 * @param  
		 */
		public boolean getPolygonModeOverrideable()
		{
			return super.getPolygonModeOverrideable_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数
		 * @param  
		 */
		public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
		{
			super.setCustomAmbient_NoVirtual(ambient);
		}
		/**
		 * 获取自定义环境光系数
		 * @param  
		 */
		public com.earthview.world.graphic.ColourValue getCustomAmbient()
		{
			return super.getCustomAmbient_NoVirtual();
		}
		/**
		 * 获取自定义环境光系数是否启用
		 * @param  
		 */
		public boolean getCustomAmbientEnabled()
		{
			return super.getCustomAmbientEnabled_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数是否启用
		 * @param  
		 */
		public void setCustomAmbientEnabled(boolean enabled)
		{
			super.setCustomAmbientEnabled_NoVirtual(enabled);
		}
		public com.earthview.world.graphic.MovableObject getMovableObject()
		{
			return super.getMovableObject_NoVirtual();
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
		{
			super.addListener_NoVirtual(ref_listener);
		}
		/**
		 * 移除监听器
		 * @param listener 
		 */
		public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
		{
			super.removeListener_NoVirtual(listener);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
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
		public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
		{
			return super.getListener_NoVirtual(index);
		}
		/**
		 * 设置渲染系统的私有数据
		 * @param  
		 */
		public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
		{
			return super.getRenderSystemData_NoVirtual();
		}
		/**
		 * 获得渲染系统的私有数据
		 * @param  
		 */
		public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
		{
			super.setRenderSystemData_NoVirtual(ref_val);
		}
		
		native protected void register_isVisible_void(long pNativeObject, String method);
		native protected void register_rebindIndexBuffer_CHardwareIndexBufferSharedPtr(long pNativeObject, String method);
		native protected void register_getMaterial_void(long pNativeObject, String method);
		native protected void register_getTechnique_void(long pNativeObject, String method);
		native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
		native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
		native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
		native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
		native protected void register_getLights_void(long pNativeObject, String method);
		native protected void register_getCastsShadows_void(long pNativeObject, String method);
		native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
		native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
		native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
		native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
		native protected void register_getCustomAmbient_void(long pNativeObject, String method);
		native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
		native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
		native protected void register_getMovableObject_void(long pNativeObject, String method);
		native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_getListenerCount_void(long pNativeObject, String method);
		native protected void register_getListener_ev_uint32(long pNativeObject, String method);
		native protected void register_getRenderSystemData_void(long pNativeObject, String method);
		native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
				this.register_rebindIndexBuffer_CHardwareIndexBufferSharedPtr(this.nativeObject.pointer, "rebindIndexBuffer_CHardwareIndexBufferSharedPtr_callback");
				this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
				this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
				this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
				this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
				this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
				this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
				this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
				this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
				this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
				this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
				this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
				this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
				this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
				this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
				this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
				this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
				this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
				this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
				this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
				this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
				this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
				this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
				this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
				this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
				this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
			}
		}
		
		public static ManualObjectSectionShadowRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ManualObjectSectionShadowRenderable obj = null;
 			if(baseObj instanceof ManualObjectSectionShadowRenderable)
			{
				obj = (ManualObjectSectionShadowRenderable)baseObj;
			} else {
				obj = new ManualObjectSectionShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ManualObjectSectionShadowRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ManualObjectSectionShadowRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ManualObjectSectionShadowRenderable emptyInstance = new ManualObjectSectionShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SectionList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualObject::SectionList", new SectionListClassFactory());
		}

		public SectionList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SectionList", null);
		}

		native private void push_back_CManualObjectSection(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CManualObjectSection(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CManualObjectSection(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CManualObjectSection(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ManualObject.ManualObjectSection>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public SectionList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SectionList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SectionList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SectionList obj = null;
 			if(baseObj instanceof SectionList)
			{
				obj = (SectionList)baseObj;
			} else {
				obj = new SectionList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SectionList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SectionListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SectionList emptyInstance = new SectionList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染的物体
	 * @param visitor 访问者
	 * @param debugRenderables 是否调试可渲染的物体,默认为false
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
	}
	native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
	}

	protected  void resetTempAreas_void_callback()
	{
		resetTempAreas();
	}

	native private void resetTempAreas_void(long pNativeObject);
	//// Delete temp buffers and reset init counts
	public void resetTempAreas()
	{
		resetTempAreas_void(this.nativeObject.pointer);
	}
	native private void resetTempAreas_void_NoVirtual(long pNativeObject);
	protected void resetTempAreas_NoVirtual()
	{
		resetTempAreas_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void resizeTempVertexBufferIfNeeded_ev_size_t_callback(long numVerts)
	{
		long numVertsParamValue = numVerts;
		resizeTempVertexBufferIfNeeded(numVertsParamValue);
	}

	native private void resizeTempVertexBufferIfNeeded_ev_size_t(long pNativeObject, long numVerts);
	//// Resize the temp vertex buffer?
	public void resizeTempVertexBufferIfNeeded(long numVerts)
	{
		long numVertsParamValue = numVerts;
		resizeTempVertexBufferIfNeeded_ev_size_t(this.nativeObject.pointer, numVertsParamValue);
	}
	native private void resizeTempVertexBufferIfNeeded_ev_size_t_NoVirtual(long pNativeObject, long numVerts);
	protected void resizeTempVertexBufferIfNeeded_NoVirtual(long numVerts)
	{
		long numVertsParamValue = numVerts;
		resizeTempVertexBufferIfNeeded_ev_size_t_NoVirtual(this.nativeObject.pointer, numVertsParamValue);
	}

	protected  void resizeTempIndexBufferIfNeeded_ev_size_t_callback(long numInds)
	{
		long numIndsParamValue = numInds;
		resizeTempIndexBufferIfNeeded(numIndsParamValue);
	}

	native private void resizeTempIndexBufferIfNeeded_ev_size_t(long pNativeObject, long numInds);
	//// Resize the temp index buffer?
	public void resizeTempIndexBufferIfNeeded(long numInds)
	{
		long numIndsParamValue = numInds;
		resizeTempIndexBufferIfNeeded_ev_size_t(this.nativeObject.pointer, numIndsParamValue);
	}
	native private void resizeTempIndexBufferIfNeeded_ev_size_t_NoVirtual(long pNativeObject, long numInds);
	protected void resizeTempIndexBufferIfNeeded_NoVirtual(long numInds)
	{
		long numIndsParamValue = numInds;
		resizeTempIndexBufferIfNeeded_ev_size_t_NoVirtual(this.nativeObject.pointer, numIndsParamValue);
	}

	protected  void copyTempVertexToBuffer_void_callback()
	{
		copyTempVertexToBuffer();
	}

	native private void copyTempVertexToBuffer_void(long pNativeObject);
	//// Copy current temp vertex into buffer
	public void copyTempVertexToBuffer()
	{
		copyTempVertexToBuffer_void(this.nativeObject.pointer);
	}
	native private void copyTempVertexToBuffer_void_NoVirtual(long pNativeObject);
	protected void copyTempVertexToBuffer_NoVirtual()
	{
		copyTempVertexToBuffer_void_NoVirtual(this.nativeObject.pointer);
	}

	public ManualObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ManualObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_estimateVertexCount_ev_size_t(long pNativeObject, String method);
	native protected void register_estimateIndexCount_ev_size_t(long pNativeObject, String method);
	native protected void register_begin_EVString_OperationType_EVString(long pNativeObject, String method);
	native protected void register_begin_EVString_OperationType(long pNativeObject, String method);
	native protected void register_begin_EVString(long pNativeObject, String method);
	native protected void register_setDynamic_ev_bool(long pNativeObject, String method);
	native protected void register_getDynamic_void(long pNativeObject, String method);
	native protected void register_beginUpdate_ev_size_t(long pNativeObject, String method);
	native protected void register_position_CVector3(long pNativeObject, String method);
	native protected void register_position_Real_Real_Real(long pNativeObject, String method);
	native protected void register_normal_CVector3(long pNativeObject, String method);
	native protected void register_normal_Real_Real_Real(long pNativeObject, String method);
	native protected void register_tangent_CVector3(long pNativeObject, String method);
	native protected void register_tangent_Real_Real_Real(long pNativeObject, String method);
	native protected void register_textureCoord_Real(long pNativeObject, String method);
	native protected void register_textureCoord_Real_Real(long pNativeObject, String method);
	native protected void register_textureCoord_Real_Real_Real(long pNativeObject, String method);
	native protected void register_textureCoord_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_textureCoord_CVector2(long pNativeObject, String method);
	native protected void register_textureCoord_CVector3(long pNativeObject, String method);
	native protected void register_textureCoord_CVector4(long pNativeObject, String method);
	native protected void register_colour_CColourValue(long pNativeObject, String method);
	native protected void register_colour_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_colour_Real_Real_Real(long pNativeObject, String method);
	native protected void register_index_ev_uint32(long pNativeObject, String method);
	native protected void register_triangle_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getCurrentVertexCount_void(long pNativeObject, String method);
	native protected void register_getCurrentIndexCount_void(long pNativeObject, String method);
	native protected void register_end_void(long pNativeObject, String method);
	native protected void register_setMaterialName_ev_size_t_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMaterialName_ev_size_t_EVString(long pNativeObject, String method);
	native protected void register_convertToMesh_EVString_EVString(long pNativeObject, String method);
	native protected void register_convertToMesh_EVString(long pNativeObject, String method);
	native protected void register_resetTempAreas_void(long pNativeObject, String method);
	native protected void register_resizeTempVertexBufferIfNeeded_ev_size_t(long pNativeObject, String method);
	native protected void register_resizeTempIndexBufferIfNeeded_ev_size_t(long pNativeObject, String method);
	native protected void register_copyTempVertexToBuffer_void(long pNativeObject, String method);
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
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_estimateVertexCount_ev_size_t(this.nativeObject.pointer, "estimateVertexCount_ev_size_t_callback");
			this.register_estimateIndexCount_ev_size_t(this.nativeObject.pointer, "estimateIndexCount_ev_size_t_callback");
			this.register_begin_EVString_OperationType_EVString(this.nativeObject.pointer, "begin_EVString_OperationType_EVString_callback");
			this.register_begin_EVString_OperationType(this.nativeObject.pointer, "begin_EVString_OperationType_callback");
			this.register_begin_EVString(this.nativeObject.pointer, "begin_EVString_callback");
			this.register_setDynamic_ev_bool(this.nativeObject.pointer, "setDynamic_ev_bool_callback");
			this.register_getDynamic_void(this.nativeObject.pointer, "getDynamic_void_callback");
			this.register_beginUpdate_ev_size_t(this.nativeObject.pointer, "beginUpdate_ev_size_t_callback");
			this.register_position_CVector3(this.nativeObject.pointer, "position_CVector3_callback");
			this.register_position_Real_Real_Real(this.nativeObject.pointer, "position_Real_Real_Real_callback");
			this.register_normal_CVector3(this.nativeObject.pointer, "normal_CVector3_callback");
			this.register_normal_Real_Real_Real(this.nativeObject.pointer, "normal_Real_Real_Real_callback");
			this.register_tangent_CVector3(this.nativeObject.pointer, "tangent_CVector3_callback");
			this.register_tangent_Real_Real_Real(this.nativeObject.pointer, "tangent_Real_Real_Real_callback");
			this.register_textureCoord_Real(this.nativeObject.pointer, "textureCoord_Real_callback");
			this.register_textureCoord_Real_Real(this.nativeObject.pointer, "textureCoord_Real_Real_callback");
			this.register_textureCoord_Real_Real_Real(this.nativeObject.pointer, "textureCoord_Real_Real_Real_callback");
			this.register_textureCoord_Real_Real_Real_Real(this.nativeObject.pointer, "textureCoord_Real_Real_Real_Real_callback");
			this.register_textureCoord_CVector2(this.nativeObject.pointer, "textureCoord_CVector2_callback");
			this.register_textureCoord_CVector3(this.nativeObject.pointer, "textureCoord_CVector3_callback");
			this.register_textureCoord_CVector4(this.nativeObject.pointer, "textureCoord_CVector4_callback");
			this.register_colour_CColourValue(this.nativeObject.pointer, "colour_CColourValue_callback");
			this.register_colour_Real_Real_Real_Real(this.nativeObject.pointer, "colour_Real_Real_Real_Real_callback");
			this.register_colour_Real_Real_Real(this.nativeObject.pointer, "colour_Real_Real_Real_callback");
			this.register_index_ev_uint32(this.nativeObject.pointer, "index_ev_uint32_callback");
			this.register_triangle_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "triangle_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "quad_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_getCurrentVertexCount_void(this.nativeObject.pointer, "getCurrentVertexCount_void_callback");
			this.register_getCurrentIndexCount_void(this.nativeObject.pointer, "getCurrentIndexCount_void_callback");
			this.register_end_void(this.nativeObject.pointer, "end_void_callback");
			this.register_setMaterialName_ev_size_t_EVString_EVString(this.nativeObject.pointer, "setMaterialName_ev_size_t_EVString_EVString_callback");
			this.register_setMaterialName_ev_size_t_EVString(this.nativeObject.pointer, "setMaterialName_ev_size_t_EVString_callback");
			this.register_convertToMesh_EVString_EVString(this.nativeObject.pointer, "convertToMesh_EVString_EVString_callback");
			this.register_convertToMesh_EVString(this.nativeObject.pointer, "convertToMesh_EVString_callback");
			this.register_resetTempAreas_void(this.nativeObject.pointer, "resetTempAreas_void_callback");
			this.register_resizeTempVertexBufferIfNeeded_ev_size_t(this.nativeObject.pointer, "resizeTempVertexBufferIfNeeded_ev_size_t_callback");
			this.register_resizeTempIndexBufferIfNeeded_ev_size_t(this.nativeObject.pointer, "resizeTempIndexBufferIfNeeded_ev_size_t_callback");
			this.register_copyTempVertexToBuffer_void(this.nativeObject.pointer, "copyTempVertexToBuffer_void_callback");
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
	
	public static ManualObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ManualObject obj = null;
 		if(baseObj instanceof ManualObject)
		{
			obj = (ManualObject)baseObj;
		} else {
			obj = new ManualObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CManualObject");
			obj.increaseCast();
		}

		return obj;
	}
}
