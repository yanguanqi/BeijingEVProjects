package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityInstanceLayer extends com.earthview.world.spatial3d.atlas.EntityLayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CEntityInstanceLayer", new EntityInstanceLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCEntityInstanceLayerProxy", new EntityInstanceLayerClassFactory());
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆函数
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层类别
	 * @return 图层类别
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从工程文件序列化
	 * @param element xml数据
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 序列化到工程文件
	 * @return xml数据
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	protected  void setLayerAttribute_CModelBaseObject_callback(long pModel)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModelParamValue = (pModel == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pModelParamValue != null)
		{
		pModelParamValue.setDelegate(true);
		pModelParamValue.setInstancePointer(new InstancePointer(pModel));
		IClassFactory pModelParamValueClassFactory = GlobalClassFactoryMap.get(pModelParamValue.getCppInstanceTypeName());
		if (pModelParamValueClassFactory != null)
		{
			pModelParamValue.setDelegate(true);
			pModelParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pModelParamValueClassFactory.create();
			pModelParamValue.setDelegate(true);
			pModelParamValue.setInstancePointer(new InstancePointer(pModel));
		}
		}
		setLayerAttribute(pModelParamValue);
	}

	native private void setLayerAttribute_CModelBaseObject(long pNativeObject, long pModel);
	/**
	 * 设置图层属性
	 */
	public void setLayerAttribute(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		setLayerAttribute_CModelBaseObject(this.nativeObject.pointer, pModelParamValue);
	}
	native private void setLayerAttribute_CModelBaseObject_NoVirtual(long pNativeObject, long pModel);
	protected void setLayerAttribute_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		setLayerAttribute_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pModelParamValue);
	}

	native private boolean getSubEntityVisibility_ev_uint32_ev_bool_IntVector(long pNativeObject, long id, boolean visible, long subEntityIndexVector);
	/**
	 * 获取指定图层对象指定可见性的子部件集合
	 * @param id 模型id
	 * @param visible 可见性
	 * @param subEntityIndexVector subentity下标集合
	 */
	public boolean getSubEntityVisibility(long id, boolean visible, com.earthview.world.core.IntVector subEntityIndexVector)
	{
		long idParamValue = id;
		boolean visibleParamValue = visible;
		long subEntityIndexVectorParamValue = subEntityIndexVector.nativeObject.pointer;
		boolean returnValue = getSubEntityVisibility_ev_uint32_ev_bool_IntVector(this.nativeObject.pointer, idParamValue, visibleParamValue, subEntityIndexVectorParamValue);
		return returnValue;
	}
	native private boolean getSubEntityVisibility_ev_uint32_ev_bool_IntVector_NoVirtual(long pNativeObject, long id, boolean visible, long subEntityIndexVector);
	protected boolean getSubEntityVisibility_NoVirtual(long id, boolean visible, com.earthview.world.core.IntVector subEntityIndexVector)
	{
		long idParamValue = id;
		boolean visibleParamValue = visible;
		long subEntityIndexVectorParamValue = subEntityIndexVector.nativeObject.pointer;
		boolean returnValue = getSubEntityVisibility_ev_uint32_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, idParamValue, visibleParamValue, subEntityIndexVectorParamValue);
		return returnValue;
	}

	native private void setAsyncUpdateBuffer_ev_bool(long pNativeObject, boolean asyncUpdate);
	/**
	 * 设置异步更新buffer
	 * @param asyncUpdate 异步更新
	 */
	public void setAsyncUpdateBuffer(boolean asyncUpdate)
	{
		boolean asyncUpdateParamValue = asyncUpdate;
		setAsyncUpdateBuffer_ev_bool(this.nativeObject.pointer, asyncUpdateParamValue);
	}
	native private boolean getAsyncUpdateBuffer_void(long pNativeObject);
	/**
	 * 获取异步更新buffer
	 * @return 是否异步更新buffer
	 */
	public boolean getAsyncUpdateBuffer()
	{
		boolean returnValue = getAsyncUpdateBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEditing_ev_bool(long pNativeObject, boolean editing);
	/**
	 * 启用或禁用图层编辑
	 * @param editing 编辑状态
	 */
	public void setEditing(boolean editing)
	{
		boolean editingParamValue = editing;
		setEditing_ev_bool(this.nativeObject.pointer, editingParamValue);
	}
	native private void setEditing_ev_bool_NoVirtual(long pNativeObject, boolean editing);
	protected void setEditing_NoVirtual(boolean editing)
	{
		boolean editingParamValue = editing;
		setEditing_ev_bool_NoVirtual(this.nativeObject.pointer, editingParamValue);
	}

	public EntityInstanceLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntityInstanceLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 前一帧是否有可见模型
	 */
	public boolean hasVisibleObject()
	{
		return super.hasVisibleObject_NoVirtual();
	}
	/**
	 * 获取包围盒
	 * @return 包围盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getAABBox()
	{
		return super.getAABBox_NoVirtual();
	}
	/**
	 * 设置选择时的颜色
	 * @param color 设置的颜色
	 */
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		super.setSelectionColour_NoVirtual(colour);
	}
	/**
	 * 获取选择时的颜色
	 * @return EarthView::World::Graphic::CColourValue
	 */
	public com.earthview.world.graphic.ColourValue getSelectionColour()
	{
		return super.getSelectionColour_NoVirtual();
	}
	/**
	 * 是否接收阴影
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isRevShadow()
	{
		return super.isRevShadow_NoVirtual();
	}
	/**
	 * 设置接收阴影
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public void setRevShadow(boolean revShadow)
	{
		super.setRevShadow_NoVirtual(revShadow);
	}
	/**
	 * 是否投射阴影
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isCastShadow()
	{
		return super.isCastShadow_NoVirtual();
	}
	/**
	 * 设置投射阴影
	 */
	public void setCastShadow(boolean castShadow)
	{
		super.setCastShadow_NoVirtual(castShadow);
	}
	/**
	 * 设置某个图层反射光系数增益
	 * @param ambient 环境光增益
	 * @param diffuse 漫反射增益
	 * @param specular 镜面反射增益
	 */
	public void setEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		super.setEnvParam_NoVirtual(ambient, diffuse, specular);
	}
	/**
	 * 获取图层反射光系数增益
	 * @return ambient环境光增益，diffuse漫反射增益，specular镜面反射增益
	 */
	public void getEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		super.getEnvParam_NoVirtual(ambient, diffuse, specular);
	}
	/**
	 * 设置图层mipmap参数，调用以前要停止图层工作
	 * @param modelMipMap mipmap参数
	 */
	public void setMipMap(double modelMipMap)
	{
		super.setMipMap_NoVirtual(modelMipMap);
	}
	/**
	 * 获取图层mipmap参数
	 * @return mipmap参数
	 */
	public double getMipMap()
	{
		return super.getMipMap_NoVirtual();
	}
	/**
	 * 获取图层安全的可见距离
	 * @return mipmap参数
	 */
	public boolean checkSafeVisibleDistance(double distance)
	{
		return super.checkSafeVisibleDistance_NoVirtual(distance);
	}
	/**
	 * 设置图层可见距离
	 * @param distance 可见距离
	 */
	public void setVisibleDistance(double distance)
	{
		super.setVisibleDistance_NoVirtual(distance);
	}
	/**
	 * 获取图层可见距离
	 * @return 可见距离
	 */
	public double getVisibleDistance()
	{
		return super.getVisibleDistance_NoVirtual();
	}
	/**
	 * 设置对象卸载时的缓冲距离
	 * @param distance 可见距离
	 */
	public void setUnloadBufferDistance(double distance)
	{
		super.setUnloadBufferDistance_NoVirtual(distance);
	}
	/**
	 * 获取对象卸载时的缓冲距离
	 * @return 可见距离
	 */
	public double getUnloadBufferDistance()
	{
		return super.getUnloadBufferDistance_NoVirtual();
	}
	/**
	 * 设置高度模式
	 * @param altitudeMode 高度模式
	 * @param altitudeValue 高度值
	 */
	public void setAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeValue)
	{
		super.setAltitudeMode_NoVirtual(altitudeMode, altitudeValue);
	}
	/**
	 * 获取高度模式
	 * @return altitudeMode高度模式，altitudeValue高度值
	 */
	public void getAltitudeMode(EnumPointer altitudeMode, DoublePointer altitudeValue)
	{
		super.getAltitudeMode_NoVirtual(altitudeMode, altitudeValue);
	}
	/**
	 * 当前高度模式是否代被dem影响
	 */
	public boolean isAffectByDem()
	{
		return super.isAffectByDem_NoVirtual();
	}
	/**
	 * 当前高度模式是否能编辑模型高度
	 */
	public boolean canEditAltitude()
	{
		return super.canEditAltitude_NoVirtual();
	}
	/**
	 * 获取模型的海拔
	 * @param pModel 获取模型的海拔
	 */
	public double getAltitude(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		return super.getAltitude_NoVirtual(pModel);
	}
	/**
	 * 获取dem
	 * @param latitude 纬度
	 * @param longitude 经度
	 */
	public double getDem(double latitude, double longitude)
	{
		return super.getDem_NoVirtual(latitude, longitude);
	}
	/**
	 * 获取模型中心点对应的高程
	 * @param pModel 获取模型中心点对应的高程
	 */
	public double getDem(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		return super.getDem_NoVirtual(pModel);
	}
	/**
	 * 刷新
	 */
	public boolean refresh()
	{
		return super.refresh_NoVirtual();
	}
	/**
	 * 刷新指定id的模型
	 */
	public boolean refresh(long id)
	{
		return super.refresh_NoVirtual(id);
	}
	/**
	 * 刷新模型位置
	 * @param pModel 刷新模型位置
	 */
	public void refreshPosition(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		super.refreshPosition_NoVirtual(pModel);
	}
	/**
	 * 图层选择
	 * @param ray 射线
	 */
	public com.earthview.world.graphic.MovableObject select(com.earthview.world.spatial.math.Ray ray, DoublePointer hitDistance, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.select_NoVirtual(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
	}
	public com.earthview.world.graphic.MovableObject selectComponentBy(com.earthview.world.spatial.math.Ray ray, DoublePointer hitDistance, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectComponentBy_NoVirtual(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
	}
	/**
	 * 加载所有可视对象的节点并合并包围盒
	 * @param ray 射线
	 */
	public void loadVisibleObjectNodeAndMergeBoundingBox()
	{
		super.loadVisibleObjectNodeAndMergeBoundingBox_NoVirtual();
	}
	/**
	 * 清空指定ID子部件可见性
	 * @param id 模型id
	 */
	public void clearSubEntityVisibility(long id)
	{
		super.clearSubEntityVisibility_NoVirtual(id);
	}
	/**
	 * 清空所有子部件可见性
	 * @param id 模型id
	 */
	public void clearSubEntityVisibility()
	{
		super.clearSubEntityVisibility_NoVirtual();
	}
	/**
	 * 设置图层对象可见过滤器,不带记忆功能（这次设置会把上次冲掉）
	 * @param visible visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见
	 * @param ids 对象的ID集合
	 */
	public boolean setVisibilityFilter(boolean visible, com.earthview.world.core.IntVector ids)
	{
		return super.setVisibilityFilter_NoVirtual(visible, ids);
	}
	/**
	 * 设置图层对象可见过滤器，带记忆功能（不会冲掉上次设置）
	 * @param visible visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见
	 * @param id 对象的ID
	 */
	public boolean setVisibilityFilter(boolean visible, long id)
	{
		return super.setVisibilityFilter_NoVirtual(visible, id);
	}
	/**
	 * 设置图层对象可见过滤器，带记忆功能（不会冲掉上次设置）
	 */
	public boolean setVisibilityFilter2(boolean visible, com.earthview.world.core.IntVector ids)
	{
		return super.setVisibilityFilter2_NoVirtual(visible, ids);
	}
	/**
	 * 设置图层对象子部件可见性
	 * @param visible 设置指定的subentity可见或者不可见
	 * @param id 对象的ID
	 * @param subEntityIndex 对象的某个subEntityIndex
	 */
	public boolean setSubEntityVisibility(boolean visible, long id, long subEntityIndex)
	{
		return super.setSubEntityVisibility_NoVirtual(visible, id, subEntityIndex);
	}
	/**
	 * 设置图层对象子部件可见性
	 * @param visible 设置指定的subEntity集合可见或者不可见
	 * @param id 对象的ID
	 * @param subEntityIndexVector 对象的subEntityIndex集合
	 */
	public boolean setSubEntityVisibility(boolean visible, long id, com.earthview.world.core.IntVector subEntityIndexVector)
	{
		return super.setSubEntityVisibility_NoVirtual(visible, id, subEntityIndexVector);
	}
	/**
	 * 获取图层对象可见过滤器
	 * @param visible visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见
	 * @param ids 对象的ID集合
	 */
	public boolean getVisibilityFilter(BooleanPointer visible, com.earthview.world.core.IntVector ids)
	{
		return super.getVisibilityFilter_NoVirtual(visible, ids);
	}
	/**
	 * 获取图层对象可见过滤器
	 * @param id 对象的ID集合
	 * @return 返回当前对象在过滤器中的可见性
	 */
	public boolean getVisibilityFilter(long id)
	{
		return super.getVisibilityFilter_NoVirtual(id);
	}
	/**
	 * 获取指定图层对象指定子部件的可见性
	 * @param id 对象的ID
	 * @param subEntityIndex 对象的SubEntity
	 * @return 返回当前对象在过滤器中的可见性
	 */
	public boolean getSubEntityVisibility(long id, long subEntityIndex)
	{
		return super.getSubEntityVisibility_NoVirtual(id, subEntityIndex);
	}
	/**
	 * 获取图层可见的模型指针，不可见则返回NULL。只能临时取出用用，下一帧有可能被图层卸载。
	 * @param id 模型id
	 * @return 模型对象
	 */
	public com.earthview.world.geometry3d.VisibleObject getVisibleObject(long id)
	{
		return super.getVisibleObject_NoVirtual(id);
	}
	/**
	 * 获取所有模型ID
	 * @param id 模型id
	 * @return 模型对象
	 */
	public com.earthview.world.core.IntVector getAllObjectIDs()
	{
		return super.getAllObjectIDs_NoVirtual();
	}
	/// <summary>
	/// 图层定位
	/// <param name="latitude">纬度</param>
	/// <param name="longitude">经度</param>
	/// <param name="altitude">高度</param>
	/// <returns>true跳转成功，false图层无数据</returns>
	public boolean getGotoParam(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		return super.getGotoParam_NoVirtual(latitude, longitude, altitude);
	}
	/// <summary>
	/// 获取图层记录跳转参数
	/// <param name="id">模型id</param>
	/// <param name="latitude">纬度</param>
	/// <param name="longitude">经度</param>
	/// <param name="altitude">高度</param>
	/// <returns>true跳转成功，false图层无数据</returns>
	public boolean getGotoParam(long id, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		return super.getGotoParam_NoVirtual(id, latitude, longitude, altitude);
	}
	/// <summary>
	/// 应用环境纹理映射到模型
	/// <param name="id">模型id</param>
	/// <returns></returns>
	public void applyModelEnvMapTexture(long id)
	{
		super.applyModelEnvMapTexture_NoVirtual(id);
	}
	/// <summary>
	/// 取消应用环境纹理映射从模型
	/// <param name="id">模型id</param>
	/// <returns></returns>
	public void cancelModelEnvMapTexture(long id)
	{
		super.cancelModelEnvMapTexture_NoVirtual(id);
	}
	/// <summary>
	/// 设置环境映射最大支持的模型个数
	/// <returns></returns>
	public void setMaxEnvMapObjectCount(long count)
	{
		super.setMaxEnvMapObjectCount_NoVirtual(count);
	}
	/// <summary>
	/// 获取环境映射最大支持的模型个数
	/// <returns></returns>
	public long getMaxEnvMapObjectCount()
	{
		return super.getMaxEnvMapObjectCount_NoVirtual();
	}
	/// <summary>
	/// 是否超过图层映射允许的最多模型个数
	/// <returns></returns>
	public boolean allowApplyEnvMap()
	{
		return super.allowApplyEnvMap_NoVirtual();
	}
	/// <summary>
	/// 应用环境纹理映射到图层
	/// <returns></returns>
	public void applyEnvMapTexture()
	{
		super.applyEnvMapTexture_NoVirtual();
	}
	/// <summary>
	/// 取消应用环境纹理映射从图层
	/// <returns></returns>
	public void cancelEnvMapTexture()
	{
		super.cancelEnvMapTexture_NoVirtual();
	}
	/**
	 * //强行停止图层工作，相机裁剪此时不起作用
	 * @param bClearObject 是否清除对象
	 */
	public void stopRender(boolean bClearObject)
	{
		super.stopRender_NoVirtual(bClearObject);
	}
	/**
	 * 强行开始图层工作
	 */
	public void startRender()
	{
		super.startRender_NoVirtual();
	}
	/**
	 * 是否开启模型图层选择
	 */
	public boolean isLoadModelNode()
	{
		return super.isLoadModelNode_NoVirtual();
	}
	/**
	 * 设置模型图层选择是否开启
	 * @param flag 是否开启
	 */
	public void setLoadModelNode(boolean flag)
	{
		super.setLoadModelNode_NoVirtual(flag);
	}
	/**
	 * 模型被加载监听
	 * @param object 模型对象
	 */
	public void _notifyModelLoaded(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		super._notifyModelLoaded_NoVirtual(object);
	}
	/**
	 * 模型被卸载监听
	 * @param object 模型对象
	 */
	public void _notifyModelUnLoaded(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		super._notifyModelUnLoaded_NoVirtual(object);
	}
	/**
	 * 模型挂接前监听
	 * @param object 模型对象
	 */
	public void _notifyModelPreAttach(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		super._notifyModelPreAttach_NoVirtual(object);
	}
	/**
	 * 模型挂接后监听
	 * @param object 模型对象
	 */
	public void _notifyModelAttached(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		super._notifyModelAttached_NoVirtual(object);
	}
	/**
	 * 模型反挂接后监听
	 * @param object 模型对象
	 */
	public void _notifyModelDetached(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		super._notifyModelDetached_NoVirtual(object);
	}
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr(long id)
	{
		return super.getVisibleObjectPtr_NoVirtual(id);
	}
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr(com.earthview.world.graphic.MovableObject pMovableObj)
	{
		return super.getVisibleObjectPtr_NoVirtual(pMovableObj);
	}
	/**
	 * 根据要素获取对象，对象已存在图层中
	 * @param  
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr(com.earthview.world.spatial.geodataset.Ifeature f)
	{
		return super.getVisibleObjectPtr_NoVirtual(f);
	}
	/**
	 * 创建要素获取对象，插入到图层中
	 * @param  
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr createVisibleObjectPtr(com.earthview.world.spatial.geodataset.Ifeature ref_f)
	{
		return super.createVisibleObjectPtr_NoVirtual(ref_f);
	}
	/// <summary>
	/// 获得场景名称
	/// </summary>
	/// <returns>场景名称</return>
	public String getSceneName()
	{
		return super.getSceneName_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最小值
	 * @param  
	 * @return 包围盒在X轴上最小值
	 */
	public double getMinX()
	{
		return super.getMinX_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最大值
	 * @param  
	 * @return 包围盒在X轴上最大值
	 */
	public double getMaxX()
	{
		return super.getMaxX_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最小值
	 * @param  
	 * @return 包围盒在Y轴上最小值
	 */
	public double getMinY()
	{
		return super.getMinY_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最大值
	 * @param  
	 * @return 包围盒在Y轴上最大值
	 */
	public double getMaxY()
	{
		return super.getMaxY_NoVirtual();
	}
	/**
	 * 根据经纬度和级别获取高程
	 * @param lat 纬度
	 * @param lon 经度
	 * @param targetSamplesPerDegrees 每度采样数，-1表示最高精度
	 */
	public boolean getHeightAt(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		return super.getHeightAt_NoVirtual(lat, lon, targetSamplesPerDegrees, height);
	}
	/**
	 * Globe加载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerAdd_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe卸载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerRemoved_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe刷新时调用的函数
	 * @param camera 当前的相机
	 * @param level 当前的级别
	 * @param force 是否为强制刷新
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		super._notifyRefreshed_NoVirtual(camera, updateType);
	}
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		super._notifyRefreshed_NoVirtual(camera);
	}
	/**
	 * 数据集更新事件的通知
	 * @param strDatasetName 数据集名称
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		super._notifyDataChanged_NoVirtual(strDataSourceName, strDatasetName, pEvent);
	}
	/// <summary>
	/// 获得场景管理器
	/// </summary>
	/// <returns>场景管理器</return>
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
	}
	/**
	 * 获取与图层所关联的数据集
	 * @param  
	 * @return 数据集
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		return super.getDataset_NoVirtual();
	}
	/**
	 * 获取数据集的名称
	 * @param  
	 */
	public String getDatasetName()
	{
		return super.getDatasetName_NoVirtual();
	}
	/**
	 * 获取数据集所在的数据源
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource()
	{
		return super.getDataSource_NoVirtual();
	}
	/**
	 * 图层选择
	 * @param filter 选择过滤条件
	 * @param type 选择类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		super.select_NoVirtual(filter, type);
	}
	/**
	 * 清空图层选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
	}
	/**
	 * 获取图层选择
	 * @param  
	 * @return 图层选择
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		return super.getLayerSelection_NoVirtual();
	}
	/**
	 * 获取图层的名称
	 * @param  
	 * @return 图层名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置图层的名称
	 * @param name 图层名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	/**
	 * 获取图层的描述信息
	 * @param  
	 * @return 描述信息
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 设置图层的描述信息
	 * @param value 描述信息
	 */
	public void setDescription(String value)
	{
		super.setDescription_NoVirtual(value);
	}
	/**
	 * 检测图层图层是否可以编辑
	 * @param  
	 * @return 如果图层可以编辑,则返回true,反之则否
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
	}
	/**
	 * 检测图层是否正在被编辑
	 * @param  
	 * @return 如果图层正在编辑则返回true,反之则否
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置图层是否可视
	 * @param visible 如果为true,则图层可视,反之则否
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 检测图层是否有效
	 * @param  
	 * @return 如果有效则返回true,反之则否
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 判断图层是否支持选择
	 * @param  
	 */
	public boolean isSelectable()
	{
		return super.isSelectable_NoVirtual();
	}
	/**
	 * 设置图层是否支持选择
	 * @param selectable 是否可选
	 */
	public void setSelectable(boolean selectable)
	{
		super.setSelectable_NoVirtual(selectable);
	}
	/**
	 * 检测图层绘制时是否忽略比例尺的因素
	 * @param  
	 * @return 如果忽略,则返回true,反之则否
	 */
	public boolean ignoreScale()
	{
		return super.ignoreScale_NoVirtual();
	}
	/**
	 * 设置图层的绘制是否忽略比例尺的因素
	 * @param bIgnore 是否忽略
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		super.setIgnoreScale_NoVirtual(bIgnore);
	}
	/**
	 * 获取最大显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMaxScale()
	{
		return super.getDisplayMaxScale_NoVirtual();
	}
	/**
	 * 设置最大显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMaxScale(double scale)
	{
		super.setDisplayMaxScale_NoVirtual(scale);
	}
	/**
	 * 获取最小显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMinScale()
	{
		return super.getDisplayMinScale_NoVirtual();
	}
	/**
	 * 设置最小显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMinScale(double scale)
	{
		super.setDisplayMinScale_NoVirtual(scale);
	}
	/**
	 * 获取图层的坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
	}
	/**
	 * 设置图层的坐标系统
	 * @param sr 坐标系统
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReference_NoVirtual(ref_sr);
	}
	/**
	 * 设置图层的透明度
	 * @param transparent 透明值
	 */
	public void setTransparentValue(short transparent)
	{
		super.setTransparentValue_NoVirtual(transparent);
	}
	/**
	 * 获取图层的透明值
	 * @param  
	 * @return 透明值
	 */
	public short getTransparentValue()
	{
		return super.getTransparentValue_NoVirtual();
	}
	/**
	 * 获取图层的范围
	 * @param  
	 * @return 图层范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		return super.getExtent_NoVirtual();
	}
	/**
	 * 绘制图层
	 * @param display 空间显示参数
	 * @param type 绘制类型
	 */
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		return super.draw_NoVirtual(display, type);
	}
	/**
	 * 把图层的信息保存到流中
	 * @param steam 导出流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_setLayerAttribute_CModelBaseObject(long pNativeObject, String method);
	native protected void register_hasVisibleObject_void(long pNativeObject, String method);
	native protected void register_getAABBox_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_getSelectionColour_void(long pNativeObject, String method);
	native protected void register_isRevShadow_void(long pNativeObject, String method);
	native protected void register_setRevShadow_ev_bool(long pNativeObject, String method);
	native protected void register_isCastShadow_void(long pNativeObject, String method);
	native protected void register_setCastShadow_ev_bool(long pNativeObject, String method);
	native protected void register_setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_getEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_setMipMap_ev_real64(long pNativeObject, String method);
	native protected void register_getMipMap_void(long pNativeObject, String method);
	native protected void register_checkSafeVisibleDistance_ev_real64(long pNativeObject, String method);
	native protected void register_setVisibleDistance_ev_real64(long pNativeObject, String method);
	native protected void register_getVisibleDistance_void(long pNativeObject, String method);
	native protected void register_setUnloadBufferDistance_ev_real64(long pNativeObject, String method);
	native protected void register_getUnloadBufferDistance_void(long pNativeObject, String method);
	native protected void register_setAltitudeMode_EVAltitudeMode_ev_real64(long pNativeObject, String method);
	native protected void register_getAltitudeMode_EVAltitudeMode_ev_real64(long pNativeObject, String method);
	native protected void register_isAffectByDem_void(long pNativeObject, String method);
	native protected void register_canEditAltitude_void(long pNativeObject, String method);
	native protected void register_getAltitude_CModelBaseObject(long pNativeObject, String method);
	native protected void register_getDem_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getDem_CModelBaseObject(long pNativeObject, String method);
	native protected void register_refresh_void(long pNativeObject, String method);
	native protected void register_refresh_ev_uint32(long pNativeObject, String method);
	native protected void register_refreshPosition_CModelBaseObject(long pNativeObject, String method);
	native protected void register_select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_loadVisibleObjectNodeAndMergeBoundingBox_void(long pNativeObject, String method);
	native protected void register_clearSubEntityVisibility_ev_uint32(long pNativeObject, String method);
	native protected void register_clearSubEntityVisibility_void(long pNativeObject, String method);
	native protected void register_setVisibilityFilter_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_setVisibilityFilter_ev_bool_ev_uint32(long pNativeObject, String method);
	native protected void register_setVisibilityFilter2_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_setSubEntityVisibility_ev_bool_ev_uint32_IntVector(long pNativeObject, String method);
	native protected void register_getVisibilityFilter_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_getVisibilityFilter_ev_uint32(long pNativeObject, String method);
	native protected void register_getSubEntityVisibility_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getSubEntityVisibility_ev_uint32_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_getVisibleObject_ev_uint32(long pNativeObject, String method);
	native protected void register_getAllObjectIDs_void(long pNativeObject, String method);
	native protected void register_getGotoParam_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_applyModelEnvMapTexture_ev_uint32(long pNativeObject, String method);
	native protected void register_cancelModelEnvMapTexture_ev_uint32(long pNativeObject, String method);
	native protected void register_setMaxEnvMapObjectCount_ev_uint32(long pNativeObject, String method);
	native protected void register_getMaxEnvMapObjectCount_void(long pNativeObject, String method);
	native protected void register_allowApplyEnvMap_void(long pNativeObject, String method);
	native protected void register_applyEnvMapTexture_void(long pNativeObject, String method);
	native protected void register_cancelEnvMapTexture_void(long pNativeObject, String method);
	native protected void register_stopRender_ev_bool(long pNativeObject, String method);
	native protected void register_startRender_void(long pNativeObject, String method);
	native protected void register_isLoadModelNode_void(long pNativeObject, String method);
	native protected void register_setLoadModelNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyModelLoaded_CModelBaseObject(long pNativeObject, String method);
	native protected void register__notifyModelUnLoaded_CModelBaseObject(long pNativeObject, String method);
	native protected void register__notifyModelPreAttach_CModelBaseObject(long pNativeObject, String method);
	native protected void register__notifyModelAttached_CModelBaseObject(long pNativeObject, String method);
	native protected void register__notifyModelDetached_CModelBaseObject(long pNativeObject, String method);
	native protected void register_getVisibleObjectPtr_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibleObjectPtr_CMovableObject(long pNativeObject, String method);
	native protected void register_getVisibleObjectPtr_IFeature(long pNativeObject, String method);
	native protected void register_createVisibleObjectPtr_IFeature(long pNativeObject, String method);
	native protected void register_getSceneName_void(long pNativeObject, String method);
	native protected void register_getMinX_void(long pNativeObject, String method);
	native protected void register_getMaxX_void(long pNativeObject, String method);
	native protected void register_getMinY_void(long pNativeObject, String method);
	native protected void register_getMaxY_void(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register__notifyLayerAdd_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyLayerRemoved_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera(long pNativeObject, String method);
	native protected void register__notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getDatasetName_void(long pNativeObject, String method);
	native protected void register_getDataSource_void(long pNativeObject, String method);
	native protected void register_select_IQueryFilter_EVSelectionResultType(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setLayerSelection_ILayerSelection(long pNativeObject, String method);
	native protected void register_getLayerSelection_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_setCanEdit_ev_bool(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_setEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getDisplayMaxScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_getDisplayMinScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setTransparentValue_ev_uint8(long pNativeObject, String method);
	native protected void register_getTransparentValue_void(long pNativeObject, String method);
	native protected void register_getExtent_void(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setLayerAttribute_CModelBaseObject(this.nativeObject.pointer, "setLayerAttribute_CModelBaseObject_callback");
			this.register_hasVisibleObject_void(this.nativeObject.pointer, "hasVisibleObject_void_callback");
			this.register_getAABBox_void(this.nativeObject.pointer, "getAABBox_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_getSelectionColour_void(this.nativeObject.pointer, "getSelectionColour_void_callback");
			this.register_isRevShadow_void(this.nativeObject.pointer, "isRevShadow_void_callback");
			this.register_setRevShadow_ev_bool(this.nativeObject.pointer, "setRevShadow_ev_bool_callback");
			this.register_isCastShadow_void(this.nativeObject.pointer, "isCastShadow_void_callback");
			this.register_setCastShadow_ev_bool(this.nativeObject.pointer, "setCastShadow_ev_bool_callback");
			this.register_setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "setEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_getEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "getEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_setMipMap_ev_real64(this.nativeObject.pointer, "setMipMap_ev_real64_callback");
			this.register_getMipMap_void(this.nativeObject.pointer, "getMipMap_void_callback");
			this.register_checkSafeVisibleDistance_ev_real64(this.nativeObject.pointer, "checkSafeVisibleDistance_ev_real64_callback");
			this.register_setVisibleDistance_ev_real64(this.nativeObject.pointer, "setVisibleDistance_ev_real64_callback");
			this.register_getVisibleDistance_void(this.nativeObject.pointer, "getVisibleDistance_void_callback");
			this.register_setUnloadBufferDistance_ev_real64(this.nativeObject.pointer, "setUnloadBufferDistance_ev_real64_callback");
			this.register_getUnloadBufferDistance_void(this.nativeObject.pointer, "getUnloadBufferDistance_void_callback");
			this.register_setAltitudeMode_EVAltitudeMode_ev_real64(this.nativeObject.pointer, "setAltitudeMode_EVAltitudeMode_ev_real64_callback");
			this.register_getAltitudeMode_EVAltitudeMode_ev_real64(this.nativeObject.pointer, "getAltitudeMode_EVAltitudeMode_ev_real64_callback");
			this.register_isAffectByDem_void(this.nativeObject.pointer, "isAffectByDem_void_callback");
			this.register_canEditAltitude_void(this.nativeObject.pointer, "canEditAltitude_void_callback");
			this.register_getAltitude_CModelBaseObject(this.nativeObject.pointer, "getAltitude_CModelBaseObject_callback");
			this.register_getDem_ev_real64_ev_real64(this.nativeObject.pointer, "getDem_ev_real64_ev_real64_callback");
			this.register_getDem_CModelBaseObject(this.nativeObject.pointer, "getDem_CModelBaseObject_callback");
			this.register_refresh_void(this.nativeObject.pointer, "refresh_void_callback");
			this.register_refresh_ev_uint32(this.nativeObject.pointer, "refresh_ev_uint32_callback");
			this.register_refreshPosition_CModelBaseObject(this.nativeObject.pointer, "refreshPosition_CModelBaseObject_callback");
			this.register_select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_loadVisibleObjectNodeAndMergeBoundingBox_void(this.nativeObject.pointer, "loadVisibleObjectNodeAndMergeBoundingBox_void_callback");
			this.register_clearSubEntityVisibility_ev_uint32(this.nativeObject.pointer, "clearSubEntityVisibility_ev_uint32_callback");
			this.register_clearSubEntityVisibility_void(this.nativeObject.pointer, "clearSubEntityVisibility_void_callback");
			this.register_setVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, "setVisibilityFilter_ev_bool_IntVector_callback");
			this.register_setVisibilityFilter_ev_bool_ev_uint32(this.nativeObject.pointer, "setVisibilityFilter_ev_bool_ev_uint32_callback");
			this.register_setVisibilityFilter2_ev_bool_IntVector(this.nativeObject.pointer, "setVisibilityFilter2_ev_bool_IntVector_callback");
			this.register_setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32(this.nativeObject.pointer, "setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback");
			this.register_setSubEntityVisibility_ev_bool_ev_uint32_IntVector(this.nativeObject.pointer, "setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback");
			this.register_getVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, "getVisibilityFilter_ev_bool_IntVector_callback");
			this.register_getVisibilityFilter_ev_uint32(this.nativeObject.pointer, "getVisibilityFilter_ev_uint32_callback");
			this.register_getSubEntityVisibility_ev_uint32_ev_uint32(this.nativeObject.pointer, "getSubEntityVisibility_ev_uint32_ev_uint32_callback");
			this.register_getSubEntityVisibility_ev_uint32_ev_bool_IntVector(this.nativeObject.pointer, "getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback");
			this.register_getVisibleObject_ev_uint32(this.nativeObject.pointer, "getVisibleObject_ev_uint32_callback");
			this.register_getAllObjectIDs_void(this.nativeObject.pointer, "getAllObjectIDs_void_callback");
			this.register_getGotoParam_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getGotoParam_ev_real64_ev_real64_ev_real64_callback");
			this.register_getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback");
			this.register_applyModelEnvMapTexture_ev_uint32(this.nativeObject.pointer, "applyModelEnvMapTexture_ev_uint32_callback");
			this.register_cancelModelEnvMapTexture_ev_uint32(this.nativeObject.pointer, "cancelModelEnvMapTexture_ev_uint32_callback");
			this.register_setMaxEnvMapObjectCount_ev_uint32(this.nativeObject.pointer, "setMaxEnvMapObjectCount_ev_uint32_callback");
			this.register_getMaxEnvMapObjectCount_void(this.nativeObject.pointer, "getMaxEnvMapObjectCount_void_callback");
			this.register_allowApplyEnvMap_void(this.nativeObject.pointer, "allowApplyEnvMap_void_callback");
			this.register_applyEnvMapTexture_void(this.nativeObject.pointer, "applyEnvMapTexture_void_callback");
			this.register_cancelEnvMapTexture_void(this.nativeObject.pointer, "cancelEnvMapTexture_void_callback");
			this.register_stopRender_ev_bool(this.nativeObject.pointer, "stopRender_ev_bool_callback");
			this.register_startRender_void(this.nativeObject.pointer, "startRender_void_callback");
			this.register_isLoadModelNode_void(this.nativeObject.pointer, "isLoadModelNode_void_callback");
			this.register_setLoadModelNode_ev_bool(this.nativeObject.pointer, "setLoadModelNode_ev_bool_callback");
			this.register__notifyModelLoaded_CModelBaseObject(this.nativeObject.pointer, "_notifyModelLoaded_CModelBaseObject_callback");
			this.register__notifyModelUnLoaded_CModelBaseObject(this.nativeObject.pointer, "_notifyModelUnLoaded_CModelBaseObject_callback");
			this.register__notifyModelPreAttach_CModelBaseObject(this.nativeObject.pointer, "_notifyModelPreAttach_CModelBaseObject_callback");
			this.register__notifyModelAttached_CModelBaseObject(this.nativeObject.pointer, "_notifyModelAttached_CModelBaseObject_callback");
			this.register__notifyModelDetached_CModelBaseObject(this.nativeObject.pointer, "_notifyModelDetached_CModelBaseObject_callback");
			this.register_getVisibleObjectPtr_ev_uint32(this.nativeObject.pointer, "getVisibleObjectPtr_ev_uint32_callback");
			this.register_getVisibleObjectPtr_CMovableObject(this.nativeObject.pointer, "getVisibleObjectPtr_CMovableObject_callback");
			this.register_getVisibleObjectPtr_IFeature(this.nativeObject.pointer, "getVisibleObjectPtr_IFeature_callback");
			this.register_createVisibleObjectPtr_IFeature(this.nativeObject.pointer, "createVisibleObjectPtr_IFeature_callback");
			this.register_getSceneName_void(this.nativeObject.pointer, "getSceneName_void_callback");
			this.register_getMinX_void(this.nativeObject.pointer, "getMinX_void_callback");
			this.register_getMaxX_void(this.nativeObject.pointer, "getMaxX_void_callback");
			this.register_getMinY_void(this.nativeObject.pointer, "getMinY_void_callback");
			this.register_getMaxY_void(this.nativeObject.pointer, "getMaxY_void_callback");
			this.register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register__notifyLayerAdd_CSceneManager(this.nativeObject.pointer, "_notifyLayerAdd_CSceneManager_callback");
			this.register__notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, "_notifyLayerRemoved_CSceneManager_callback");
			this.register__notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, "_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
			this.register__notifyRefreshed_CCamera(this.nativeObject.pointer, "_notifyRefreshed_CCamera_callback");
			this.register__notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, "_notifyDataChanged_EVString_EVString_CEvent_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getDatasetName_void(this.nativeObject.pointer, "getDatasetName_void_callback");
			this.register_getDataSource_void(this.nativeObject.pointer, "getDataSource_void_callback");
			this.register_select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, "select_IQueryFilter_EVSelectionResultType_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setLayerSelection_ILayerSelection(this.nativeObject.pointer, "setLayerSelection_ILayerSelection_callback");
			this.register_getLayerSelection_void(this.nativeObject.pointer, "getLayerSelection_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_setCanEdit_ev_bool(this.nativeObject.pointer, "setCanEdit_ev_bool_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_setEditing_ev_bool(this.nativeObject.pointer, "setEditing_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getDisplayMaxScale_void(this.nativeObject.pointer, "getDisplayMaxScale_void_callback");
			this.register_setDisplayMaxScale_ev_real64(this.nativeObject.pointer, "setDisplayMaxScale_ev_real64_callback");
			this.register_getDisplayMinScale_void(this.nativeObject.pointer, "getDisplayMinScale_void_callback");
			this.register_setDisplayMinScale_ev_real64(this.nativeObject.pointer, "setDisplayMinScale_ev_real64_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_setTransparentValue_ev_uint8(this.nativeObject.pointer, "setTransparentValue_ev_uint8_callback");
			this.register_getTransparentValue_void(this.nativeObject.pointer, "getTransparentValue_void_callback");
			this.register_getExtent_void(this.nativeObject.pointer, "getExtent_void_callback");
			this.register_draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, "draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static EntityInstanceLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntityInstanceLayer obj = null;
 		if(baseObj instanceof EntityInstanceLayer)
		{
			obj = (EntityInstanceLayer)baseObj;
		} else {
			obj = new EntityInstanceLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntityInstanceLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
