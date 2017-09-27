package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScutcheonText extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonText", new ScutcheonTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCScutcheonTextProxy", new ScutcheonTextClassFactory());
	}

	/**
	 * //显示模式//
	 */
	public enum ScutcheonTextHLayout implements INativeEnum<ScutcheonTextHLayout> {
		STHL_LEFT(ScutcheonTextHLayoutHelper.ENUM_VALUES[0]),
		STHL_RIGHT(ScutcheonTextHLayoutHelper.ENUM_VALUES[1]);
		private int value;
		ScutcheonTextHLayout(int i) {
			this.value = i;
		}
		public ScutcheonTextHLayout getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ScutcheonTextHLayout toEnum(int retval) {
			if(retval == STHL_LEFT.value){
				return STHL_LEFT;
			}
			else if(retval == STHL_RIGHT.value){
				return STHL_RIGHT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ScutcheonTextHLayoutHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum ScutcheonTextVLayout implements INativeEnum<ScutcheonTextVLayout> {
		STVL_TOP(ScutcheonTextVLayoutHelper.ENUM_VALUES[0]),
		STVL_BOTTOM(ScutcheonTextVLayoutHelper.ENUM_VALUES[1]);
		private int value;
		ScutcheonTextVLayout(int i) {
			this.value = i;
		}
		public ScutcheonTextVLayout getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ScutcheonTextVLayout toEnum(int retval) {
			if(retval == STVL_TOP.value){
				return STVL_TOP;
			}
			else if(retval == STVL_BOTTOM.value){
				return STVL_BOTTOM;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ScutcheonTextVLayoutHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 标牌对象构造函数(可以设置多个风格不同的字符串)
	 * @param ref_manager 场景管理器
	 * @param name 唯一标识名称
	 */
	public ScutcheonText(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCScutcheonTextProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.ScutcheonText".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @param  
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void attachToNode_CSceneNode_CGlobeControl_callback(long ref_node, long ref_globeControl)
	{
		com.earthview.world.graphic.SceneNode ref_nodeParamValue = (ref_node == 0L ? null : new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_nodeParamValue != null)
		{
		ref_nodeParamValue.setDelegate(true);
		ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		IClassFactory ref_nodeParamValueClassFactory = GlobalClassFactoryMap.get(ref_nodeParamValue.getCppInstanceTypeName());
		if (ref_nodeParamValueClassFactory != null)
		{
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue = (com.earthview.world.graphic.SceneNode)ref_nodeParamValueClassFactory.create();
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		}
		}
		com.earthview.world.spatial3d.controls.GlobeControl ref_globeControlParamValue = (ref_globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_globeControlParamValue != null)
		{
		ref_globeControlParamValue.setDelegate(true);
		ref_globeControlParamValue.setInstancePointer(new InstancePointer(ref_globeControl));
		IClassFactory ref_globeControlParamValueClassFactory = GlobalClassFactoryMap.get(ref_globeControlParamValue.getCppInstanceTypeName());
		if (ref_globeControlParamValueClassFactory != null)
		{
			ref_globeControlParamValue.setDelegate(true);
			ref_globeControlParamValue = (com.earthview.world.spatial3d.controls.GlobeControl)ref_globeControlParamValueClassFactory.create();
			ref_globeControlParamValue.setDelegate(true);
			ref_globeControlParamValue.setInstancePointer(new InstancePointer(ref_globeControl));
		}
		}
		attachToNode(ref_nodeParamValue, ref_globeControlParamValue);
	}

	native private void attachToNode_CSceneNode_CGlobeControl(long pNativeObject, long ref_node, long ref_globeControl);
	/**
	 * 绑定场景节点
	 * @param ref_node 场景节点
	 */
	public void attachToNode(com.earthview.world.graphic.SceneNode ref_node, com.earthview.world.spatial3d.controls.GlobeControl ref_globeControl)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		long ref_globeControlParamValue = (ref_globeControl == null ? 0L : ref_globeControl.nativeObject.pointer);
		attachToNode_CSceneNode_CGlobeControl(this.nativeObject.pointer, ref_nodeParamValue, ref_globeControlParamValue);
	}
	native private void attachToNode_CSceneNode_CGlobeControl_NoVirtual(long pNativeObject, long ref_node, long ref_globeControl);
	protected void attachToNode_NoVirtual(com.earthview.world.graphic.SceneNode ref_node, com.earthview.world.spatial3d.controls.GlobeControl ref_globeControl)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		long ref_globeControlParamValue = (ref_globeControl == null ? 0L : ref_globeControl.nativeObject.pointer);
		attachToNode_CSceneNode_CGlobeControl_NoVirtual(this.nativeObject.pointer, ref_nodeParamValue, ref_globeControlParamValue);
	}

	protected  long detachFromNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = detachFromNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long detachFromNode_void(long pNativeObject);
	/**
	 * /反挂接场景节点/
	 * @return 反挂接场景节点返回绑定的父节点，否则返回NULL
	 */
	public com.earthview.world.graphic.Node detachFromNode()
	{
		long returnValue = detachFromNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long detachFromNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node detachFromNode_NoVirtual()
	{
		long returnValue = detachFromNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  int getTextCount_void_callback()
	{
		int returnValue = getTextCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getTextCount_void(long pNativeObject);
	/**
	 * 获取字体个数
	 * @return 字体个数
	 */
	public int getTextCount()
	{
		int returnValue = getTextCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTextCount_void_NoVirtual(long pNativeObject);
	protected int getTextCount_NoVirtual()
	{
		int returnValue = getTextCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getTextMovableName_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getTextMovableName(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getTextMovableName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字体对象名称
	 * @return 字体对象名称
	 */
	public String getTextMovableName(long index)
	{
		long indexParamValue = index;
		String returnValue = getTextMovableName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getTextMovableName_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getTextMovableName_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getTextMovableName_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void appendText_EVString_EVString_ev_uint32_CColourValue_callback(String caption, String fontName, long fontSize, long color)
	{
		String captionParamValue = caption;
		String fontNameParamValue = fontName;
		long fontSizeParamValue = fontSize;
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		appendText(captionParamValue, fontNameParamValue, fontSizeParamValue, colorParamValue);
	}

	native private void appendText_EVString_EVString_ev_uint32_CColourValue(long pNativeObject, String caption, String fontName, long fontSize, long color);
	/**
	 * 添加显示内容
	 * @param caption 显示内容
	 * @param fontName 字体类型
	 * @param fontSize 字体大小
	 * @param color 字体颜色
	 */
	public void appendText(String caption, String fontName, long fontSize, com.earthview.world.graphic.ColourValue color)
	{
		String captionParamValue = caption;
		String fontNameParamValue = fontName;
		long fontSizeParamValue = fontSize;
		long colorParamValue = color.nativeObject.pointer;
		appendText_EVString_EVString_ev_uint32_CColourValue(this.nativeObject.pointer, captionParamValue, fontNameParamValue, fontSizeParamValue, colorParamValue);
	}
	native private void appendText_EVString_EVString_ev_uint32_CColourValue_NoVirtual(long pNativeObject, String caption, String fontName, long fontSize, long color);
	protected void appendText_NoVirtual(String caption, String fontName, long fontSize, com.earthview.world.graphic.ColourValue color)
	{
		String captionParamValue = caption;
		String fontNameParamValue = fontName;
		long fontSizeParamValue = fontSize;
		long colorParamValue = color.nativeObject.pointer;
		appendText_EVString_EVString_ev_uint32_CColourValue_NoVirtual(this.nativeObject.pointer, captionParamValue, fontNameParamValue, fontSizeParamValue, colorParamValue);
	}

	protected  void removeText_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeText(indexParamValue);
	}

	native private void removeText_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除显示内容
	 * @param index 索引
	 */
	public void removeText(long index)
	{
		long indexParamValue = index;
		removeText_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeText_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeText_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeText_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	native private long getTextMaterial_ev_uint32(long pNativeObject, long index);
	/**
	 * 取得字体的材质
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MaterialPtrList getTextMaterial(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextMaterial_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.MaterialPtrList __returnValue = new com.earthview.world.graphic.MaterialPtrList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtrList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtrList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtrList");
		}
		return __returnValue;
	}
	native private long getTextLineMaterial_void(long pNativeObject);
	/**
	 * 取得标牌连接线的材质
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MaterialPtr getTextLineMaterial()
	{
		long returnValue = getTextLineMaterial_void(this.nativeObject.pointer);
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
	native private long getTextFrameMaterial_void(long pNativeObject);
	/**
	 * 取得标牌边框的材质
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MaterialPtr getTextFrameMaterial()
	{
		long returnValue = getTextFrameMaterial_void(this.nativeObject.pointer);
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
	native private long getTextOverlayMaterial_void(long pNativeObject);
	/**
	 * 取得标牌背景的材质
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MaterialPtr getTextOverlayMaterial()
	{
		long returnValue = getTextOverlayMaterial_void(this.nativeObject.pointer);
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
	native private void setProjOffsetEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启偏移
	 * @param enable 
	 */
	public void setProjOffsetEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setProjOffsetEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getProjOffsetEnable_void(long pNativeObject);
	/**
	 * 获取是否开启偏移
	 */
	public boolean getProjOffsetEnable()
	{
		boolean returnValue = getProjOffsetEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long getTextLineLength_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getTextLineLength();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextLineLength_void(long pNativeObject);
	/**
	 * 获取标牌连接线长度
	 * @return 连接线长度
	 */
	public com.earthview.world.spatial.math.Vector3 getTextLineLength()
	{
		long returnValue = getTextLineLength_void(this.nativeObject.pointer);
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
	native private long getTextLineLength_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getTextLineLength_NoVirtual()
	{
		long returnValue = getTextLineLength_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setTextLineLength_CVector3_callback(long length)
	{
		com.earthview.world.spatial.math.Vector3 lengthParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		lengthParamValue.setDelegate(true);
		lengthParamValue.setInstancePointer(new InstancePointer(length));
		IClassFactory lengthParamValueClassFactory = GlobalClassFactoryMap.get(lengthParamValue.getCppInstanceTypeName());
		if (lengthParamValueClassFactory != null)
		{
			lengthParamValue.setDelegate(true);
			lengthParamValue = (com.earthview.world.spatial.math.Vector3)lengthParamValueClassFactory.create();
			lengthParamValue.setDelegate(true);
			lengthParamValue.setInstancePointer(new InstancePointer(length));
		}
		setTextLineLength(lengthParamValue);
	}

	native private void setTextLineLength_CVector3(long pNativeObject, long length);
	/**
	 * 设置标牌连接线长度
	 * @param length 连接线长度
	 */
	public void setTextLineLength(com.earthview.world.spatial.math.Vector3 length)
	{
		long lengthParamValue = length.nativeObject.pointer;
		setTextLineLength_CVector3(this.nativeObject.pointer, lengthParamValue);
	}
	native private void setTextLineLength_CVector3_NoVirtual(long pNativeObject, long length);
	protected void setTextLineLength_NoVirtual(com.earthview.world.spatial.math.Vector3 length)
	{
		long lengthParamValue = length.nativeObject.pointer;
		setTextLineLength_CVector3_NoVirtual(this.nativeObject.pointer, lengthParamValue);
	}

	protected  float getTextBoxWidth_void_callback()
	{
		float returnValue = getTextBoxWidth();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getTextBoxWidth_void(long pNativeObject);
	/**
	 * 获取标牌包围盒宽度
	 * @return 包围盒宽度
	 */
	public float getTextBoxWidth()
	{
		float returnValue = getTextBoxWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getTextBoxWidth_void_NoVirtual(long pNativeObject);
	protected float getTextBoxWidth_NoVirtual()
	{
		float returnValue = getTextBoxWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getTextBoxHeight_void_callback()
	{
		float returnValue = getTextBoxHeight();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getTextBoxHeight_void(long pNativeObject);
	/**
	 * 获取标牌包围盒高度
	 * @return 包围盒高度
	 */
	public float getTextBoxHeight()
	{
		float returnValue = getTextBoxHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getTextBoxHeight_void_NoVirtual(long pNativeObject);
	protected float getTextBoxHeight_NoVirtual()
	{
		float returnValue = getTextBoxHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void createTextLine_CColourValue_CVector3_EVString_callback(long lineColor, long length, String materialName)
	{
		com.earthview.world.graphic.ColourValue lineColorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		lineColorParamValue.setDelegate(true);
		lineColorParamValue.setInstancePointer(new InstancePointer(lineColor));
		IClassFactory lineColorParamValueClassFactory = GlobalClassFactoryMap.get(lineColorParamValue.getCppInstanceTypeName());
		if (lineColorParamValueClassFactory != null)
		{
			lineColorParamValue.setDelegate(true);
			lineColorParamValue = (com.earthview.world.graphic.ColourValue)lineColorParamValueClassFactory.create();
			lineColorParamValue.setDelegate(true);
			lineColorParamValue.setInstancePointer(new InstancePointer(lineColor));
		}
		com.earthview.world.spatial.math.Vector3 lengthParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		lengthParamValue.setDelegate(true);
		lengthParamValue.setInstancePointer(new InstancePointer(length));
		IClassFactory lengthParamValueClassFactory = GlobalClassFactoryMap.get(lengthParamValue.getCppInstanceTypeName());
		if (lengthParamValueClassFactory != null)
		{
			lengthParamValue.setDelegate(true);
			lengthParamValue = (com.earthview.world.spatial.math.Vector3)lengthParamValueClassFactory.create();
			lengthParamValue.setDelegate(true);
			lengthParamValue.setInstancePointer(new InstancePointer(length));
		}
		String materialNameParamValue = materialName;
		createTextLine(lineColorParamValue, lengthParamValue, materialNameParamValue);
	}

	native private void createTextLine_CColourValue_CVector3_EVString(long pNativeObject, long lineColor, long length, String materialName);
	/**
	 * 创建标牌连接线
	 * @param lineColor 连接线颜色
	 * @param length 连接线长度
	 * @param materialName 材质名称
	 */
	public void createTextLine(com.earthview.world.graphic.ColourValue lineColor, com.earthview.world.spatial.math.Vector3 length, String materialName)
	{
		long lineColorParamValue = lineColor.nativeObject.pointer;
		long lengthParamValue = length.nativeObject.pointer;
		String materialNameParamValue = materialName;
		createTextLine_CColourValue_CVector3_EVString(this.nativeObject.pointer, lineColorParamValue, lengthParamValue, materialNameParamValue);
	}
	native private void createTextLine_CColourValue_CVector3_EVString_NoVirtual(long pNativeObject, long lineColor, long length, String materialName);
	protected void createTextLine_NoVirtual(com.earthview.world.graphic.ColourValue lineColor, com.earthview.world.spatial.math.Vector3 length, String materialName)
	{
		long lineColorParamValue = lineColor.nativeObject.pointer;
		long lengthParamValue = length.nativeObject.pointer;
		String materialNameParamValue = materialName;
		createTextLine_CColourValue_CVector3_EVString_NoVirtual(this.nativeObject.pointer, lineColorParamValue, lengthParamValue, materialNameParamValue);
	}

	protected  void addTextLine_CNode_callback(long attachNode)
	{
		com.earthview.world.graphic.Node attachNodeParamValue = (attachNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(attachNodeParamValue != null)
		{
		attachNodeParamValue.setDelegate(true);
		attachNodeParamValue.setInstancePointer(new InstancePointer(attachNode));
		IClassFactory attachNodeParamValueClassFactory = GlobalClassFactoryMap.get(attachNodeParamValue.getCppInstanceTypeName());
		if (attachNodeParamValueClassFactory != null)
		{
			attachNodeParamValue.setDelegate(true);
			attachNodeParamValue = (com.earthview.world.graphic.Node)attachNodeParamValueClassFactory.create();
			attachNodeParamValue.setDelegate(true);
			attachNodeParamValue.setInstancePointer(new InstancePointer(attachNode));
		}
		}
		addTextLine(attachNodeParamValue);
	}

	native private void addTextLine_CNode(long pNativeObject, long attachNode);
	/**
	 * 添加标牌连接线
	 * @param attachNode 连接线要挂接的节点
	 */
	public void addTextLine(com.earthview.world.graphic.Node attachNode)
	{
		long attachNodeParamValue = (attachNode == null ? 0L : attachNode.nativeObject.pointer);
		addTextLine_CNode(this.nativeObject.pointer, attachNodeParamValue);
	}
	native private void addTextLine_CNode_NoVirtual(long pNativeObject, long attachNode);
	protected void addTextLine_NoVirtual(com.earthview.world.graphic.Node attachNode)
	{
		long attachNodeParamValue = (attachNode == null ? 0L : attachNode.nativeObject.pointer);
		addTextLine_CNode_NoVirtual(this.nativeObject.pointer, attachNodeParamValue);
	}

	protected  void createTextFrame_CColourValue_EVString_callback(long frameColor, String materialName)
	{
		com.earthview.world.graphic.ColourValue frameColorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		frameColorParamValue.setDelegate(true);
		frameColorParamValue.setInstancePointer(new InstancePointer(frameColor));
		IClassFactory frameColorParamValueClassFactory = GlobalClassFactoryMap.get(frameColorParamValue.getCppInstanceTypeName());
		if (frameColorParamValueClassFactory != null)
		{
			frameColorParamValue.setDelegate(true);
			frameColorParamValue = (com.earthview.world.graphic.ColourValue)frameColorParamValueClassFactory.create();
			frameColorParamValue.setDelegate(true);
			frameColorParamValue.setInstancePointer(new InstancePointer(frameColor));
		}
		String materialNameParamValue = materialName;
		createTextFrame(frameColorParamValue, materialNameParamValue);
	}

	native private void createTextFrame_CColourValue_EVString(long pNativeObject, long frameColor, String materialName);
	/**
	 * 创建标牌边框
	 * @param frameColor 边框颜色
	 * @param materialName 材质名称
	 */
	public void createTextFrame(com.earthview.world.graphic.ColourValue frameColor, String materialName)
	{
		long frameColorParamValue = frameColor.nativeObject.pointer;
		String materialNameParamValue = materialName;
		createTextFrame_CColourValue_EVString(this.nativeObject.pointer, frameColorParamValue, materialNameParamValue);
	}
	native private void createTextFrame_CColourValue_EVString_NoVirtual(long pNativeObject, long frameColor, String materialName);
	protected void createTextFrame_NoVirtual(com.earthview.world.graphic.ColourValue frameColor, String materialName)
	{
		long frameColorParamValue = frameColor.nativeObject.pointer;
		String materialNameParamValue = materialName;
		createTextFrame_CColourValue_EVString_NoVirtual(this.nativeObject.pointer, frameColorParamValue, materialNameParamValue);
	}

	protected  void createTextOverlay_EVString_callback(String materialName)
	{
		String materialNameParamValue = materialName;
		createTextOverlay(materialNameParamValue);
	}

	native private void createTextOverlay_EVString(long pNativeObject, String materialName);
	/**
	 * 创建标牌纹理底图
	 * @param materialName 材质名称
	 */
	public void createTextOverlay(String materialName)
	{
		String materialNameParamValue = materialName;
		createTextOverlay_EVString(this.nativeObject.pointer, materialNameParamValue);
	}
	native private void createTextOverlay_EVString_NoVirtual(long pNativeObject, String materialName);
	protected void createTextOverlay_NoVirtual(String materialName)
	{
		String materialNameParamValue = materialName;
		createTextOverlay_EVString_NoVirtual(this.nativeObject.pointer, materialNameParamValue);
	}

	protected  void resetTextCaption_EVString_ev_uint32_callback(String caption, long index)
	{
		String captionParamValue = caption;
		long indexParamValue = index;
		resetTextCaption(captionParamValue, indexParamValue);
	}

	native private void resetTextCaption_EVString_ev_uint32(long pNativeObject, String caption, long index);
	/**
	 * 更新字体内容
	 * @param caption 显示内容
	 * @param index 索引
	 */
	public void resetTextCaption(String caption, long index)
	{
		String captionParamValue = caption;
		long indexParamValue = index;
		resetTextCaption_EVString_ev_uint32(this.nativeObject.pointer, captionParamValue, indexParamValue);
	}
	native private void resetTextCaption_EVString_ev_uint32_NoVirtual(long pNativeObject, String caption, long index);
	protected void resetTextCaption_NoVirtual(String caption, long index)
	{
		String captionParamValue = caption;
		long indexParamValue = index;
		resetTextCaption_EVString_ev_uint32_NoVirtual(this.nativeObject.pointer, captionParamValue, indexParamValue);
	}

	protected  String getTextCaption_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getTextCaption(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getTextCaption_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字符串内容
	 * @param index 字符串索引
	 * @return 字符串内容
	 */
	public String getTextCaption(long index)
	{
		long indexParamValue = index;
		String returnValue = getTextCaption_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getTextCaption_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getTextCaption_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getTextCaption_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void resetFontName_EVString_ev_uint32_callback(String fontName, long index)
	{
		String fontNameParamValue = fontName;
		long indexParamValue = index;
		resetFontName(fontNameParamValue, indexParamValue);
	}

	native private void resetFontName_EVString_ev_uint32(long pNativeObject, String fontName, long index);
	/**
	 * 更新字体类型
	 * @param fontName 字体类型
	 * @param index 索引
	 */
	public void resetFontName(String fontName, long index)
	{
		String fontNameParamValue = fontName;
		long indexParamValue = index;
		resetFontName_EVString_ev_uint32(this.nativeObject.pointer, fontNameParamValue, indexParamValue);
	}
	native private void resetFontName_EVString_ev_uint32_NoVirtual(long pNativeObject, String fontName, long index);
	protected void resetFontName_NoVirtual(String fontName, long index)
	{
		String fontNameParamValue = fontName;
		long indexParamValue = index;
		resetFontName_EVString_ev_uint32_NoVirtual(this.nativeObject.pointer, fontNameParamValue, indexParamValue);
	}

	protected  void resetAllFontName_EVString_callback(String fontName)
	{
		String fontNameParamValue = fontName;
		resetAllFontName(fontNameParamValue);
	}

	native private void resetAllFontName_EVString(long pNativeObject, String fontName);
	/**
	 * 更新全部字体类型
	 * @param fontName 字体类型
	 */
	public void resetAllFontName(String fontName)
	{
		String fontNameParamValue = fontName;
		resetAllFontName_EVString(this.nativeObject.pointer, fontNameParamValue);
	}
	native private void resetAllFontName_EVString_NoVirtual(long pNativeObject, String fontName);
	protected void resetAllFontName_NoVirtual(String fontName)
	{
		String fontNameParamValue = fontName;
		resetAllFontName_EVString_NoVirtual(this.nativeObject.pointer, fontNameParamValue);
	}

	protected  String getFontName_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getFontName(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFontName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字体类型
	 * @param index 字符串索引
	 * @return 字体类型
	 */
	public String getFontName(long index)
	{
		long indexParamValue = index;
		String returnValue = getFontName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getFontName_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getFontName_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getFontName_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void resetFontSize_ev_uint32_ev_uint32_callback(long fontSize, long index)
	{
		long fontSizeParamValue = fontSize;
		long indexParamValue = index;
		resetFontSize(fontSizeParamValue, indexParamValue);
	}

	native private void resetFontSize_ev_uint32_ev_uint32(long pNativeObject, long fontSize, long index);
	/**
	 * 更新字体大小
	 * @param fontSize 字体大小
	 * @param index 索引
	 */
	public void resetFontSize(long fontSize, long index)
	{
		long fontSizeParamValue = fontSize;
		long indexParamValue = index;
		resetFontSize_ev_uint32_ev_uint32(this.nativeObject.pointer, fontSizeParamValue, indexParamValue);
	}
	native private void resetFontSize_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long fontSize, long index);
	protected void resetFontSize_NoVirtual(long fontSize, long index)
	{
		long fontSizeParamValue = fontSize;
		long indexParamValue = index;
		resetFontSize_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, fontSizeParamValue, indexParamValue);
	}

	protected  void resetAllFontSize_ev_uint32_callback(long fontSize)
	{
		long fontSizeParamValue = fontSize;
		resetAllFontSize(fontSizeParamValue);
	}

	native private void resetAllFontSize_ev_uint32(long pNativeObject, long fontSize);
	/**
	 * 更新全部字体大小
	 * @param fontSize 字体大小
	 */
	public void resetAllFontSize(long fontSize)
	{
		long fontSizeParamValue = fontSize;
		resetAllFontSize_ev_uint32(this.nativeObject.pointer, fontSizeParamValue);
	}
	native private void resetAllFontSize_ev_uint32_NoVirtual(long pNativeObject, long fontSize);
	protected void resetAllFontSize_NoVirtual(long fontSize)
	{
		long fontSizeParamValue = fontSize;
		resetAllFontSize_ev_uint32_NoVirtual(this.nativeObject.pointer, fontSizeParamValue);
	}

	protected  long getFontSize_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		long returnValue = getFontSize(indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFontSize_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字体大小
	 * @param index 字符串索引
	 * @return 字体大小
	 */
	public long getFontSize(long index)
	{
		long indexParamValue = index;
		long returnValue = getFontSize_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getFontSize_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected long getFontSize_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getFontSize_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void resetFontColor_CColourValue_ev_uint32_callback(long color, long index)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		long indexParamValue = index;
		resetFontColor(colorParamValue, indexParamValue);
	}

	native private void resetFontColor_CColourValue_ev_uint32(long pNativeObject, long color, long index);
	/**
	 * 更新字体颜色
	 * @param color 字体颜色
	 * @param index 索引
	 */
	public void resetFontColor(com.earthview.world.graphic.ColourValue color, long index)
	{
		long colorParamValue = color.nativeObject.pointer;
		long indexParamValue = index;
		resetFontColor_CColourValue_ev_uint32(this.nativeObject.pointer, colorParamValue, indexParamValue);
	}
	native private void resetFontColor_CColourValue_ev_uint32_NoVirtual(long pNativeObject, long color, long index);
	protected void resetFontColor_NoVirtual(com.earthview.world.graphic.ColourValue color, long index)
	{
		long colorParamValue = color.nativeObject.pointer;
		long indexParamValue = index;
		resetFontColor_CColourValue_ev_uint32_NoVirtual(this.nativeObject.pointer, colorParamValue, indexParamValue);
	}

	protected  void resetAllFontColor_CColourValue_callback(long color)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		resetAllFontColor(colorParamValue);
	}

	native private void resetAllFontColor_CColourValue(long pNativeObject, long color);
	/**
	 * 更新全部字体颜色
	 * @param color 字体颜色
	 */
	public void resetAllFontColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		resetAllFontColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void resetAllFontColor_CColourValue_NoVirtual(long pNativeObject, long color);
	protected void resetAllFontColor_NoVirtual(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		resetAllFontColor_CColourValue_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	protected  long getFontColor_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.ColourValue returnValue = getFontColor(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFontColor_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字体颜色
	 * @param index 字符串索引
	 * @return 字体颜色
	 */
	public com.earthview.world.graphic.ColourValue getFontColor(long index)
	{
		long indexParamValue = index;
		long returnValue = getFontColor_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getFontColor_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.ColourValue getFontColor_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getFontColor_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  void setFontBold_ev_uint32_ev_bool_callback(long index, boolean isBold)
	{
		long indexParamValue = index;
		boolean isBoldParamValue = isBold;
		setFontBold(indexParamValue, isBoldParamValue);
	}

	native private void setFontBold_ev_uint32_ev_bool(long pNativeObject, long index, boolean isBold);
	/**
	 * 设置字体是否加粗
	 * @param index 索引
	 * @param isBold 字体是否加粗
	 */
	public void setFontBold(long index, boolean isBold)
	{
		long indexParamValue = index;
		boolean isBoldParamValue = isBold;
		setFontBold_ev_uint32_ev_bool(this.nativeObject.pointer, indexParamValue, isBoldParamValue);
	}
	native private void setFontBold_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long index, boolean isBold);
	protected void setFontBold_NoVirtual(long index, boolean isBold)
	{
		long indexParamValue = index;
		boolean isBoldParamValue = isBold;
		setFontBold_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, indexParamValue, isBoldParamValue);
	}

	protected  void setAllFontBold_ev_bool_callback(boolean isBold)
	{
		boolean isBoldParamValue = isBold;
		setAllFontBold(isBoldParamValue);
	}

	native private void setAllFontBold_ev_bool(long pNativeObject, boolean isBold);
	/**
	 * 设置全部字体是否加粗
	 * @param isBold 全部字体是否加粗
	 */
	public void setAllFontBold(boolean isBold)
	{
		boolean isBoldParamValue = isBold;
		setAllFontBold_ev_bool(this.nativeObject.pointer, isBoldParamValue);
	}
	native private void setAllFontBold_ev_bool_NoVirtual(long pNativeObject, boolean isBold);
	protected void setAllFontBold_NoVirtual(boolean isBold)
	{
		boolean isBoldParamValue = isBold;
		setAllFontBold_ev_bool_NoVirtual(this.nativeObject.pointer, isBoldParamValue);
	}

	protected  boolean getFontBold_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontBold(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getFontBold_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字体是否加粗
	 * @param index 字符串索引
	 * @return 字体是否加粗
	 */
	public boolean getFontBold(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontBold_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean getFontBold_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean getFontBold_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontBold_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void setFontItalic_ev_uint32_ev_bool_callback(long index, boolean isItalic)
	{
		long indexParamValue = index;
		boolean isItalicParamValue = isItalic;
		setFontItalic(indexParamValue, isItalicParamValue);
	}

	native private void setFontItalic_ev_uint32_ev_bool(long pNativeObject, long index, boolean isItalic);
	/**
	 * 设置字体是否倾斜
	 * @param index 索引
	 * @param isItalic 字体是否倾斜
	 */
	public void setFontItalic(long index, boolean isItalic)
	{
		long indexParamValue = index;
		boolean isItalicParamValue = isItalic;
		setFontItalic_ev_uint32_ev_bool(this.nativeObject.pointer, indexParamValue, isItalicParamValue);
	}
	native private void setFontItalic_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long index, boolean isItalic);
	protected void setFontItalic_NoVirtual(long index, boolean isItalic)
	{
		long indexParamValue = index;
		boolean isItalicParamValue = isItalic;
		setFontItalic_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, indexParamValue, isItalicParamValue);
	}

	protected  void setAllFontItalic_ev_bool_callback(boolean isItalic)
	{
		boolean isItalicParamValue = isItalic;
		setAllFontItalic(isItalicParamValue);
	}

	native private void setAllFontItalic_ev_bool(long pNativeObject, boolean isItalic);
	/**
	 * 设置全部字体是否倾斜
	 * @param isItalic 全部字体是否倾斜
	 */
	public void setAllFontItalic(boolean isItalic)
	{
		boolean isItalicParamValue = isItalic;
		setAllFontItalic_ev_bool(this.nativeObject.pointer, isItalicParamValue);
	}
	native private void setAllFontItalic_ev_bool_NoVirtual(long pNativeObject, boolean isItalic);
	protected void setAllFontItalic_NoVirtual(boolean isItalic)
	{
		boolean isItalicParamValue = isItalic;
		setAllFontItalic_ev_bool_NoVirtual(this.nativeObject.pointer, isItalicParamValue);
	}

	protected  boolean getFontItalic_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontItalic(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getFontItalic_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字体是否倾斜
	 * @param index 字符串索引
	 * @return 字体是否倾斜
	 */
	public boolean getFontItalic(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontItalic_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean getFontItalic_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean getFontItalic_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontItalic_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void setFontHasShadow_ev_uint32_ev_bool_callback(long index, boolean hasShadow)
	{
		long indexParamValue = index;
		boolean hasShadowParamValue = hasShadow;
		setFontHasShadow(indexParamValue, hasShadowParamValue);
	}

	native private void setFontHasShadow_ev_uint32_ev_bool(long pNativeObject, long index, boolean hasShadow);
	/**
	 * 设置字体是否启用阴影
	 * @param index 索引
	 * @param hasShadow 字体是否启用阴影
	 */
	public void setFontHasShadow(long index, boolean hasShadow)
	{
		long indexParamValue = index;
		boolean hasShadowParamValue = hasShadow;
		setFontHasShadow_ev_uint32_ev_bool(this.nativeObject.pointer, indexParamValue, hasShadowParamValue);
	}
	native private void setFontHasShadow_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long index, boolean hasShadow);
	protected void setFontHasShadow_NoVirtual(long index, boolean hasShadow)
	{
		long indexParamValue = index;
		boolean hasShadowParamValue = hasShadow;
		setFontHasShadow_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, indexParamValue, hasShadowParamValue);
	}

	protected  void setAllFontHasShadow_ev_bool_callback(boolean hasShadow)
	{
		boolean hasShadowParamValue = hasShadow;
		setAllFontHasShadow(hasShadowParamValue);
	}

	native private void setAllFontHasShadow_ev_bool(long pNativeObject, boolean hasShadow);
	/**
	 * 设置全部字体是否启用阴影
	 * @param hasShadow 全部字体是否启用阴影
	 */
	public void setAllFontHasShadow(boolean hasShadow)
	{
		boolean hasShadowParamValue = hasShadow;
		setAllFontHasShadow_ev_bool(this.nativeObject.pointer, hasShadowParamValue);
	}
	native private void setAllFontHasShadow_ev_bool_NoVirtual(long pNativeObject, boolean hasShadow);
	protected void setAllFontHasShadow_NoVirtual(boolean hasShadow)
	{
		boolean hasShadowParamValue = hasShadow;
		setAllFontHasShadow_ev_bool_NoVirtual(this.nativeObject.pointer, hasShadowParamValue);
	}

	protected  boolean getFontHasShadow_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontHasShadow(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getFontHasShadow_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字体是否启用阴影
	 * @param index 字符串索引
	 * @return 是否启用阴影
	 */
	public boolean getFontHasShadow(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontHasShadow_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean getFontHasShadow_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean getFontHasShadow_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getFontHasShadow_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void setTextFrameColor_CColourValue_callback(long color)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		setTextFrameColor(colorParamValue);
	}

	native private void setTextFrameColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置边框颜色
	 * @param color 颜色
	 */
	public void setTextFrameColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setTextFrameColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setTextFrameColor_CColourValue_NoVirtual(long pNativeObject, long color);
	protected void setTextFrameColor_NoVirtual(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setTextFrameColor_CColourValue_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	protected  long getTextFrameColor_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getTextFrameColor();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextFrameColor_void(long pNativeObject);
	/**
	 * 获取边框颜色
	 * @return 边框颜色
	 */
	public com.earthview.world.graphic.ColourValue getTextFrameColor()
	{
		long returnValue = getTextFrameColor_void(this.nativeObject.pointer);
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
	native private long getTextFrameColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getTextFrameColor_NoVirtual()
	{
		long returnValue = getTextFrameColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setTextLineColor_CColourValue_callback(long color)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		setTextLineColor(colorParamValue);
	}

	native private void setTextLineColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置连接线颜色
	 * @param color 连接线颜色
	 */
	public void setTextLineColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setTextLineColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setTextLineColor_CColourValue_NoVirtual(long pNativeObject, long color);
	protected void setTextLineColor_NoVirtual(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setTextLineColor_CColourValue_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	protected  long getTextLineColor_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getTextLineColor();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextLineColor_void(long pNativeObject);
	/**
	 * 获取连接线颜色
	 * @return 连接线颜色
	 */
	public com.earthview.world.graphic.ColourValue getTextLineColor()
	{
		long returnValue = getTextLineColor_void(this.nativeObject.pointer);
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
	native private long getTextLineColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getTextLineColor_NoVirtual()
	{
		long returnValue = getTextLineColor_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setTextLineVisible_ev_bool(long pNativeObject, boolean isVisible);
	/**
	 * 设置连接线是否可见
	 * @param isVisible 连接线是否可见
	 */
	public void setTextLineVisible(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		setTextLineVisible_ev_bool(this.nativeObject.pointer, isVisibleParamValue);
	}
	native private boolean getTextLineVisible_void(long pNativeObject);
	/**
	 * 获取连接线是否可见
	 * @return 连接线是否可见
	 */
	public boolean getTextLineVisible()
	{
		boolean returnValue = getTextLineVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextFrameVisible_ev_bool(long pNativeObject, boolean isVisible);
	/**
	 * 设置边框是否可见
	 * @param isVisible 边框是否可见
	 */
	public void setTextFrameVisible(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		setTextFrameVisible_ev_bool(this.nativeObject.pointer, isVisibleParamValue);
	}
	native private boolean getTextFrameVisible_void(long pNativeObject);
	/**
	 * 获取边框是否可见
	 * @return 边框是否可见
	 */
	public boolean getTextFrameVisible()
	{
		boolean returnValue = getTextFrameVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextOverlayVisible_ev_bool(long pNativeObject, boolean isVisible);
	/**
	 * 设置底图是否可见
	 * @param isVisible 底图是否可见
	 */
	public void setTextOverlayVisible(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		setTextOverlayVisible_ev_bool(this.nativeObject.pointer, isVisibleParamValue);
	}
	native private boolean getTextOverlayVisible_void(long pNativeObject);
	/**
	 * 获取底图是否可见
	 * @return 底图是否可见
	 */
	public boolean getTextOverlayVisible()
	{
		boolean returnValue = getTextOverlayVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void updateScreenPositions_void_callback()
	{
		updateScreenPositions();
	}

	native private void updateScreenPositions_void(long pNativeObject);
	/**
	 * 更新顶点屏幕坐标
	 */
	public void updateScreenPositions()
	{
		updateScreenPositions_void(this.nativeObject.pointer);
	}
	native private void updateScreenPositions_void_NoVirtual(long pNativeObject);
	protected void updateScreenPositions_NoVirtual()
	{
		updateScreenPositions_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean isVisible);
	/**
	 * 设置标牌是否可见
	 * @param isVisible 标牌是否可见
	 */
	public void setVisible(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		setVisible_ev_bool(this.nativeObject.pointer, isVisibleParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取标牌是否可见
	 * @return 标牌是否可见
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIsAttached_void(long pNativeObject);
	/**
	 * 获取标牌是否已经挂接父节点
	 * @return 否已经挂接父节点
	 */
	public boolean getIsAttached()
	{
		boolean returnValue = getIsAttached_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setRenderingMaxDistance_Real_callback(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance(distParamValue);
	}

	native private void setRenderingMaxDistance_Real(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMaxDistance_Real_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMaxDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_Real_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  double getRenderingMaxDistance_void_callback()
	{
		double returnValue = getRenderingMaxDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingMaxDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离下限
	 * @return 对象可渲染的距离下限
	 */
	public double getRenderingMaxDistance()
	{
		double returnValue = getRenderingMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMaxDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMaxDistance_NoVirtual()
	{
		double returnValue = getRenderingMaxDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRenderingMinDistance_Real_callback(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance(distParamValue);
	}

	native private void setRenderingMinDistance_Real(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMinDistance_Real_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMinDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_Real_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  double getRenderingMinDistance_void_callback()
	{
		double returnValue = getRenderingMinDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingMinDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离上限
	 * @return 对象可渲染的距离上限
	 */
	public double getRenderingMinDistance()
	{
		double returnValue = getRenderingMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMinDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMinDistance_NoVirtual()
	{
		double returnValue = getRenderingMinDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void highLight_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否高亮显示
	 * @param value 是否高亮显示
	 */
	public void highLight(boolean value)
	{
		boolean valueParamValue = value;
		highLight_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setTextOverlayMaterialName_EVString(long pNativeObject, String name);
	/**
	 * 设置标牌底图材质名称
	 * @param name 标牌底图材质名称
	 */
	public void setTextOverlayMaterialName(String name)
	{
		String nameParamValue = name;
		setTextOverlayMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setSelected_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置标牌是否被选中
	 * @param value 标牌是否被选中
	 */
	public void setSelected(boolean value)
	{
		boolean valueParamValue = value;
		setSelected_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getSelected_void(long pNativeObject);
	/**
	 * 获取标牌是否被选中
	 * @return 标牌是否被选中
	 */
	public boolean getSelected()
	{
		boolean returnValue = getSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSelectable_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置标牌是否可被选中
	 * @param value 标牌是否可被选中
	 */
	public void setSelectable(boolean value)
	{
		boolean valueParamValue = value;
		setSelectable_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getSelectable_void(long pNativeObject);
	/**
	 * 获取标牌是否可被选中
	 * @return 标牌是否可被选中
	 */
	public boolean getSelectable()
	{
		boolean returnValue = getSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDraggable_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置标牌是否可被拖动
	 * @param value 标牌是否可被拖动
	 */
	public void setDraggable(boolean value)
	{
		boolean valueParamValue = value;
		setDraggable_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getDraggable_void(long pNativeObject);
	/**
	 * 获取标牌是否可被拖动
	 * @return 标牌是否可被拖动
	 */
	public boolean getDraggable()
	{
		boolean returnValue = getDraggable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEventObject_CScutcheonTextEventObject(long pNativeObject, long object);
	/**
	 * 设置响应事件对象
	 * @param value 响应事件对象
	 */
	public void setEventObject(com.earthview.industryengine.industrygraphic.ScutcheonTextEventObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		setEventObject_CScutcheonTextEventObject(this.nativeObject.pointer, objectParamValue);
	}
	native private long getEventObject_void(long pNativeObject);
	/**
	 * 获取响应事件对象
	 * @return 响应事件对象
	 */
	public com.earthview.industryengine.industrygraphic.ScutcheonTextEventObject getEventObject()
	{
		long returnValue = getEventObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScutcheonTextEventObject __returnValue = new com.earthview.industryengine.industrygraphic.ScutcheonTextEventObject(CreatedWhenConstruct.CWC_NotToCreate, "CScutcheonTextEventObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScutcheonTextEventObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScutcheonTextEventObject");
		}
		return __returnValue;
	}
	native private boolean setScutcheonTextLayout_ScutcheonTextHLayout_ScutcheonTextVLayout(long pNativeObject, int hLayout, int vLayout);
	/**
	 * 设置标牌布局方式
	 * @param hLayout 水平布局方式
	 * @param vLayout 垂直布局方式
	 * @return 布局是否改变
	 */
	public boolean setScutcheonTextLayout(com.earthview.industryengine.industrygraphic.ScutcheonText.ScutcheonTextHLayout hLayout, com.earthview.industryengine.industrygraphic.ScutcheonText.ScutcheonTextVLayout vLayout)
	{
		int hLayoutParamValue = hLayout.getValue();
		int vLayoutParamValue = vLayout.getValue();
		boolean returnValue = setScutcheonTextLayout_ScutcheonTextHLayout_ScutcheonTextVLayout(this.nativeObject.pointer, hLayoutParamValue, vLayoutParamValue);
		return returnValue;
	}
	native private int getScutcheonTextHLayout_void(long pNativeObject);
	/**
	 * 获取标牌水平布局方式
	 * @return 水平布局方式
	 */
	public com.earthview.industryengine.industrygraphic.ScutcheonText.ScutcheonTextHLayout getScutcheonTextHLayout()
	{
		int returnValue = getScutcheonTextHLayout_void(this.nativeObject.pointer);
		return com.earthview.industryengine.industrygraphic.ScutcheonText.ScutcheonTextHLayout.toEnum(returnValue);
	}
	native private int getScutcheonTextVLayout_void(long pNativeObject);
	/**
	 * 获取标牌垂直布局方式
	 * @return 垂直布局方式
	 */
	public com.earthview.industryengine.industrygraphic.ScutcheonText.ScutcheonTextVLayout getScutcheonTextVLayout()
	{
		int returnValue = getScutcheonTextVLayout_void(this.nativeObject.pointer);
		return com.earthview.industryengine.industrygraphic.ScutcheonText.ScutcheonTextVLayout.toEnum(returnValue);
	}
	native private void setBorderDistance_Real_Real_Real_Real(long pNativeObject, double left, double right, double top, double bottom);
	/**
	 * 设置标牌边框距离
	 * @param left 左边距
	 * @param right 右边距
	 * @param top 上边距
	 * @param bottom 下边距
	 */
	public void setBorderDistance(double left, double right, double top, double bottom)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double topParamValue = top;
		double bottomParamValue = bottom;
		setBorderDistance_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, rightParamValue, topParamValue, bottomParamValue);
	}
	native private void getBorderDistance_Real_Real_Real_Real(long pNativeObject, long left, long right, long top, long bottom);
	/**
	 * 获取标牌边框距离
	 * @param left 左边距
	 * @param right 右边距
	 * @param top 上边距
	 * @param bottom 下边距
	 */
	public void getBorderDistance(DoublePointer left, DoublePointer right, DoublePointer top, DoublePointer bottom)
	{
		long leftParamValue = left.nativeObject.pointer;
		long rightParamValue = right.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		long bottomParamValue = bottom.nativeObject.pointer;
		getBorderDistance_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, rightParamValue, topParamValue, bottomParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private short getRenderQueueGroup_void(long pNativeObject);
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		short returnValue = getRenderQueueGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long get_ScreenPositions_void(long pNativeObject);
	public com.earthview.world.geometry3d.VertexVector get_ScreenPositions()
	{
		long jniValue = get_ScreenPositions_void(this.nativeObject.pointer);
		
		com.earthview.world.geometry3d.VertexVector __returnValue = new com.earthview.world.geometry3d.VertexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVertexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VertexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexVector");
		}
		return __returnValue;
	}
	
	native private void set_ScreenPositions_CVertexVector (long pNativeObject, long value);
	public void set_ScreenPositions(com.earthview.world.geometry3d.VertexVector ScreenPositions)
	{
		long ScreenPositionsParamValue = ScreenPositions.nativeObject.pointer;
		
		set_ScreenPositions_CVertexVector(this.nativeObject.pointer, ScreenPositionsParamValue);
	}
	
	native private boolean get_IsShaded_void(long pNativeObject);
	public boolean get_IsShaded()
	{
		boolean jniValue = get_IsShaded_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_IsShaded_ev_bool (long pNativeObject, boolean value);
	public void set_IsShaded(boolean IsShaded)
	{
		boolean IsShadedParamValue = IsShaded;
		
		set_IsShaded_ev_bool(this.nativeObject.pointer, IsShadedParamValue);
	}
	
	native private double get_CameraDistance_void(long pNativeObject);
	public double get_CameraDistance()
	{
		double jniValue = get_CameraDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_CameraDistance_ev_real64 (long pNativeObject, double value);
	public void set_CameraDistance(double CameraDistance)
	{
		double CameraDistanceParamValue = CameraDistance;
		
		set_CameraDistance_ev_real64(this.nativeObject.pointer, CameraDistanceParamValue);
	}
	
	native private long get_WorldPositions_void(long pNativeObject);
	public com.earthview.world.geometry3d.VertexVector get_WorldPositions()
	{
		long jniValue = get_WorldPositions_void(this.nativeObject.pointer);
		
		com.earthview.world.geometry3d.VertexVector __returnValue = new com.earthview.world.geometry3d.VertexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVertexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VertexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexVector");
		}
		return __returnValue;
	}
	
	native private void set_WorldPositions_CVertexVector (long pNativeObject, long value);
	public void set_WorldPositions(com.earthview.world.geometry3d.VertexVector WorldPositions)
	{
		long WorldPositionsParamValue = WorldPositions.nativeObject.pointer;
		
		set_WorldPositions_CVertexVector(this.nativeObject.pointer, WorldPositionsParamValue);
	}
	
	native private void forceCameraVisible_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 强制标牌出现
	 * @param enable 
	 */
	public void forceCameraVisible(boolean enable)
	{
		boolean enableParamValue = enable;
		forceCameraVisible_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean isForceCameraVisible_void(long pNativeObject);
	/**
	 * 开启偏移
	 * @param enable 
	 */
	public boolean isForceCameraVisible()
	{
		boolean returnValue = isForceCameraVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDepthCheckEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 是否开启深度测度
	 * @param enable 
	 */
	public void setDepthCheckEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getDepthCheckEnabled_void(long pNativeObject);
	/**
	 * 获取是否开启深度测度
	 */
	public boolean getDepthCheckEnabled()
	{
		boolean returnValue = getDepthCheckEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ScutcheonText(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScutcheonText(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_attachToNode_CSceneNode_CGlobeControl(long pNativeObject, String method);
	native protected void register_detachFromNode_void(long pNativeObject, String method);
	native protected void register_getTextCount_void(long pNativeObject, String method);
	native protected void register_getTextMovableName_ev_uint32(long pNativeObject, String method);
	native protected void register_appendText_EVString_EVString_ev_uint32_CColourValue(long pNativeObject, String method);
	native protected void register_removeText_ev_uint32(long pNativeObject, String method);
	native protected void register_getTextLineLength_void(long pNativeObject, String method);
	native protected void register_setTextLineLength_CVector3(long pNativeObject, String method);
	native protected void register_getTextBoxWidth_void(long pNativeObject, String method);
	native protected void register_getTextBoxHeight_void(long pNativeObject, String method);
	native protected void register_createTextLine_CColourValue_CVector3_EVString(long pNativeObject, String method);
	native protected void register_addTextLine_CNode(long pNativeObject, String method);
	native protected void register_createTextFrame_CColourValue_EVString(long pNativeObject, String method);
	native protected void register_createTextOverlay_EVString(long pNativeObject, String method);
	native protected void register_resetTextCaption_EVString_ev_uint32(long pNativeObject, String method);
	native protected void register_getTextCaption_ev_uint32(long pNativeObject, String method);
	native protected void register_resetFontName_EVString_ev_uint32(long pNativeObject, String method);
	native protected void register_resetAllFontName_EVString(long pNativeObject, String method);
	native protected void register_getFontName_ev_uint32(long pNativeObject, String method);
	native protected void register_resetFontSize_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_resetAllFontSize_ev_uint32(long pNativeObject, String method);
	native protected void register_getFontSize_ev_uint32(long pNativeObject, String method);
	native protected void register_resetFontColor_CColourValue_ev_uint32(long pNativeObject, String method);
	native protected void register_resetAllFontColor_CColourValue(long pNativeObject, String method);
	native protected void register_getFontColor_ev_uint32(long pNativeObject, String method);
	native protected void register_setFontBold_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setAllFontBold_ev_bool(long pNativeObject, String method);
	native protected void register_getFontBold_ev_uint32(long pNativeObject, String method);
	native protected void register_setFontItalic_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setAllFontItalic_ev_bool(long pNativeObject, String method);
	native protected void register_getFontItalic_ev_uint32(long pNativeObject, String method);
	native protected void register_setFontHasShadow_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setAllFontHasShadow_ev_bool(long pNativeObject, String method);
	native protected void register_getFontHasShadow_ev_uint32(long pNativeObject, String method);
	native protected void register_setTextFrameColor_CColourValue(long pNativeObject, String method);
	native protected void register_getTextFrameColor_void(long pNativeObject, String method);
	native protected void register_setTextLineColor_CColourValue(long pNativeObject, String method);
	native protected void register_getTextLineColor_void(long pNativeObject, String method);
	native protected void register_updateScreenPositions_void(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_attachToNode_CSceneNode_CGlobeControl(this.nativeObject.pointer, "attachToNode_CSceneNode_CGlobeControl_callback");
			this.register_detachFromNode_void(this.nativeObject.pointer, "detachFromNode_void_callback");
			this.register_getTextCount_void(this.nativeObject.pointer, "getTextCount_void_callback");
			this.register_getTextMovableName_ev_uint32(this.nativeObject.pointer, "getTextMovableName_ev_uint32_callback");
			this.register_appendText_EVString_EVString_ev_uint32_CColourValue(this.nativeObject.pointer, "appendText_EVString_EVString_ev_uint32_CColourValue_callback");
			this.register_removeText_ev_uint32(this.nativeObject.pointer, "removeText_ev_uint32_callback");
			this.register_getTextLineLength_void(this.nativeObject.pointer, "getTextLineLength_void_callback");
			this.register_setTextLineLength_CVector3(this.nativeObject.pointer, "setTextLineLength_CVector3_callback");
			this.register_getTextBoxWidth_void(this.nativeObject.pointer, "getTextBoxWidth_void_callback");
			this.register_getTextBoxHeight_void(this.nativeObject.pointer, "getTextBoxHeight_void_callback");
			this.register_createTextLine_CColourValue_CVector3_EVString(this.nativeObject.pointer, "createTextLine_CColourValue_CVector3_EVString_callback");
			this.register_addTextLine_CNode(this.nativeObject.pointer, "addTextLine_CNode_callback");
			this.register_createTextFrame_CColourValue_EVString(this.nativeObject.pointer, "createTextFrame_CColourValue_EVString_callback");
			this.register_createTextOverlay_EVString(this.nativeObject.pointer, "createTextOverlay_EVString_callback");
			this.register_resetTextCaption_EVString_ev_uint32(this.nativeObject.pointer, "resetTextCaption_EVString_ev_uint32_callback");
			this.register_getTextCaption_ev_uint32(this.nativeObject.pointer, "getTextCaption_ev_uint32_callback");
			this.register_resetFontName_EVString_ev_uint32(this.nativeObject.pointer, "resetFontName_EVString_ev_uint32_callback");
			this.register_resetAllFontName_EVString(this.nativeObject.pointer, "resetAllFontName_EVString_callback");
			this.register_getFontName_ev_uint32(this.nativeObject.pointer, "getFontName_ev_uint32_callback");
			this.register_resetFontSize_ev_uint32_ev_uint32(this.nativeObject.pointer, "resetFontSize_ev_uint32_ev_uint32_callback");
			this.register_resetAllFontSize_ev_uint32(this.nativeObject.pointer, "resetAllFontSize_ev_uint32_callback");
			this.register_getFontSize_ev_uint32(this.nativeObject.pointer, "getFontSize_ev_uint32_callback");
			this.register_resetFontColor_CColourValue_ev_uint32(this.nativeObject.pointer, "resetFontColor_CColourValue_ev_uint32_callback");
			this.register_resetAllFontColor_CColourValue(this.nativeObject.pointer, "resetAllFontColor_CColourValue_callback");
			this.register_getFontColor_ev_uint32(this.nativeObject.pointer, "getFontColor_ev_uint32_callback");
			this.register_setFontBold_ev_uint32_ev_bool(this.nativeObject.pointer, "setFontBold_ev_uint32_ev_bool_callback");
			this.register_setAllFontBold_ev_bool(this.nativeObject.pointer, "setAllFontBold_ev_bool_callback");
			this.register_getFontBold_ev_uint32(this.nativeObject.pointer, "getFontBold_ev_uint32_callback");
			this.register_setFontItalic_ev_uint32_ev_bool(this.nativeObject.pointer, "setFontItalic_ev_uint32_ev_bool_callback");
			this.register_setAllFontItalic_ev_bool(this.nativeObject.pointer, "setAllFontItalic_ev_bool_callback");
			this.register_getFontItalic_ev_uint32(this.nativeObject.pointer, "getFontItalic_ev_uint32_callback");
			this.register_setFontHasShadow_ev_uint32_ev_bool(this.nativeObject.pointer, "setFontHasShadow_ev_uint32_ev_bool_callback");
			this.register_setAllFontHasShadow_ev_bool(this.nativeObject.pointer, "setAllFontHasShadow_ev_bool_callback");
			this.register_getFontHasShadow_ev_uint32(this.nativeObject.pointer, "getFontHasShadow_ev_uint32_callback");
			this.register_setTextFrameColor_CColourValue(this.nativeObject.pointer, "setTextFrameColor_CColourValue_callback");
			this.register_getTextFrameColor_void(this.nativeObject.pointer, "getTextFrameColor_void_callback");
			this.register_setTextLineColor_CColourValue(this.nativeObject.pointer, "setTextLineColor_CColourValue_callback");
			this.register_getTextLineColor_void(this.nativeObject.pointer, "getTextLineColor_void_callback");
			this.register_updateScreenPositions_void(this.nativeObject.pointer, "updateScreenPositions_void_callback");
			this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
		}
	}
	
	public static ScutcheonText fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScutcheonText obj = null;
 		if(baseObj instanceof ScutcheonText)
		{
			obj = (ScutcheonText)baseObj;
		} else {
			obj = new ScutcheonText(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScutcheonText");
			obj.increaseCast();
		}

		return obj;
	}
}
