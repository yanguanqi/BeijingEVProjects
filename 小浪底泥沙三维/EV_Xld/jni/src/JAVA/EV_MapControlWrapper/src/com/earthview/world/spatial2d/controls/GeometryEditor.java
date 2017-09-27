package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.spatial.display.*;
import com.earthview.world.core.*;

/**
 * 几何编辑器
 */
public class GeometryEditor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CGeometryEditor", new GeometryEditorClassFactory());
	}

	/**
	 * 构造函数
	 * @param editor 数据编辑器
	 */
	public GeometryEditor(com.earthview.world.spatial2d.controls.DataEditor ref_editor) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_editorPtr = new BasePointer(ref_editor);
		list.add("ref_editor", ref_editorPtr.get());
		Create("CGeometryEditor", list);
	}

	native private void setGeometryType_EVGeometryType(long pNativeObject, int type);
	/**
	 * 设置要时行编辑的几何类型(点/线/面)
	 * @param type 要编辑的几何体类型
	 */
	public void setGeometryType(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取要编辑的几何类型(点/线/面)
	 * @param  
	 * @return 返回要编辑的几何体类型
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private void loadGeometry_ev_int32(long pNativeObject, int id);
	/**
	 * 加载一个几何要素
	 * @param id 要素的ID号
	 */
	public void loadGeometry(int id)
	{
		int idParamValue = id;
		loadGeometry_ev_int32(this.nativeObject.pointer, idParamValue);
	}
	native private int getGeometryID_void(long pNativeObject);
	/**
	 * 获取正在编辑的几何ID号
	 * @param  
	 * @return 返回正在编辑的几何ID号
	 */
	public int getGeometryID()
	{
		int returnValue = getGeometryID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSketchSymbol_void(long pNativeObject);
	/**
	 * 获取描绘几何的风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getSketchSymbol()
	{
		long returnValue = getSketchSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setSketchSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置描绘几何的风格
	 * @param symbol 风格
	 */
	public void setSketchSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSketchSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private long getSketchVertexSymbol_void(long pNativeObject);
	/**
	 * 获取绘制顶点的风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getSketchVertexSymbol()
	{
		long returnValue = getSketchVertexSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setSketchVertexSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置绘制顶点的风格
	 * @param symbol 风格
	 */
	public void setSketchVertexSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSketchVertexSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private long getEndVertexSymbol_void(long pNativeObject);
	/**
	 * 获取终点的显示风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getEndVertexSymbol()
	{
		long returnValue = getEndVertexSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setEndVertexSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置终点的显示风格
	 * @param symbol 风格
	 */
	public void setEndVertexSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setEndVertexSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private long getGeometry_void(long pNativeObject);
	/**
	 * 获取正在编辑的几何
	 * @param  
	 * @return 几何要素
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometry()
	{
		long returnValue = getGeometry_void(this.nativeObject.pointer);
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
	native private void setActiveType_EditingObjectType(long pNativeObject, int objectType);
	/**
	 * 设置当前正在操作的对象类型
	 * @param objectType 对象类型
	 */
	public void setActiveType(com.earthview.world.spatial2d.controls.EditingObjectType objectType)
	{
		int objectTypeParamValue = objectType.getValue();
		setActiveType_EditingObjectType(this.nativeObject.pointer, objectTypeParamValue);
	}
	native private int getActiveType_void(long pNativeObject);
	/**
	 * 获取当前正在操作的对象类型
	 * @param  
	 * @return 对象类型
	 */
	public com.earthview.world.spatial2d.controls.EditingObjectType getActiveType()
	{
		int returnValue = getActiveType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EditingObjectType.toEnum(returnValue);
	}
	native private long getActiveObject_void(long pNativeObject);
	/**
	 * 获取当前正在操作的对象
	 * @param  
	 * @return 正在操作的对象
	 */
	public com.earthview.world.spatial2d.controls.EditingObject getActiveObject()
	{
		long returnValue = getActiveObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingObject __returnValue = new com.earthview.world.spatial2d.controls.EditingObject(CreatedWhenConstruct.CWC_NotToCreate, "CEditingObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingObject");
		}
		return __returnValue;
	}
	native private long getActivePart_void(long pNativeObject);
	/**
	 * 获取当前正在操作的部分
	 * @param  
	 * @return 正在操作的部分
	 */
	public com.earthview.world.spatial2d.controls.EditingObject getActivePart()
	{
		long returnValue = getActivePart_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingObject __returnValue = new com.earthview.world.spatial2d.controls.EditingObject(CreatedWhenConstruct.CWC_NotToCreate, "CEditingObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingObject");
		}
		return __returnValue;
	}
	native private long getEditingSketch_void(long pNativeObject);
	/**
	 * 获取编辑描绘器
	 * @param  
	 */
	public com.earthview.world.spatial2d.controls.EditingSketch getEditingSketch()
	{
		long returnValue = getEditingSketch_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingSketch __returnValue = new com.earthview.world.spatial2d.controls.EditingSketch(CreatedWhenConstruct.CWC_NotToCreate, "CEditingSketch");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingSketch)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingSketch");
		}
		return __returnValue;
	}
	native private void updateSketch_void(long pNativeObject);
	/**
	 * 更新描绘几何的显示
	 */
	public void updateSketch()
	{
		updateSketch_void(this.nativeObject.pointer);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 清空正在描绘的几何(该方法会废弃宏操作)
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void registerObject_CEditingObject(long pNativeObject, long object);
	/**
	 * 注册对象,用于外部扩展.如果用户在外部写了一个CEditingObject派生类,需要首先注册.		注册之后,用户可以调用setActiveType()方法把自己的对象类型设置进行,那么编辑器会		自动在内部创建一个用户的对象来编辑,其操作方式与内置类型一样.
	 * @param object 
	 */
	public void registerObject(com.earthview.world.spatial2d.controls.EditingObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		registerObject_CEditingObject(this.nativeObject.pointer, objectParamValue);
	}
	native private long newObject_EditingObjectType(long pNativeObject, int objectType);
	/**
	 * 根据指定类型新建一个编辑对象
	 * @param objectType 新建的类型
	 */
	public com.earthview.world.spatial2d.controls.EditingObject newObject(com.earthview.world.spatial2d.controls.EditingObjectType objectType)
	{
		int objectTypeParamValue = objectType.getValue();
		long returnValue = newObject_EditingObjectType(this.nativeObject.pointer, objectTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingObject __returnValue = new com.earthview.world.spatial2d.controls.EditingObject(CreatedWhenConstruct.CWC_NotToCreate, "CEditingObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingObject");
		}
		return __returnValue;
	}
	public GeometryEditor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeometryEditor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeometryEditor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeometryEditor obj = null;
 		if(baseObj instanceof GeometryEditor)
		{
			obj = (GeometryEditor)baseObj;
		} else {
			obj = new GeometryEditor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometryEditor");
			obj.increaseCast();
		}

		return obj;
	}
}
