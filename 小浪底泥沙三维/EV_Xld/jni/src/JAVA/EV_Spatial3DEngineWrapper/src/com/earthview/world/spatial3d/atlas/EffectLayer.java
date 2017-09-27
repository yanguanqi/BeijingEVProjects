package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效图层
 */
public class EffectLayer extends com.earthview.world.spatial3d.atlas.I3DLayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CEffectLayer", new EffectLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCEffectLayerProxy", new EffectLayerClassFactory());
	}

	native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置图层里的选择对象的颜色
	 * @param colour 颜色
	 */
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getSelectionColour_void(long pNativeObject);
	/**
	 * 获得图层里所有选择对象的颜色
	 * @param  
	 * @return 颜色
	 */
	public com.earthview.world.graphic.ColourValue getSelectionColour()
	{
		long returnValue = getSelectionColour_void(this.nativeObject.pointer);
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
	native private long getAmbient_void(long pNativeObject);
	/**
	 * 获取材质的环境光
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getAmbient()
	{
		long returnValue = getAmbient_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setAmbient_CColourValue(long pNativeObject, long val);
	/**
	 * 设置材质的环境光
	 * @param val 环境光颜色
	 */
	public void setAmbient(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAmbient_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private long getDiffuse_void(long pNativeObject);
	/**
	 * 获取材质的漫反射光
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getDiffuse()
	{
		long returnValue = getDiffuse_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setDiffuse_CColourValue(long pNativeObject, long val);
	/**
	 * 设置材质的漫反射光
	 * @param val 漫反射光颜色
	 */
	public void setDiffuse(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setDiffuse_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private long getSpecular_void(long pNativeObject);
	/**
	 * 获取材质的镜面反射光
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getSpecular()
	{
		long returnValue = getSpecular_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setSpecular_CColourValue(long pNativeObject, long val);
	/**
	 * 设置材质的镜面反射光
	 * @param val 镜面反射光颜色
	 */
	public void setSpecular(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setSpecular_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private boolean getLightEnable_void(long pNativeObject);
	/**
	 * 查看光照是否开启
	 * @param  
	 */
	public boolean getLightEnable()
	{
		boolean returnValue = getLightEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLightEnable_ev_bool(long pNativeObject, boolean val);
	/**
	 * 设置是否开启光照
	 * @param  
	 */
	public void setLightEnable(boolean val)
	{
		boolean valParamValue = val;
		setLightEnable_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private void setLayerSelection_ILayerSelection(long pNativeObject, long selection);
	/**
	 * 设置图层高亮选择集
	 * @param selection 图层选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		long selectionParamValue = (selection == null ? 0L : selection.nativeObject.pointer);
		setLayerSelection_ILayerSelection(this.nativeObject.pointer, selectionParamValue);
	}
	native private void setLayerSelection_ILayerSelection_NoVirtual(long pNativeObject, long selection);
	protected void setLayerSelection_NoVirtual(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		long selectionParamValue = (selection == null ? 0L : selection.nativeObject.pointer);
		setLayerSelection_ILayerSelection_NoVirtual(this.nativeObject.pointer, selectionParamValue);
	}

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 图层sql查询
	 * @param filter 选择过滤条件
	 * @param type 选择类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}
	native private void select_IQueryFilter_EVSelectionResultType_NoVirtual(long pNativeObject, long filter, int type);
	protected void select_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType_NoVirtual(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清空图层选择
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

	native private long getLayerSelection_void(long pNativeObject);
	/**
	 * 获取图层选择集
	 * @param  
	 * @return 图层选择集
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		long returnValue = getLayerSelection_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}
	native private long getLayerSelection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection_NoVirtual()
	{
		long returnValue = getLayerSelection_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}

	protected  void refresh_void_callback()
	{
		refresh();
	}

	native private void refresh_void(long pNativeObject);
	/**
	 * 刷新图层
	 * @param  
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private void refresh_void_NoVirtual(long pNativeObject);
	protected void refresh_NoVirtual()
	{
		refresh_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getVisibleObjectPtrVector_void(long pNativeObject);
	/**
	 * 获取可见对象列表
	 * @param  
	 * @return EarthView::World::Spatial3D::VisibleObjects，可见物体列表容器
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtrVector getVisibleObjectPtrVector()
	{
		long returnValue = getVisibleObjectPtrVector_void(this.nativeObject.pointer);
		com.earthview.world.geometry3d.VisibleObjectPtrVector __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtrVector(CreatedWhenConstruct.CWC_NotToCreate, "VisibleObjectPtrVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtrVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VisibleObjectPtrVector");
		}
		return __returnValue;
	}
	native private long getVisibleObjectPtr_ev_uint32(long pNativeObject, long id);
	/**
	 * 根据featureid来取得对象
	 * @param id 对象标示符
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr(long id)
	{
		long idParamValue = id;
		long returnValue = getVisibleObjectPtr_ev_uint32(this.nativeObject.pointer, idParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}
	native private long getVisibleObjectPtr_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr_NoVirtual(long id)
	{
		long idParamValue = id;
		long returnValue = getVisibleObjectPtr_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}

	native private long getVisibleObjectPtr_CMovableObject(long pNativeObject, long pMovableObj);
	/**
	 * 通过可移动对象查询VisibleObject
	 * @param pMovableObj 可移动对象
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr(com.earthview.world.graphic.MovableObject pMovableObj)
	{
		long pMovableObjParamValue = (pMovableObj == null ? 0L : pMovableObj.nativeObject.pointer);
		long returnValue = getVisibleObjectPtr_CMovableObject(this.nativeObject.pointer, pMovableObjParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}
	native private long getVisibleObjectPtr_CMovableObject_NoVirtual(long pNativeObject, long pMovableObj);
	protected com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr_NoVirtual(com.earthview.world.graphic.MovableObject pMovableObj)
	{
		long pMovableObjParamValue = (pMovableObj == null ? 0L : pMovableObj.nativeObject.pointer);
		long returnValue = getVisibleObjectPtr_CMovableObject_NoVirtual(this.nativeObject.pointer, pMovableObjParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}

	native private long getVisibleObjectPtr_IFeature(long pNativeObject, long f);
	/**
	 * 根据要素获取对象，对象已存在图层中
	 * @param f 要素
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr(com.earthview.world.spatial.geodataset.Ifeature f)
	{
		long fParamValue = (f == null ? 0L : f.nativeObject.pointer);
		long returnValue = getVisibleObjectPtr_IFeature(this.nativeObject.pointer, fParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}
	native private long getVisibleObjectPtr_IFeature_NoVirtual(long pNativeObject, long f);
	protected com.earthview.world.geometry3d.VisibleObjectPtr getVisibleObjectPtr_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature f)
	{
		long fParamValue = (f == null ? 0L : f.nativeObject.pointer);
		long returnValue = getVisibleObjectPtr_IFeature_NoVirtual(this.nativeObject.pointer, fParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}

	protected  void setLayerVisibleDistance_ev_real32_callback(float distance)
	{
		float distanceParamValue = distance;
		setLayerVisibleDistance(distanceParamValue);
	}

	native private void setLayerVisibleDistance_ev_real32(long pNativeObject, float distance);
	/**
	 * 设置图层可见距离
	 * @param distance 距离值
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public void setLayerVisibleDistance(float distance)
	{
		float distanceParamValue = distance;
		setLayerVisibleDistance_ev_real32(this.nativeObject.pointer, distanceParamValue);
	}
	native private void setLayerVisibleDistance_ev_real32_NoVirtual(long pNativeObject, float distance);
	protected void setLayerVisibleDistance_NoVirtual(float distance)
	{
		float distanceParamValue = distance;
		setLayerVisibleDistance_ev_real32_NoVirtual(this.nativeObject.pointer, distanceParamValue);
	}

	protected  float getLayerVisibleDistance_void_callback()
	{
		float returnValue = getLayerVisibleDistance();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getLayerVisibleDistance_void(long pNativeObject);
	/**
	 * 获取图层可见距离
	 * @param  
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public float getLayerVisibleDistance()
	{
		float returnValue = getLayerVisibleDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getLayerVisibleDistance_void_NoVirtual(long pNativeObject);
	protected float getLayerVisibleDistance_NoVirtual()
	{
		float returnValue = getLayerVisibleDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAltitudeMode_EVAltitudeMode_ev_real32_callback(int altitudeMode, float altitudeValue)
	{
		com.earthview.world.spatial.utility.EVAltitudeMode altitudeModeParamValue = com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(altitudeMode);
		float altitudeValueParamValue = altitudeValue;
		setAltitudeMode(altitudeModeParamValue, altitudeValueParamValue);
	}

	native private void setAltitudeMode_EVAltitudeMode_ev_real32(long pNativeObject, int altitudeMode, float altitudeValue);
	/**
	 * 设置图层高度模式
	 * @param altitudeMode 高度模式
	 * @param altitudeValue 高度值
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public void setAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, float altitudeValue)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		float altitudeValueParamValue = altitudeValue;
		setAltitudeMode_EVAltitudeMode_ev_real32(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}
	native private void setAltitudeMode_EVAltitudeMode_ev_real32_NoVirtual(long pNativeObject, int altitudeMode, float altitudeValue);
	protected void setAltitudeMode_NoVirtual(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, float altitudeValue)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		float altitudeValueParamValue = altitudeValue;
		setAltitudeMode_EVAltitudeMode_ev_real32_NoVirtual(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}

	protected  void getAltitudeMode_ev_int32_ev_real32_callback(long altitudeMode, long altitudeValue)
	{
		IntegerPointer altitudeModeParamValue = new IntegerPointer(new InstancePointer(altitudeMode));
		FloatPointer altitudeValueParamValue = new FloatPointer(new InstancePointer(altitudeValue));
		getAltitudeMode(altitudeModeParamValue, altitudeValueParamValue);
	}

	native private void getAltitudeMode_ev_int32_ev_real32(long pNativeObject, long altitudeMode, long altitudeValue);
	/**
	 * 获取图层高度模式
	 * @param  
	 * @param altitudeMode 高度模式
	 * @param altitudeValue 高度值
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public void getAltitudeMode(IntegerPointer altitudeMode, FloatPointer altitudeValue)
	{
		long altitudeModeParamValue = altitudeMode.nativeObject.pointer;
		long altitudeValueParamValue = altitudeValue.nativeObject.pointer;
		getAltitudeMode_ev_int32_ev_real32(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}
	native private void getAltitudeMode_ev_int32_ev_real32_NoVirtual(long pNativeObject, long altitudeMode, long altitudeValue);
	protected void getAltitudeMode_NoVirtual(IntegerPointer altitudeMode, FloatPointer altitudeValue)
	{
		long altitudeModeParamValue = altitudeMode.nativeObject.pointer;
		long altitudeValueParamValue = altitudeValue.nativeObject.pointer;
		getAltitudeMode_ev_int32_ev_real32_NoVirtual(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}

	native private long createVisibleObjectPtr_IFeature(long pNativeObject, long f);
	/**
	 * 根据要素创建特效对象，插入到图层中
	 * @param f 要素
	 */
	public com.earthview.world.geometry3d.VisibleObjectPtr createVisibleObjectPtr(com.earthview.world.spatial.geodataset.Ifeature f)
	{
		long fParamValue = (f == null ? 0L : f.nativeObject.pointer);
		long returnValue = createVisibleObjectPtr_IFeature(this.nativeObject.pointer, fParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}
	native private long createVisibleObjectPtr_IFeature_NoVirtual(long pNativeObject, long f);
	protected com.earthview.world.geometry3d.VisibleObjectPtr createVisibleObjectPtr_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature f)
	{
		long fParamValue = (f == null ? 0L : f.nativeObject.pointer);
		long returnValue = createVisibleObjectPtr_IFeature_NoVirtual(this.nativeObject.pointer, fParamValue);
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}

	native private boolean removeVisibleObject_ev_uint32(long pNativeObject, long id);
	/**
	 * 移除对象
	 * @param id 对象标示符EVID
	 */
	public boolean removeVisibleObject(long id)
	{
		long idParamValue = id;
		boolean returnValue = removeVisibleObject_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private long getSceneManager_void(long pNativeObject);
	/**
	 * 获取场景管理器
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private long getSceneManager_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneManager getSceneManager_NoVirtual()
	{
		long returnValue = getSceneManager_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}

	native private long getEffectDataset_void(long pNativeObject);
	/**
	 * 获取特效数据集
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CEffectDataSet*,特效数据集指针
	 */
	public com.earthview.world.spatial3d.dataset.EffectDataSet getEffectDataset()
	{
		long returnValue = getEffectDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.EffectDataSet __returnValue = new com.earthview.world.spatial3d.dataset.EffectDataSet(CreatedWhenConstruct.CWC_NotToCreate, "CEffectDataSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectDataSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectDataSet");
		}
		return __returnValue;
	}
	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取数据集
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IDataset*,数据集指针
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long getDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual()
	{
		long returnValue = getDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取图层名称
	 * @param  
	 * @return EVString,图层名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置图层名称
	 * @param name 图层名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取描述信息
	 * @param  
	 * @return EVString,描述信息
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDescription_EVString(long pNativeObject, String value);
	/**
	 * 设置描述信息
	 * @param value 描述信息
	 */
	public void setDescription(String value)
	{
		String valueParamValue = value;
		setDescription_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String value);
	protected void setDescription_NoVirtual(String value)
	{
		String valueParamValue = value;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制函数
	 * @param  
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

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取是否可见
	 * @param  
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置可见性
	 * @param visible TRUE/FALSE
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 获取是否可编辑
	 * @param  
	 */
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setCanEdit_ev_bool(long pNativeObject, boolean can);
	/**
	 * 设置是否可编辑
	 * @param can TRUE/FALSE
	 */
	public void setCanEdit(boolean can)
	{
		boolean canParamValue = can;
		setCanEdit_ev_bool(this.nativeObject.pointer, canParamValue);
	}
	native private void setCanEdit_ev_bool_NoVirtual(long pNativeObject, boolean can);
	protected void setCanEdit_NoVirtual(boolean can)
	{
		boolean canParamValue = can;
		setCanEdit_ev_bool_NoVirtual(this.nativeObject.pointer, canParamValue);
	}

	native private boolean isEditing_void(long pNativeObject);
	/**
	 * 判断是否正在编辑
	 * @param  
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setEditing_ev_bool(long pNativeObject, boolean editing);
	/**
	 * 设置编辑状态
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

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断是否为有效的图层
	 * @param  
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

	native private boolean isSelectable_void(long pNativeObject);
	/**
	 * 是否可选择
	 * @param  
	 */
	public boolean isSelectable()
	{
		boolean returnValue = isSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectable_void_NoVirtual(long pNativeObject);
	protected boolean isSelectable_NoVirtual()
	{
		boolean returnValue = isSelectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	/**
	 * 设置是否可以选中
	 * @param selectable 是否可被选中
	 */
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selectable);
	protected void setSelectable_NoVirtual(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectableParamValue);
	}

	native private String getSceneName_void(long pNativeObject);
	/**
	 * 获取场景名称
	 * @param  
	 */
	public String getSceneName()
	{
		String returnValue = getSceneName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSceneName_void_NoVirtual(long pNativeObject);
	protected String getSceneName_NoVirtual()
	{
		String returnValue = getSceneName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层的类型
	 * @param  
	 * @return 图层的类型
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

	protected  long getEnvelop_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getEnvelop();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEnvelop_void(long pNativeObject);
	/**
	 * 获取图层包围盒
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelop()
	{
		long returnValue = getEnvelop_void(this.nativeObject.pointer);
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
	native private long getEnvelop_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelop_NoVirtual()
	{
		long returnValue = getEnvelop_void_NoVirtual(this.nativeObject.pointer);
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML文件中读入数据
	 * @param element Xml元素
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
	 * 转化为XML格式
	 * @param  
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化为XML格式
	 * @param  
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 图层信息序列化成流
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

	native private void _notifyLayerAdd_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * Globe加载一个图层之后通知图层已被添加
	 * @param pSceneMgr 场景管理器
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerAdd_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerAdd_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void _notifyLayerRemoved_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * Globe卸载一个图层之后通知图层已被移除
	 * @param pSceneMgr 场景管理器
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerRemoved_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerRemoved_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void _notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, long camera, int updateType);
	/**
	 * Globe刷新时通知图层刷新
	 * @param camera 当前的相机
	 * @param updateType 刷新类型
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}
	native private void _notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(long pNativeObject, long camera, int updateType);
	protected void _notifyRefreshed_NoVirtual(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}

	native private boolean setVisibilityFilter_ev_bool_IntVector(long pNativeObject, boolean visible, long ids);
	/**
	 * 设置对象可见性条件
	 * @param visible 是否可见
	 * @param ids id集合
	 * @return ev_bool,全部设置成功返回TRUE,未全部设置成功返回FALSE
	 */
	public boolean setVisibilityFilter(boolean visible, com.earthview.world.core.IntVector ids)
	{
		boolean visibleParamValue = visible;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = setVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}
	native private boolean getVisibilityFilter_ev_bool_IntVector(long pNativeObject, long visible, long ids);
	/**
	 * 获取对象可见性条件
	 * @param visible 是否可见
	 * @param ids id集合
	 * @return ev_bool,获取成功返回TRUE,失败返回FALSE
	 */
	public boolean getVisibilityFilter(BooleanPointer visible, com.earthview.world.core.IntVector ids)
	{
		long visibleParamValue = visible.nativeObject.pointer;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = getVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}
	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 读入数据流
	 * @param stream 数据流
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public EffectLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_refresh_void(long pNativeObject, String method);
	native protected void register_setLayerVisibleDistance_ev_real32(long pNativeObject, String method);
	native protected void register_getLayerVisibleDistance_void(long pNativeObject, String method);
	native protected void register_setAltitudeMode_EVAltitudeMode_ev_real32(long pNativeObject, String method);
	native protected void register_getAltitudeMode_ev_int32_ev_real32(long pNativeObject, String method);
	native protected void register_getEnvelop_void(long pNativeObject, String method);
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
			this.register_refresh_void(this.nativeObject.pointer, "refresh_void_callback");
			this.register_setLayerVisibleDistance_ev_real32(this.nativeObject.pointer, "setLayerVisibleDistance_ev_real32_callback");
			this.register_getLayerVisibleDistance_void(this.nativeObject.pointer, "getLayerVisibleDistance_void_callback");
			this.register_setAltitudeMode_EVAltitudeMode_ev_real32(this.nativeObject.pointer, "setAltitudeMode_EVAltitudeMode_ev_real32_callback");
			this.register_getAltitudeMode_ev_int32_ev_real32(this.nativeObject.pointer, "getAltitudeMode_ev_int32_ev_real32_callback");
			this.register_getEnvelop_void(this.nativeObject.pointer, "getEnvelop_void_callback");
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
	
	public static EffectLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectLayer obj = null;
 		if(baseObj instanceof EffectLayer)
		{
			obj = (EffectLayer)baseObj;
		} else {
			obj = new EffectLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
