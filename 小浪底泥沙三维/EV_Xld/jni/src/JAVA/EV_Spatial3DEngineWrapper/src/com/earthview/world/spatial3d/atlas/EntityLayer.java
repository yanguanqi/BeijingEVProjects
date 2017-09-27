package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
public class EntityLayer extends com.earthview.world.spatial3d.atlas.I3DLayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CEntityLayer", new EntityLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCEntityLayerProxy", new EntityLayerClassFactory());
	}

	public static final class SubEntityState extends RemoteNativeObject {
	
		public SubEntityState(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public SubEntityState(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public SubEntityState() {
			super(new InstancePointer(Create()),false);
		}
		native private boolean get_Visible_void(long pNativeObject);
		public boolean get_Visible()
		{
			boolean jniValue = get_Visible_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_Visible_ev_bool (long pNativeObject, boolean value);
		public void set_Visible(boolean Visible)
		{
			boolean VisibleParamValue = Visible;
			
			set_Visible_ev_bool(this.nativeObject.pointer, VisibleParamValue);
		}
		
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 
	 * @param  
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

	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取数据集
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 图层克隆
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

	protected  boolean hasVisibleObject_void_callback()
	{
		boolean returnValue = hasVisibleObject();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasVisibleObject_void(long pNativeObject);
	/**
	 * 前一帧是否有可见模型
	 */
	public boolean hasVisibleObject()
	{
		boolean returnValue = hasVisibleObject_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasVisibleObject_void_NoVirtual(long pNativeObject);
	protected boolean hasVisibleObject_NoVirtual()
	{
		boolean returnValue = hasVisibleObject_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 图层是否可编辑
	 * @return 可编辑返回true，不可编辑返回false
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
	 * @param can true可编辑，false不可编辑
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
	 * 图层是否正在编辑
	 * @return 正在编辑返回true，没有编辑返回false
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
	 * 设置图层编辑状态
	 * @param editing true设置在编辑，false设置没有编辑
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

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 图层可见状态
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
	 * 设置图层可见状态
	 * @param visible true可见，false不可见
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

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 图层合法状态
	 * @return 合法返回true，不合法返回false
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

	protected  long getAABBox_void_callback()
	{
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getAABBox();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAABBox_void(long pNativeObject);
	/**
	 * 获取包围盒
	 * @return 包围盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getAABBox()
	{
		long returnValue = getAABBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getAABBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getAABBox_NoVirtual()
	{
		long returnValue = getAABBox_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	native private boolean isSelectable_void(long pNativeObject);
	/**
	 * 图层是否被选择
	 * @return 被选择返回true，否则返回false
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
	 * 设置图层选择状态
	 * @param selectable true被选择，false没有被选择
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

	protected  void setSelectionColour_CColourValue_callback(long colour)
	{
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		setSelectionColour(colourParamValue);
	}

	native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置选择时的颜色
	 * @param color 设置的颜色
	 */
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

	protected  long getSelectionColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getSelectionColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSelectionColour_void(long pNativeObject);
	/**
	 * 获取选择时的颜色
	 * @return EarthView::World::Graphic::CColourValue
	 */
	public com.earthview.world.graphic.ColourValue getSelectionColour()
	{
		long returnValue = getSelectionColour_void(this.nativeObject.pointer);
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
	native private long getSelectionColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getSelectionColour_NoVirtual()
	{
		long returnValue = getSelectionColour_void_NoVirtual(this.nativeObject.pointer);
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

	native private short getTransparentValue_void(long pNativeObject);
	/**
	 * 返回图层透明度
	 * @param  
	 * @return 百分比[0,100]
	 */
	public short getTransparentValue()
	{
		short returnValue = getTransparentValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getTransparentValue_void_NoVirtual(long pNativeObject);
	protected short getTransparentValue_NoVirtual()
	{
		short returnValue = getTransparentValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setTransparentValue_ev_uint8(long pNativeObject, short transparent);
	/**
	 * 设置图层透明度
	 * @param transparent 百分比[0,100]
	 */
	public void setTransparentValue(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparentValue_ev_uint8(this.nativeObject.pointer, transparentParamValue);
	}
	native private void setTransparentValue_ev_uint8_NoVirtual(long pNativeObject, short transparent);
	protected void setTransparentValue_NoVirtual(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparentValue_ev_uint8_NoVirtual(this.nativeObject.pointer, transparentParamValue);
	}

	protected  boolean isRevShadow_void_callback()
	{
		boolean returnValue = isRevShadow();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isRevShadow_void(long pNativeObject);
	/**
	 * 是否接收阴影
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isRevShadow()
	{
		boolean returnValue = isRevShadow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isRevShadow_void_NoVirtual(long pNativeObject);
	protected boolean isRevShadow_NoVirtual()
	{
		boolean returnValue = isRevShadow_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRevShadow_ev_bool_callback(boolean revShadow)
	{
		boolean revShadowParamValue = revShadow;
		setRevShadow(revShadowParamValue);
	}

	native private void setRevShadow_ev_bool(long pNativeObject, boolean revShadow);
	/**
	 * 设置接收阴影
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public void setRevShadow(boolean revShadow)
	{
		boolean revShadowParamValue = revShadow;
		setRevShadow_ev_bool(this.nativeObject.pointer, revShadowParamValue);
	}
	native private void setRevShadow_ev_bool_NoVirtual(long pNativeObject, boolean revShadow);
	protected void setRevShadow_NoVirtual(boolean revShadow)
	{
		boolean revShadowParamValue = revShadow;
		setRevShadow_ev_bool_NoVirtual(this.nativeObject.pointer, revShadowParamValue);
	}

	protected  boolean isCastShadow_void_callback()
	{
		boolean returnValue = isCastShadow();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCastShadow_void(long pNativeObject);
	/**
	 * 是否投射阴影
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isCastShadow()
	{
		boolean returnValue = isCastShadow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCastShadow_void_NoVirtual(long pNativeObject);
	protected boolean isCastShadow_NoVirtual()
	{
		boolean returnValue = isCastShadow_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCastShadow_ev_bool_callback(boolean castShadow)
	{
		boolean castShadowParamValue = castShadow;
		setCastShadow(castShadowParamValue);
	}

	native private void setCastShadow_ev_bool(long pNativeObject, boolean castShadow);
	/**
	 * 设置投射阴影
	 */
	public void setCastShadow(boolean castShadow)
	{
		boolean castShadowParamValue = castShadow;
		setCastShadow_ev_bool(this.nativeObject.pointer, castShadowParamValue);
	}
	native private void setCastShadow_ev_bool_NoVirtual(long pNativeObject, boolean castShadow);
	protected void setCastShadow_NoVirtual(boolean castShadow)
	{
		boolean castShadowParamValue = castShadow;
		setCastShadow_ev_bool_NoVirtual(this.nativeObject.pointer, castShadowParamValue);
	}

	protected  void setEnvParam_CColourValue_CColourValue_CColourValue_callback(long ambient, long diffuse, long specular)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		com.earthview.world.graphic.ColourValue diffuseParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		diffuseParamValue.setDelegate(true);
		diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		IClassFactory diffuseParamValueClassFactory = GlobalClassFactoryMap.get(diffuseParamValue.getCppInstanceTypeName());
		if (diffuseParamValueClassFactory != null)
		{
			diffuseParamValue.setDelegate(true);
			diffuseParamValue = (com.earthview.world.graphic.ColourValue)diffuseParamValueClassFactory.create();
			diffuseParamValue.setDelegate(true);
			diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		}
		com.earthview.world.graphic.ColourValue specularParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		specularParamValue.setDelegate(true);
		specularParamValue.setInstancePointer(new InstancePointer(specular));
		IClassFactory specularParamValueClassFactory = GlobalClassFactoryMap.get(specularParamValue.getCppInstanceTypeName());
		if (specularParamValueClassFactory != null)
		{
			specularParamValue.setDelegate(true);
			specularParamValue = (com.earthview.world.graphic.ColourValue)specularParamValueClassFactory.create();
			specularParamValue.setDelegate(true);
			specularParamValue.setInstancePointer(new InstancePointer(specular));
		}
		setEnvParam(ambientParamValue, diffuseParamValue, specularParamValue);
	}

	native private void setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, long ambient, long diffuse, long specular);
	/**
	 * 设置某个图层反射光系数增益
	 * @param ambient 环境光增益
	 * @param diffuse 漫反射增益
	 * @param specular 镜面反射增益
	 */
	public void setEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}
	native private void setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular);
	protected void setEnvParam_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}

	protected  void getEnvParam_CColourValue_CColourValue_CColourValue_callback(long ambient, long diffuse, long specular)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		com.earthview.world.graphic.ColourValue diffuseParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		diffuseParamValue.setDelegate(true);
		diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		IClassFactory diffuseParamValueClassFactory = GlobalClassFactoryMap.get(diffuseParamValue.getCppInstanceTypeName());
		if (diffuseParamValueClassFactory != null)
		{
			diffuseParamValue.setDelegate(true);
			diffuseParamValue = (com.earthview.world.graphic.ColourValue)diffuseParamValueClassFactory.create();
			diffuseParamValue.setDelegate(true);
			diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		}
		com.earthview.world.graphic.ColourValue specularParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		specularParamValue.setDelegate(true);
		specularParamValue.setInstancePointer(new InstancePointer(specular));
		IClassFactory specularParamValueClassFactory = GlobalClassFactoryMap.get(specularParamValue.getCppInstanceTypeName());
		if (specularParamValueClassFactory != null)
		{
			specularParamValue.setDelegate(true);
			specularParamValue = (com.earthview.world.graphic.ColourValue)specularParamValueClassFactory.create();
			specularParamValue.setDelegate(true);
			specularParamValue.setInstancePointer(new InstancePointer(specular));
		}
		getEnvParam(ambientParamValue, diffuseParamValue, specularParamValue);
	}

	native private void getEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, long ambient, long diffuse, long specular);
	/**
	 * 获取图层反射光系数增益
	 * @return ambient环境光增益，diffuse漫反射增益，specular镜面反射增益
	 */
	public void getEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		getEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}
	native private void getEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular);
	protected void getEnvParam_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		getEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}

	protected  void setMipMap_ev_real64_callback(double modelMipMap)
	{
		double modelMipMapParamValue = modelMipMap;
		setMipMap(modelMipMapParamValue);
	}

	native private void setMipMap_ev_real64(long pNativeObject, double modelMipMap);
	/**
	 * 设置图层mipmap参数，调用以前要停止图层工作
	 * @param modelMipMap mipmap参数
	 */
	public void setMipMap(double modelMipMap)
	{
		double modelMipMapParamValue = modelMipMap;
		setMipMap_ev_real64(this.nativeObject.pointer, modelMipMapParamValue);
	}
	native private void setMipMap_ev_real64_NoVirtual(long pNativeObject, double modelMipMap);
	protected void setMipMap_NoVirtual(double modelMipMap)
	{
		double modelMipMapParamValue = modelMipMap;
		setMipMap_ev_real64_NoVirtual(this.nativeObject.pointer, modelMipMapParamValue);
	}

	protected  double getMipMap_void_callback()
	{
		double returnValue = getMipMap();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMipMap_void(long pNativeObject);
	/**
	 * 获取图层mipmap参数
	 * @return mipmap参数
	 */
	public double getMipMap()
	{
		double returnValue = getMipMap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMipMap_void_NoVirtual(long pNativeObject);
	protected double getMipMap_NoVirtual()
	{
		double returnValue = getMipMap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean checkSafeVisibleDistance_ev_real64_callback(double distance)
	{
		double distanceParamValue = distance;
		boolean returnValue = checkSafeVisibleDistance(distanceParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean checkSafeVisibleDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 获取图层安全的可见距离
	 * @return mipmap参数
	 */
	public boolean checkSafeVisibleDistance(double distance)
	{
		double distanceParamValue = distance;
		boolean returnValue = checkSafeVisibleDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
		return returnValue;
	}
	native private boolean checkSafeVisibleDistance_ev_real64_NoVirtual(long pNativeObject, double distance);
	protected boolean checkSafeVisibleDistance_NoVirtual(double distance)
	{
		double distanceParamValue = distance;
		boolean returnValue = checkSafeVisibleDistance_ev_real64_NoVirtual(this.nativeObject.pointer, distanceParamValue);
		return returnValue;
	}

	protected  void setVisibleDistance_ev_real64_callback(double distance)
	{
		double distanceParamValue = distance;
		setVisibleDistance(distanceParamValue);
	}

	native private void setVisibleDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 设置图层可见距离
	 * @param distance 可见距离
	 */
	public void setVisibleDistance(double distance)
	{
		double distanceParamValue = distance;
		setVisibleDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private void setVisibleDistance_ev_real64_NoVirtual(long pNativeObject, double distance);
	protected void setVisibleDistance_NoVirtual(double distance)
	{
		double distanceParamValue = distance;
		setVisibleDistance_ev_real64_NoVirtual(this.nativeObject.pointer, distanceParamValue);
	}

	protected  double getVisibleDistance_void_callback()
	{
		double returnValue = getVisibleDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getVisibleDistance_void(long pNativeObject);
	/**
	 * 获取图层可见距离
	 * @return 可见距离
	 */
	public double getVisibleDistance()
	{
		double returnValue = getVisibleDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getVisibleDistance_void_NoVirtual(long pNativeObject);
	protected double getVisibleDistance_NoVirtual()
	{
		double returnValue = getVisibleDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setUnloadBufferDistance_ev_real64_callback(double distance)
	{
		double distanceParamValue = distance;
		setUnloadBufferDistance(distanceParamValue);
	}

	native private void setUnloadBufferDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 设置对象卸载时的缓冲距离
	 * @param distance 可见距离
	 */
	public void setUnloadBufferDistance(double distance)
	{
		double distanceParamValue = distance;
		setUnloadBufferDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private void setUnloadBufferDistance_ev_real64_NoVirtual(long pNativeObject, double distance);
	protected void setUnloadBufferDistance_NoVirtual(double distance)
	{
		double distanceParamValue = distance;
		setUnloadBufferDistance_ev_real64_NoVirtual(this.nativeObject.pointer, distanceParamValue);
	}

	protected  double getUnloadBufferDistance_void_callback()
	{
		double returnValue = getUnloadBufferDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getUnloadBufferDistance_void(long pNativeObject);
	/**
	 * 获取对象卸载时的缓冲距离
	 * @return 可见距离
	 */
	public double getUnloadBufferDistance()
	{
		double returnValue = getUnloadBufferDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getUnloadBufferDistance_void_NoVirtual(long pNativeObject);
	protected double getUnloadBufferDistance_NoVirtual()
	{
		double returnValue = getUnloadBufferDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAltitudeMode_EVAltitudeMode_ev_real64_callback(int altitudeMode, double altitudeValue)
	{
		com.earthview.world.spatial.utility.EVAltitudeMode altitudeModeParamValue = com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(altitudeMode);
		double altitudeValueParamValue = altitudeValue;
		setAltitudeMode(altitudeModeParamValue, altitudeValueParamValue);
	}

	native private void setAltitudeMode_EVAltitudeMode_ev_real64(long pNativeObject, int altitudeMode, double altitudeValue);
	/**
	 * 设置高度模式
	 * @param altitudeMode 高度模式
	 * @param altitudeValue 高度值
	 */
	public void setAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeValue)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		double altitudeValueParamValue = altitudeValue;
		setAltitudeMode_EVAltitudeMode_ev_real64(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}
	native private void setAltitudeMode_EVAltitudeMode_ev_real64_NoVirtual(long pNativeObject, int altitudeMode, double altitudeValue);
	protected void setAltitudeMode_NoVirtual(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeValue)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		double altitudeValueParamValue = altitudeValue;
		setAltitudeMode_EVAltitudeMode_ev_real64_NoVirtual(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}

	protected  void getAltitudeMode_EVAltitudeMode_ev_real64_callback(long altitudeMode, long altitudeValue)
	{
		EnumPointer altitudeModeParamValue = new EnumPointer(new InstancePointer(altitudeMode));
		DoublePointer altitudeValueParamValue = new DoublePointer(new InstancePointer(altitudeValue));
		getAltitudeMode(altitudeModeParamValue, altitudeValueParamValue);
	}

	native private void getAltitudeMode_EVAltitudeMode_ev_real64(long pNativeObject, long altitudeMode, long altitudeValue);
	/**
	 * 获取高度模式
	 * @return altitudeMode高度模式，altitudeValue高度值
	 */
	public void getAltitudeMode(EnumPointer altitudeMode, DoublePointer altitudeValue)
	{
		long altitudeModeParamValue = altitudeMode.nativeObject.pointer;
		long altitudeValueParamValue = altitudeValue.nativeObject.pointer;
		getAltitudeMode_EVAltitudeMode_ev_real64(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}
	native private void getAltitudeMode_EVAltitudeMode_ev_real64_NoVirtual(long pNativeObject, long altitudeMode, long altitudeValue);
	protected void getAltitudeMode_NoVirtual(EnumPointer altitudeMode, DoublePointer altitudeValue)
	{
		long altitudeModeParamValue = altitudeMode.nativeObject.pointer;
		long altitudeValueParamValue = altitudeValue.nativeObject.pointer;
		getAltitudeMode_EVAltitudeMode_ev_real64_NoVirtual(this.nativeObject.pointer, altitudeModeParamValue, altitudeValueParamValue);
	}

	protected  boolean isAffectByDem_void_callback()
	{
		boolean returnValue = isAffectByDem();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isAffectByDem_void(long pNativeObject);
	/**
	 * 当前高度模式是否代被dem影响
	 */
	public boolean isAffectByDem()
	{
		boolean returnValue = isAffectByDem_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAffectByDem_void_NoVirtual(long pNativeObject);
	protected boolean isAffectByDem_NoVirtual()
	{
		boolean returnValue = isAffectByDem_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canEditAltitude_void_callback()
	{
		boolean returnValue = canEditAltitude();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canEditAltitude_void(long pNativeObject);
	/**
	 * 当前高度模式是否能编辑模型高度
	 */
	public boolean canEditAltitude()
	{
		boolean returnValue = canEditAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEditAltitude_void_NoVirtual(long pNativeObject);
	protected boolean canEditAltitude_NoVirtual()
	{
		boolean returnValue = canEditAltitude_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getAltitude_CModelBaseObject_callback(long pModel)
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
		double returnValue = getAltitude(pModelParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAltitude_CModelBaseObject(long pNativeObject, long pModel);
	/**
	 * 获取模型的海拔
	 * @param pModel 获取模型的海拔
	 */
	public double getAltitude(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		double returnValue = getAltitude_CModelBaseObject(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}
	native private double getAltitude_CModelBaseObject_NoVirtual(long pNativeObject, long pModel);
	protected double getAltitude_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		double returnValue = getAltitude_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}

	protected  double getDem_ev_real64_ev_real64_callback(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getDem(latitudeParamValue, longitudeParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getDem_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude);
	/**
	 * 获取dem
	 * @param latitude 纬度
	 * @param longitude 经度
	 */
	public double getDem(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getDem_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}
	native private double getDem_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude);
	protected double getDem_NoVirtual(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getDem_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}

	protected  double getDem_CModelBaseObject_callback(long pModel)
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
		double returnValue = getDem(pModelParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getDem_CModelBaseObject(long pNativeObject, long pModel);
	/**
	 * 获取模型中心点对应的高程
	 * @param pModel 获取模型中心点对应的高程
	 */
	public double getDem(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		double returnValue = getDem_CModelBaseObject(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}
	native private double getDem_CModelBaseObject_NoVirtual(long pNativeObject, long pModel);
	protected double getDem_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		double returnValue = getDem_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}

	protected  boolean refresh_void_callback()
	{
		boolean returnValue = refresh();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean refresh_void(long pNativeObject);
	/**
	 * 刷新
	 */
	public boolean refresh()
	{
		boolean returnValue = refresh_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean refresh_void_NoVirtual(long pNativeObject);
	protected boolean refresh_NoVirtual()
	{
		boolean returnValue = refresh_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean refresh_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		boolean returnValue = refresh(idParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean refresh_ev_uint32(long pNativeObject, long id);
	/**
	 * 刷新指定id的模型
	 */
	public boolean refresh(long id)
	{
		long idParamValue = id;
		boolean returnValue = refresh_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean refresh_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean refresh_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = refresh_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	protected  void refreshPosition_CModelBaseObject_callback(long pModel)
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
		refreshPosition(pModelParamValue);
	}

	native private void refreshPosition_CModelBaseObject(long pNativeObject, long pModel);
	/**
	 * 刷新模型位置
	 * @param pModel 刷新模型位置
	 */
	public void refreshPosition(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		refreshPosition_CModelBaseObject(this.nativeObject.pointer, pModelParamValue);
	}
	native private void refreshPosition_CModelBaseObject_NoVirtual(long pNativeObject, long pModel);
	protected void refreshPosition_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		refreshPosition_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pModelParamValue);
	}

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 图层选择
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

	protected  long select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(long ray, long hitDistance, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point)
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
		DoublePointer hitDistanceParamValue = new DoublePointer(new InstancePointer(hitDistance));
		IntegerPointer objIndexParamValue = new IntegerPointer(new InstancePointer(objIndex));
		IntegerPointer submeshIndexParamValue = new IntegerPointer(new InstancePointer(submeshIndex));
		IntegerPointer instanceIndexParamValue = new IntegerPointer(new InstancePointer(instanceIndex));
		IntegerPointer segmentIndexParamValue = new IntegerPointer(new InstancePointer(segmentIndex));
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
		com.earthview.world.graphic.MovableObject returnValue = select(rayParamValue, hitDistanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long hitDistance, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	/**
	 * 图层选择
	 * @param ray 射线
	 */
	public com.earthview.world.graphic.MovableObject select(com.earthview.world.spatial.math.Ray ray, DoublePointer hitDistance, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long hitDistanceParamValue = hitDistance.nativeObject.pointer;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long returnValue = select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, hitDistanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
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
	native private long select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long hitDistance, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	protected com.earthview.world.graphic.MovableObject select_NoVirtual(com.earthview.world.spatial.math.Ray ray, DoublePointer hitDistance, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long hitDistanceParamValue = hitDistance.nativeObject.pointer;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long returnValue = select_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, hitDistanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
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

	protected  long selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(long ray, long hitDistance, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point)
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
		DoublePointer hitDistanceParamValue = new DoublePointer(new InstancePointer(hitDistance));
		IntegerPointer objIndexParamValue = new IntegerPointer(new InstancePointer(objIndex));
		IntegerPointer submeshIndexParamValue = new IntegerPointer(new InstancePointer(submeshIndex));
		IntegerPointer instanceIndexParamValue = new IntegerPointer(new InstancePointer(instanceIndex));
		IntegerPointer segmentIndexParamValue = new IntegerPointer(new InstancePointer(segmentIndex));
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
		com.earthview.world.graphic.MovableObject returnValue = selectComponentBy(rayParamValue, hitDistanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long hitDistance, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	public com.earthview.world.graphic.MovableObject selectComponentBy(com.earthview.world.spatial.math.Ray ray, DoublePointer hitDistance, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long hitDistanceParamValue = hitDistance.nativeObject.pointer;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long returnValue = selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, hitDistanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
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
	native private long selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long hitDistance, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	protected com.earthview.world.graphic.MovableObject selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, DoublePointer hitDistance, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long hitDistanceParamValue = hitDistance.nativeObject.pointer;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long returnValue = selectComponentBy_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, hitDistanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
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

	protected  void loadVisibleObjectNodeAndMergeBoundingBox_void_callback()
	{
		loadVisibleObjectNodeAndMergeBoundingBox();
	}

	native private void loadVisibleObjectNodeAndMergeBoundingBox_void(long pNativeObject);
	/**
	 * 加载所有可视对象的节点并合并包围盒
	 * @param ray 射线
	 */
	public void loadVisibleObjectNodeAndMergeBoundingBox()
	{
		loadVisibleObjectNodeAndMergeBoundingBox_void(this.nativeObject.pointer);
	}
	native private void loadVisibleObjectNodeAndMergeBoundingBox_void_NoVirtual(long pNativeObject);
	protected void loadVisibleObjectNodeAndMergeBoundingBox_NoVirtual()
	{
		loadVisibleObjectNodeAndMergeBoundingBox_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void clearSubEntityVisibility_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		clearSubEntityVisibility(idParamValue);
	}

	native private void clearSubEntityVisibility_ev_uint32(long pNativeObject, long id);
	/**
	 * 清空指定ID子部件可见性
	 * @param id 模型id
	 */
	public void clearSubEntityVisibility(long id)
	{
		long idParamValue = id;
		clearSubEntityVisibility_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void clearSubEntityVisibility_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void clearSubEntityVisibility_NoVirtual(long id)
	{
		long idParamValue = id;
		clearSubEntityVisibility_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  void clearSubEntityVisibility_void_callback()
	{
		clearSubEntityVisibility();
	}

	native private void clearSubEntityVisibility_void(long pNativeObject);
	/**
	 * 清空所有子部件可见性
	 * @param id 模型id
	 */
	public void clearSubEntityVisibility()
	{
		clearSubEntityVisibility_void(this.nativeObject.pointer);
	}
	native private void clearSubEntityVisibility_void_NoVirtual(long pNativeObject);
	protected void clearSubEntityVisibility_NoVirtual()
	{
		clearSubEntityVisibility_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setLayerSelection_ILayerSelection(long pNativeObject, long selection);
	/**
	 * 设置图层的选择集
	 * @param selection 图层的选择集
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

	native private long getLayerSelection_void(long pNativeObject);
	/**
	 * 获取图层选择
	 * @param  
	 * @return 图层选择
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

	protected  boolean setVisibilityFilter_ev_bool_IntVector_callback(boolean visible, long ids)
	{
		boolean visibleParamValue = visible;
		com.earthview.world.core.IntVector idsParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		idsParamValue.setDelegate(true);
		idsParamValue.setInstancePointer(new InstancePointer(ids));
		IClassFactory idsParamValueClassFactory = GlobalClassFactoryMap.get(idsParamValue.getCppInstanceTypeName());
		if (idsParamValueClassFactory != null)
		{
			idsParamValue.setDelegate(true);
			idsParamValue = (com.earthview.world.core.IntVector)idsParamValueClassFactory.create();
			idsParamValue.setDelegate(true);
			idsParamValue.setInstancePointer(new InstancePointer(ids));
		}
		boolean returnValue = setVisibilityFilter(visibleParamValue, idsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setVisibilityFilter_ev_bool_IntVector(long pNativeObject, boolean visible, long ids);
	/**
	 * 设置图层对象可见过滤器,不带记忆功能（这次设置会把上次冲掉）
	 * @param visible visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见
	 * @param ids 对象的ID集合
	 */
	public boolean setVisibilityFilter(boolean visible, com.earthview.world.core.IntVector ids)
	{
		boolean visibleParamValue = visible;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = setVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}
	native private boolean setVisibilityFilter_ev_bool_IntVector_NoVirtual(long pNativeObject, boolean visible, long ids);
	protected boolean setVisibilityFilter_NoVirtual(boolean visible, com.earthview.world.core.IntVector ids)
	{
		boolean visibleParamValue = visible;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = setVisibilityFilter_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}

	protected  boolean setVisibilityFilter_ev_bool_ev_uint32_callback(boolean visible, long id)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		boolean returnValue = setVisibilityFilter(visibleParamValue, idParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setVisibilityFilter_ev_bool_ev_uint32(long pNativeObject, boolean visible, long id);
	/**
	 * 设置图层对象可见过滤器，带记忆功能（不会冲掉上次设置）
	 * @param visible visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见
	 * @param id 对象的ID
	 */
	public boolean setVisibilityFilter(boolean visible, long id)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		boolean returnValue = setVisibilityFilter_ev_bool_ev_uint32(this.nativeObject.pointer, visibleParamValue, idParamValue);
		return returnValue;
	}
	native private boolean setVisibilityFilter_ev_bool_ev_uint32_NoVirtual(long pNativeObject, boolean visible, long id);
	protected boolean setVisibilityFilter_NoVirtual(boolean visible, long id)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		boolean returnValue = setVisibilityFilter_ev_bool_ev_uint32_NoVirtual(this.nativeObject.pointer, visibleParamValue, idParamValue);
		return returnValue;
	}

	protected  boolean setVisibilityFilter2_ev_bool_IntVector_callback(boolean visible, long ids)
	{
		boolean visibleParamValue = visible;
		com.earthview.world.core.IntVector idsParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		idsParamValue.setDelegate(true);
		idsParamValue.setInstancePointer(new InstancePointer(ids));
		IClassFactory idsParamValueClassFactory = GlobalClassFactoryMap.get(idsParamValue.getCppInstanceTypeName());
		if (idsParamValueClassFactory != null)
		{
			idsParamValue.setDelegate(true);
			idsParamValue = (com.earthview.world.core.IntVector)idsParamValueClassFactory.create();
			idsParamValue.setDelegate(true);
			idsParamValue.setInstancePointer(new InstancePointer(ids));
		}
		boolean returnValue = setVisibilityFilter2(visibleParamValue, idsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setVisibilityFilter2_ev_bool_IntVector(long pNativeObject, boolean visible, long ids);
	/**
	 * 设置图层对象可见过滤器，带记忆功能（不会冲掉上次设置）
	 */
	public boolean setVisibilityFilter2(boolean visible, com.earthview.world.core.IntVector ids)
	{
		boolean visibleParamValue = visible;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = setVisibilityFilter2_ev_bool_IntVector(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}
	native private boolean setVisibilityFilter2_ev_bool_IntVector_NoVirtual(long pNativeObject, boolean visible, long ids);
	protected boolean setVisibilityFilter2_NoVirtual(boolean visible, com.earthview.world.core.IntVector ids)
	{
		boolean visibleParamValue = visible;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = setVisibilityFilter2_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}

	protected  boolean setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_callback(boolean visible, long id, long subEntityIndex)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = setSubEntityVisibility(visibleParamValue, idParamValue, subEntityIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32(long pNativeObject, boolean visible, long id, long subEntityIndex);
	/**
	 * 设置图层对象子部件可见性
	 * @param visible 设置指定的subentity可见或者不可见
	 * @param id 对象的ID
	 * @param subEntityIndex 对象的某个subEntityIndex
	 */
	public boolean setSubEntityVisibility(boolean visible, long id, long subEntityIndex)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32(this.nativeObject.pointer, visibleParamValue, idParamValue, subEntityIndexParamValue);
		return returnValue;
	}
	native private boolean setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, boolean visible, long id, long subEntityIndex);
	protected boolean setSubEntityVisibility_NoVirtual(boolean visible, long id, long subEntityIndex)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = setSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, visibleParamValue, idParamValue, subEntityIndexParamValue);
		return returnValue;
	}

	protected  boolean setSubEntityVisibility_ev_bool_ev_uint32_IntVector_callback(boolean visible, long id, long subEntityIndexVector)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		com.earthview.world.core.IntVector subEntityIndexVectorParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		subEntityIndexVectorParamValue.setDelegate(true);
		subEntityIndexVectorParamValue.setInstancePointer(new InstancePointer(subEntityIndexVector));
		IClassFactory subEntityIndexVectorParamValueClassFactory = GlobalClassFactoryMap.get(subEntityIndexVectorParamValue.getCppInstanceTypeName());
		if (subEntityIndexVectorParamValueClassFactory != null)
		{
			subEntityIndexVectorParamValue.setDelegate(true);
			subEntityIndexVectorParamValue = (com.earthview.world.core.IntVector)subEntityIndexVectorParamValueClassFactory.create();
			subEntityIndexVectorParamValue.setDelegate(true);
			subEntityIndexVectorParamValue.setInstancePointer(new InstancePointer(subEntityIndexVector));
		}
		boolean returnValue = setSubEntityVisibility(visibleParamValue, idParamValue, subEntityIndexVectorParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setSubEntityVisibility_ev_bool_ev_uint32_IntVector(long pNativeObject, boolean visible, long id, long subEntityIndexVector);
	/**
	 * 设置图层对象子部件可见性
	 * @param visible 设置指定的subEntity集合可见或者不可见
	 * @param id 对象的ID
	 * @param subEntityIndexVector 对象的subEntityIndex集合
	 */
	public boolean setSubEntityVisibility(boolean visible, long id, com.earthview.world.core.IntVector subEntityIndexVector)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		long subEntityIndexVectorParamValue = subEntityIndexVector.nativeObject.pointer;
		boolean returnValue = setSubEntityVisibility_ev_bool_ev_uint32_IntVector(this.nativeObject.pointer, visibleParamValue, idParamValue, subEntityIndexVectorParamValue);
		return returnValue;
	}
	native private boolean setSubEntityVisibility_ev_bool_ev_uint32_IntVector_NoVirtual(long pNativeObject, boolean visible, long id, long subEntityIndexVector);
	protected boolean setSubEntityVisibility_NoVirtual(boolean visible, long id, com.earthview.world.core.IntVector subEntityIndexVector)
	{
		boolean visibleParamValue = visible;
		long idParamValue = id;
		long subEntityIndexVectorParamValue = subEntityIndexVector.nativeObject.pointer;
		boolean returnValue = setSubEntityVisibility_ev_bool_ev_uint32_IntVector_NoVirtual(this.nativeObject.pointer, visibleParamValue, idParamValue, subEntityIndexVectorParamValue);
		return returnValue;
	}

	protected  boolean getVisibilityFilter_ev_bool_IntVector_callback(long visible, long ids)
	{
		BooleanPointer visibleParamValue = new BooleanPointer(new InstancePointer(visible));
		com.earthview.world.core.IntVector idsParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		idsParamValue.setDelegate(true);
		idsParamValue.setInstancePointer(new InstancePointer(ids));
		IClassFactory idsParamValueClassFactory = GlobalClassFactoryMap.get(idsParamValue.getCppInstanceTypeName());
		if (idsParamValueClassFactory != null)
		{
			idsParamValue.setDelegate(true);
			idsParamValue = (com.earthview.world.core.IntVector)idsParamValueClassFactory.create();
			idsParamValue.setDelegate(true);
			idsParamValue.setInstancePointer(new InstancePointer(ids));
		}
		boolean returnValue = getVisibilityFilter(visibleParamValue, idsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisibilityFilter_ev_bool_IntVector(long pNativeObject, long visible, long ids);
	/**
	 * 获取图层对象可见过滤器
	 * @param visible visible为true时，只有ids指定的对象可见；visible为false时，ids指定的对象不可见
	 * @param ids 对象的ID集合
	 */
	public boolean getVisibilityFilter(BooleanPointer visible, com.earthview.world.core.IntVector ids)
	{
		long visibleParamValue = visible.nativeObject.pointer;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = getVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}
	native private boolean getVisibilityFilter_ev_bool_IntVector_NoVirtual(long pNativeObject, long visible, long ids);
	protected boolean getVisibilityFilter_NoVirtual(BooleanPointer visible, com.earthview.world.core.IntVector ids)
	{
		long visibleParamValue = visible.nativeObject.pointer;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = getVisibilityFilter_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}

	protected  boolean getVisibilityFilter_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		boolean returnValue = getVisibilityFilter(idParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisibilityFilter_ev_uint32(long pNativeObject, long id);
	/**
	 * 获取图层对象可见过滤器
	 * @param id 对象的ID集合
	 * @return 返回当前对象在过滤器中的可见性
	 */
	public boolean getVisibilityFilter(long id)
	{
		long idParamValue = id;
		boolean returnValue = getVisibilityFilter_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean getVisibilityFilter_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean getVisibilityFilter_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = getVisibilityFilter_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	protected  boolean getSubEntityVisibility_ev_uint32_ev_uint32_callback(long id, long subEntityIndex)
	{
		long idParamValue = id;
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility(idParamValue, subEntityIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSubEntityVisibility_ev_uint32_ev_uint32(long pNativeObject, long id, long subEntityIndex);
	/**
	 * 获取指定图层对象指定子部件的可见性
	 * @param id 对象的ID
	 * @param subEntityIndex 对象的SubEntity
	 * @return 返回当前对象在过滤器中的可见性
	 */
	public boolean getSubEntityVisibility(long id, long subEntityIndex)
	{
		long idParamValue = id;
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility_ev_uint32_ev_uint32(this.nativeObject.pointer, idParamValue, subEntityIndexParamValue);
		return returnValue;
	}
	native private boolean getSubEntityVisibility_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long id, long subEntityIndex);
	protected boolean getSubEntityVisibility_NoVirtual(long id, long subEntityIndex)
	{
		long idParamValue = id;
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue, subEntityIndexParamValue);
		return returnValue;
	}

	protected  boolean getSubEntityVisibility_ev_uint32_ev_bool_IntVector_callback(long id, boolean visible, long subEntityIndexVector)
	{
		long idParamValue = id;
		boolean visibleParamValue = visible;
		com.earthview.world.core.IntVector subEntityIndexVectorParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		subEntityIndexVectorParamValue.setDelegate(true);
		subEntityIndexVectorParamValue.setInstancePointer(new InstancePointer(subEntityIndexVector));
		IClassFactory subEntityIndexVectorParamValueClassFactory = GlobalClassFactoryMap.get(subEntityIndexVectorParamValue.getCppInstanceTypeName());
		if (subEntityIndexVectorParamValueClassFactory != null)
		{
			subEntityIndexVectorParamValue.setDelegate(true);
			subEntityIndexVectorParamValue = (com.earthview.world.core.IntVector)subEntityIndexVectorParamValueClassFactory.create();
			subEntityIndexVectorParamValue.setDelegate(true);
			subEntityIndexVectorParamValue.setInstancePointer(new InstancePointer(subEntityIndexVector));
		}
		boolean returnValue = getSubEntityVisibility(idParamValue, visibleParamValue, subEntityIndexVectorParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	native private long getVisibleObjectPtr_ev_uint32(long pNativeObject, long id);
	/**
	 * 获取图层的模型(图层中如果不可见则创建)重要：返回是智能指针，可长时间持有，图层不再管理这个对象，等这个智能指针销毁后，图层下一帧检查无人使用再重新接管这个对象
	 * @param id 模型id
	 * @return 模型对象
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

	protected  long getVisibleObject_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		com.earthview.world.geometry3d.VisibleObject returnValue = getVisibleObject(idParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getVisibleObject_ev_uint32(long pNativeObject, long id);
	/**
	 * 获取图层可见的模型指针，不可见则返回NULL。只能临时取出用用，下一帧有可能被图层卸载。
	 * @param id 模型id
	 * @return 模型对象
	 */
	public com.earthview.world.geometry3d.VisibleObject getVisibleObject(long id)
	{
		long idParamValue = id;
		long returnValue = getVisibleObject_ev_uint32(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.VisibleObject __returnValue = new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate, "CVisibleObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObject");
		}
		return __returnValue;
	}
	native private long getVisibleObject_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected com.earthview.world.geometry3d.VisibleObject getVisibleObject_NoVirtual(long id)
	{
		long idParamValue = id;
		long returnValue = getVisibleObject_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.VisibleObject __returnValue = new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate, "CVisibleObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObject");
		}
		return __returnValue;
	}

	protected  long getAllObjectIDs_void_callback()
	{
		com.earthview.world.core.IntVector returnValue = getAllObjectIDs();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAllObjectIDs_void(long pNativeObject);
	/**
	 * 获取所有模型ID
	 * @param id 模型id
	 * @return 模型对象
	 */
	public com.earthview.world.core.IntVector getAllObjectIDs()
	{
		long returnValue = getAllObjectIDs_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private long getAllObjectIDs_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.IntVector getAllObjectIDs_NoVirtual()
	{
		long returnValue = getAllObjectIDs_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml文本序列化
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
	 * 序列化成xml文本
	 * @param  
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @param  
	 * @return xml数据
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
	 * 序列化成流
	 * @param  
	 * @return 序列化后的流
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
	 * Globe加载一个图层之后调用的函数
	 * @param pSceneMgr 场景管理器对象
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
	 * Globe卸载一个图层之后调用的函数
	 * @param pSceneMgr 场景管理器对象
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
	 * Globe刷新时调用的函数
	 * @param camera 当前的相机
	 * @param level 当前的级别
	 * @param force 是否为强制刷新
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

	native private void _notifyRefreshed_CCamera(long pNativeObject, long camera);
	/**
	 * Globe刷新时调用的函数
	 * @param camera 当前的相机
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		_notifyRefreshed_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	native private void _notifyRefreshed_CCamera_NoVirtual(long pNativeObject, long camera);
	protected void _notifyRefreshed_NoVirtual(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		_notifyRefreshed_CCamera_NoVirtual(this.nativeObject.pointer, cameraParamValue);
	}

	native private void _notifyWorkDone_ev_uint32_ev_uint64_ModelRequestType_ev_bool(long pNativeObject, long id, long reqID, int reqType, boolean bAbort);
	/**
	 * 通知模型工作完成
	 * @param camera 当前的相机
	 */
	public void _notifyWorkDone(long id, ULongPointer reqID, com.earthview.world.spatial3d.ModelRequestType reqType, boolean bAbort)
	{
		long idParamValue = id;
		long reqIDParamValue = reqID.nativeObject.pointer;
		int reqTypeParamValue = reqType.getValue();
		boolean bAbortParamValue = bAbort;
		_notifyWorkDone_ev_uint32_ev_uint64_ModelRequestType_ev_bool(this.nativeObject.pointer, idParamValue, reqIDParamValue, reqTypeParamValue, bAbortParamValue);
	}
	native private void _notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	/**
	 * 数据集更新事件的通知
	 * @param strDataSourceName 数据源名称
	 * @param strDatasetName 数据集名称
	 * @param pEvent 事件对象
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}
	native private void _notifyDataChanged_EVString_EVString_CEvent_NoVirtual(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	protected void _notifyDataChanged_NoVirtual(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent_NoVirtual(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}

	protected  boolean getGotoParam_ev_real64_ev_real64_ev_real64_callback(long latitude, long longitude, long altitude)
	{
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		boolean returnValue = getGotoParam(latitudeParamValue, longitudeParamValue, altitudeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getGotoParam_ev_real64_ev_real64_ev_real64(long pNativeObject, long latitude, long longitude, long altitude);
	/// <summary>
	/// 图层定位
	/// <param name="latitude">纬度</param>
	/// <param name="longitude">经度</param>
	/// <param name="altitude">高度</param>
	/// <returns>true跳转成功，false图层无数据</returns>
	public boolean getGotoParam(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getGotoParam_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
	}
	native private boolean getGotoParam_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long latitude, long longitude, long altitude);
	protected boolean getGotoParam_NoVirtual(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getGotoParam_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
	}

	protected  boolean getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_callback(long id, long latitude, long longitude, long altitude)
	{
		long idParamValue = id;
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		boolean returnValue = getGotoParam(idParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64(long pNativeObject, long id, long latitude, long longitude, long altitude);
	/// <summary>
	/// 获取图层记录跳转参数
	/// <param name="id">模型id</param>
	/// <param name="latitude">纬度</param>
	/// <param name="longitude">经度</param>
	/// <param name="altitude">高度</param>
	/// <returns>true跳转成功，false图层无数据</returns>
	public boolean getGotoParam(long id, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		long idParamValue = id;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, idParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
	}
	native private boolean getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long id, long latitude, long longitude, long altitude);
	protected boolean getGotoParam_NoVirtual(long id, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		long idParamValue = id;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getGotoParam_ev_uint32_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, idParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
	}

	protected  void applyModelEnvMapTexture_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		applyModelEnvMapTexture(idParamValue);
	}

	native private void applyModelEnvMapTexture_ev_uint32(long pNativeObject, long id);
	/// <summary>
	/// 应用环境纹理映射到模型
	/// <param name="id">模型id</param>
	/// <returns></returns>
	public void applyModelEnvMapTexture(long id)
	{
		long idParamValue = id;
		applyModelEnvMapTexture_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void applyModelEnvMapTexture_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void applyModelEnvMapTexture_NoVirtual(long id)
	{
		long idParamValue = id;
		applyModelEnvMapTexture_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  void cancelModelEnvMapTexture_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		cancelModelEnvMapTexture(idParamValue);
	}

	native private void cancelModelEnvMapTexture_ev_uint32(long pNativeObject, long id);
	/// <summary>
	/// 取消应用环境纹理映射从模型
	/// <param name="id">模型id</param>
	/// <returns></returns>
	public void cancelModelEnvMapTexture(long id)
	{
		long idParamValue = id;
		cancelModelEnvMapTexture_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void cancelModelEnvMapTexture_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void cancelModelEnvMapTexture_NoVirtual(long id)
	{
		long idParamValue = id;
		cancelModelEnvMapTexture_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  void setMaxEnvMapObjectCount_ev_uint32_callback(long count)
	{
		long countParamValue = count;
		setMaxEnvMapObjectCount(countParamValue);
	}

	native private void setMaxEnvMapObjectCount_ev_uint32(long pNativeObject, long count);
	/// <summary>
	/// 设置环境映射最大支持的模型个数
	/// <returns></returns>
	public void setMaxEnvMapObjectCount(long count)
	{
		long countParamValue = count;
		setMaxEnvMapObjectCount_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private void setMaxEnvMapObjectCount_ev_uint32_NoVirtual(long pNativeObject, long count);
	protected void setMaxEnvMapObjectCount_NoVirtual(long count)
	{
		long countParamValue = count;
		setMaxEnvMapObjectCount_ev_uint32_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	protected  long getMaxEnvMapObjectCount_void_callback()
	{
		long returnValue = getMaxEnvMapObjectCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getMaxEnvMapObjectCount_void(long pNativeObject);
	/// <summary>
	/// 获取环境映射最大支持的模型个数
	/// <returns></returns>
	public long getMaxEnvMapObjectCount()
	{
		long returnValue = getMaxEnvMapObjectCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxEnvMapObjectCount_void_NoVirtual(long pNativeObject);
	protected long getMaxEnvMapObjectCount_NoVirtual()
	{
		long returnValue = getMaxEnvMapObjectCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean allowApplyEnvMap_void_callback()
	{
		boolean returnValue = allowApplyEnvMap();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean allowApplyEnvMap_void(long pNativeObject);
	/// <summary>
	/// 是否超过图层映射允许的最多模型个数
	/// <returns></returns>
	public boolean allowApplyEnvMap()
	{
		boolean returnValue = allowApplyEnvMap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean allowApplyEnvMap_void_NoVirtual(long pNativeObject);
	protected boolean allowApplyEnvMap_NoVirtual()
	{
		boolean returnValue = allowApplyEnvMap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void applyEnvMapTexture_void_callback()
	{
		applyEnvMapTexture();
	}

	native private void applyEnvMapTexture_void(long pNativeObject);
	/// <summary>
	/// 应用环境纹理映射到图层
	/// <returns></returns>
	public void applyEnvMapTexture()
	{
		applyEnvMapTexture_void(this.nativeObject.pointer);
	}
	native private void applyEnvMapTexture_void_NoVirtual(long pNativeObject);
	protected void applyEnvMapTexture_NoVirtual()
	{
		applyEnvMapTexture_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void cancelEnvMapTexture_void_callback()
	{
		cancelEnvMapTexture();
	}

	native private void cancelEnvMapTexture_void(long pNativeObject);
	/// <summary>
	/// 取消应用环境纹理映射从图层
	/// <returns></returns>
	public void cancelEnvMapTexture()
	{
		cancelEnvMapTexture_void(this.nativeObject.pointer);
	}
	native private void cancelEnvMapTexture_void_NoVirtual(long pNativeObject);
	protected void cancelEnvMapTexture_NoVirtual()
	{
		cancelEnvMapTexture_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void stopRender_ev_bool_callback(boolean bClearObject)
	{
		boolean bClearObjectParamValue = bClearObject;
		stopRender(bClearObjectParamValue);
	}

	native private void stopRender_ev_bool(long pNativeObject, boolean bClearObject);
	/**
	 * //强行停止图层工作，相机裁剪此时不起作用
	 * @param bClearObject 是否清除对象
	 */
	public void stopRender(boolean bClearObject)
	{
		boolean bClearObjectParamValue = bClearObject;
		stopRender_ev_bool(this.nativeObject.pointer, bClearObjectParamValue);
	}
	native private void stopRender_ev_bool_NoVirtual(long pNativeObject, boolean bClearObject);
	protected void stopRender_NoVirtual(boolean bClearObject)
	{
		boolean bClearObjectParamValue = bClearObject;
		stopRender_ev_bool_NoVirtual(this.nativeObject.pointer, bClearObjectParamValue);
	}

	protected  void startRender_void_callback()
	{
		startRender();
	}

	native private void startRender_void(long pNativeObject);
	/**
	 * 强行开始图层工作
	 */
	public void startRender()
	{
		startRender_void(this.nativeObject.pointer);
	}
	native private void startRender_void_NoVirtual(long pNativeObject);
	protected void startRender_NoVirtual()
	{
		startRender_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isLoadModelNode_void_callback()
	{
		boolean returnValue = isLoadModelNode();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isLoadModelNode_void(long pNativeObject);
	/**
	 * 是否开启模型图层选择
	 */
	public boolean isLoadModelNode()
	{
		boolean returnValue = isLoadModelNode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLoadModelNode_void_NoVirtual(long pNativeObject);
	protected boolean isLoadModelNode_NoVirtual()
	{
		boolean returnValue = isLoadModelNode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLoadModelNode_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setLoadModelNode(flagParamValue);
	}

	native private void setLoadModelNode_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置模型图层选择是否开启
	 * @param flag 是否开启
	 */
	public void setLoadModelNode(boolean flag)
	{
		boolean flagParamValue = flag;
		setLoadModelNode_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setLoadModelNode_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setLoadModelNode_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setLoadModelNode_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private void addModelStateListener_CModelStateListener(long pNativeObject, long listener);
	/**
	 * 添加模型状态监听
	 * @param listener 模型监听
	 */
	public void addModelStateListener(com.earthview.world.spatial3d.atlas.ModelStateListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		addModelStateListener_CModelStateListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeModelStateListener_CModelStateListener(long pNativeObject, long listener);
	/**
	 * 移除模型状态监听
	 * @param listener 模型监听
	 */
	public void removeModelStateListener(com.earthview.world.spatial3d.atlas.ModelStateListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeModelStateListener_CModelStateListener(this.nativeObject.pointer, listenerParamValue);
	}
	protected  void _notifyModelLoaded_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		_notifyModelLoaded(objectParamValue);
	}

	native private void _notifyModelLoaded_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型被加载监听
	 * @param object 模型对象
	 */
	public void _notifyModelLoaded(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelLoaded_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void _notifyModelLoaded_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void _notifyModelLoaded_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelLoaded_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void _notifyModelUnLoaded_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		_notifyModelUnLoaded(objectParamValue);
	}

	native private void _notifyModelUnLoaded_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型被卸载监听
	 * @param object 模型对象
	 */
	public void _notifyModelUnLoaded(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelUnLoaded_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void _notifyModelUnLoaded_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void _notifyModelUnLoaded_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelUnLoaded_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void _notifyModelPreAttach_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		_notifyModelPreAttach(objectParamValue);
	}

	native private void _notifyModelPreAttach_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型挂接前监听
	 * @param object 模型对象
	 */
	public void _notifyModelPreAttach(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelPreAttach_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void _notifyModelPreAttach_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void _notifyModelPreAttach_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelPreAttach_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void _notifyModelAttached_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		_notifyModelAttached(objectParamValue);
	}

	native private void _notifyModelAttached_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型挂接后监听
	 * @param object 模型对象
	 */
	public void _notifyModelAttached(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelAttached_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void _notifyModelAttached_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void _notifyModelAttached_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelAttached_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void _notifyModelDetached_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		_notifyModelDetached(objectParamValue);
	}

	native private void _notifyModelDetached_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型反挂接后监听
	 * @param object 模型对象
	 */
	public void _notifyModelDetached(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelDetached_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void _notifyModelDetached_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void _notifyModelDetached_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		_notifyModelDetached_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流加载图层
	 * @param stream 内存流
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

	public EntityLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntityLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	/// <summary>
	/// 获得场景管理器
	/// </summary>
	/// <returns>场景管理器</return>
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
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
	
	public static EntityLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntityLayer obj = null;
 		if(baseObj instanceof EntityLayer)
		{
			obj = (EntityLayer)baseObj;
		} else {
			obj = new EntityLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntityLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
