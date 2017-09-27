package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///靠下横向居中
public class LatticeMovableText extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeMovableText", new LatticeMovableTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCLatticeMovableTextProxy", new LatticeMovableTextClassFactory());
	}

	public enum EAdaptMode implements INativeEnum<EAdaptMode> {
		OFF(EAdaptModeHelper.ENUM_VALUES[0]),
		KEEP_PIXELSIZE(EAdaptModeHelper.ENUM_VALUES[1]),
		FACETO_CAMERA(EAdaptModeHelper.ENUM_VALUES[2]),
		STD(EAdaptModeHelper.ENUM_VALUES[3]);
		private int value;
		EAdaptMode(int i) {
			this.value = i;
		}
		public EAdaptMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EAdaptMode toEnum(int retval) {
			if(retval == OFF.value){
				return OFF;
			}
			else if(retval == KEEP_PIXELSIZE.value){
				return KEEP_PIXELSIZE;
			}
			else if(retval == FACETO_CAMERA.value){
				return FACETO_CAMERA;
			}
			else if(retval == STD.value){
				return STD;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EAdaptModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 名称:Attributes	摘要:		这个类抽象出可渲染文本对象所具有的公共特性注意:		可渲染文本类的早期设计中，部分属性设置接口被直接添加到可渲染文本类的成员声明中,为了兼容之前的代码，这些接口并未移除。建议使用者在新的代码中使用EarthView::World::Graphic::CLatticeMovableText::Attributes类设置各项特性细节，再使用构造函数CTextMovable(constEarthView::World::Core::CUnicodeStringstr,EarthView::World::Graphic::CLatticeMovableText::Attributes*fontAttr)或CTextMovable::Attribute*CTextMovable::setFontAttr(CTextMovable::Attributes*fontAttr)为可渲染对象绑定这个属性对象。
	 */
	public static class Attributes extends com.earthview.world.graphic.LatticeTextStyle {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeMovableText::Attributes", new AttributesClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeMovableText::JAttributesProxy", new AttributesClassFactory());
		}

		native private void setLayout_eLayout(long pNativeObject, int layout);
		/**
		 * 字体布局设置
		 * @param layout 布局枚举
		 */
		public void setLayout(com.earthview.world.graphic.eLayout layout)
		{
			int layoutParamValue = layout.getValue();
			setLayout_eLayout(this.nativeObject.pointer, layoutParamValue);
		}
		native private void setExtraOffset_ev_real32_ev_real32_ev_real32(long pNativeObject, float offsetX, float offsetY, float offsetZ);
		/**
		 * 字体相对坐标(0,0,0)的额外偏移量设置，偏移方向由mlayout值决定
		 * @param offset 
		 */
		public void setExtraOffset(float offsetX, float offsetY, float offsetZ)
		{
			float offsetXParamValue = offsetX;
			float offsetYParamValue = offsetY;
			float offsetZParamValue = offsetZ;
			setExtraOffset_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, offsetXParamValue, offsetYParamValue, offsetZParamValue);
		}
		native private void setAdaptMode_EAdaptMode(long pNativeObject, int adaptMode);
		/**
		 * 场景适应特性设置
		 * @param adaptMode 
		 */
		public void setAdaptMode(com.earthview.world.graphic.LatticeMovableText.EAdaptMode adaptMode)
		{
			int adaptModeParamValue = adaptMode.getValue();
			setAdaptMode_EAdaptMode(this.nativeObject.pointer, adaptModeParamValue);
		}
		native private boolean addTextEffect_ILatticeTextEffect(long pNativeObject, long ref_effect);
		/**
		 * 添加/移除文本可渲染对象附加效果
		 * @param effect 附加效果指针
		 * @return 操作是否成功:一个附加效果对象不能添加到多个Attribute对象中去
		 */
		public boolean addTextEffect(com.earthview.world.graphic.Ilatticetexteffect ref_effect)
		{
			long ref_effectParamValue = (ref_effect == null ? 0L : ref_effect.nativeObject.pointer);
			boolean returnValue = addTextEffect_ILatticeTextEffect(this.nativeObject.pointer, ref_effectParamValue);
			return returnValue;
		}
		native private boolean removeTextEffect_ILatticeTextEffect(long pNativeObject, long effect);
		public boolean removeTextEffect(com.earthview.world.graphic.Ilatticetexteffect effect)
		{
			long effectParamValue = (effect == null ? 0L : effect.nativeObject.pointer);
			boolean returnValue = removeTextEffect_ILatticeTextEffect(this.nativeObject.pointer, effectParamValue);
			return returnValue;
		}
		native private void clearEffects_void(long pNativeObject);
		/**
		 * 清除所有文本可渲染对象附加效果
		 */
		public void clearEffects()
		{
			clearEffects_void(this.nativeObject.pointer);
		}
		native private void toDefaultVal_void(long pNativeObject);
		/**
		 * 返回到默认值
		 */
		public void toDefaultVal()
		{
			toDefaultVal_void(this.nativeObject.pointer);
		}
		native private void toDefaultVal_void_NoVirtual(long pNativeObject);
		protected void toDefaultVal_NoVirtual()
		{
			toDefaultVal_void_NoVirtual(this.nativeObject.pointer);
		}

		native private static long create_void();
		/// <summary>
		/// 创建移动文本属性对象
		/// </summary>
		/// <returns>属性对象指针</return>		
		public static com.earthview.world.graphic.LatticeMovableText.Attributes create()
		{
			long returnValue = create_void();
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.LatticeMovableText.Attributes __returnValue = new com.earthview.world.graphic.LatticeMovableText.Attributes(CreatedWhenConstruct.CWC_NotToCreate, "Attributes");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LatticeMovableText.Attributes)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "Attributes");
			}
			return __returnValue;
		}
		native private static long create_EarthView_World_Core_ev_string_ev_byte_CColourValue(String fontFamily, short fontSize, long color);
		/// <summary>
		/// 创建可渲染文本属性对象
		/// </summary>
		/// <param name="fontFamily">字体家族,如"宋体"</param>
		/// <param name="fontSize">字体像素大小</param>
		/// <param name="color">字体主轮廓颜色</param>
		/// <returns>属性对象指针</return>	
		public static com.earthview.world.graphic.LatticeMovableText.Attributes create(String fontFamily, short fontSize, com.earthview.world.graphic.ColourValue color)
		{
			String fontFamilyParamValue = fontFamily;
			short fontSizeParamValue = fontSize;
			long colorParamValue = color.nativeObject.pointer;
			long returnValue = create_EarthView_World_Core_ev_string_ev_byte_CColourValue(fontFamilyParamValue, fontSizeParamValue, colorParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.LatticeMovableText.Attributes __returnValue = new com.earthview.world.graphic.LatticeMovableText.Attributes(CreatedWhenConstruct.CWC_NotToCreate, "Attributes");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LatticeMovableText.Attributes)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "Attributes");
			}
			return __returnValue;
		}
		public Attributes(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Attributes(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_toDefaultVal_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_toDefaultVal_void(this.nativeObject.pointer, "toDefaultVal_void_callback");
			}
		}
		
		public static Attributes fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Attributes obj = null;
 			if(baseObj instanceof Attributes)
			{
				obj = (Attributes)baseObj;
			} else {
				obj = new Attributes(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Attributes");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AttributesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Attributes emptyInstance = new Attributes(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///不要使用delete操作符，请使用destroy();
	public static class TextRenderable extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeMovableText::CTextRenderable", new TextRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeMovableText::JCTextRenderableProxy", new TextRenderableClassFactory());
		}

		public TextRenderable(com.earthview.world.graphic.LatticeMovableText parent, String str, com.earthview.world.graphic.LatticeMovableText.Attributes fontAttr, com.earthview.world.graphic.LatticeFontCache sharedCache) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			BasePointer strPtr = new BasePointer(str);
			list.add("str", strPtr.get());
			BasePointer fontAttrPtr = new BasePointer(fontAttr);
			list.add("fontAttr", fontAttrPtr.get());
			BasePointer sharedCachePtr = new BasePointer(sharedCache);
			list.add("sharedCache", sharedCachePtr.get());
			Create("JCTextRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.LatticeMovableText$TextRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private boolean preRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
		/**
		 * 渲染前回调
		 * @param sm 场景管理器
		 * @param rsys 渲染系统
		 * @return 处理是否成功
		 */
		public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
			long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
			boolean returnValue = preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
			return returnValue;
		}
		native private boolean preRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
		protected boolean preRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
			long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
			boolean returnValue = preRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
			return returnValue;
		}

		native private void postRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
		/**
		 * 渲染后回调
		 * @param sm 场景管理器
		 * @param rsys 渲染系统
		 */
		public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
			long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
			postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
		}
		native private void postRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
		protected void postRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
			long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
			postRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
		}

		native private void refresh_void(long pNativeObject);
		/**
		 * 刷新顶点缓存
		 */
		public void refresh()
		{
			refresh_void(this.nativeObject.pointer);
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

		native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
		/**
		 * 以下函数参见基类
		 */
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

		native private long getMaterial_void(long pNativeObject);
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

		public TextRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextRenderable(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static TextRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextRenderable obj = null;
 			if(baseObj instanceof TextRenderable)
			{
				obj = (TextRenderable)baseObj;
			} else {
				obj = new TextRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CTextRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextRenderable emptyInstance = new TextRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long setFontAttr_Attributes(long pNativeObject, long fontAttr);
	/**
	 * 设置所有字体属性
	 * @param fontAttr 
	 */
	public com.earthview.world.graphic.LatticeMovableText.Attributes setFontAttr(com.earthview.world.graphic.LatticeMovableText.Attributes fontAttr)
	{
		long fontAttrParamValue = (fontAttr == null ? 0L : fontAttr.nativeObject.pointer);
		long returnValue = setFontAttr_Attributes(this.nativeObject.pointer, fontAttrParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeMovableText.Attributes __returnValue = new com.earthview.world.graphic.LatticeMovableText.Attributes(CreatedWhenConstruct.CWC_NotToCreate, "Attributes");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeMovableText.Attributes)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Attributes");
		}
		return __returnValue;
	}
	native private void setDepthCheck_ev_bool(long pNativeObject, boolean bCheck);
	/**
	 * 深度测试默认是开启的，若有必要，使用此函数改变设置
	 * @param bCheck 
	 */
	public void setDepthCheck(boolean bCheck)
	{
		boolean bCheckParamValue = bCheck;
		setDepthCheck_ev_bool(this.nativeObject.pointer, bCheckParamValue);
	}
	native private void setProjMatrixRSOffset_ev_real64(long pNativeObject, double off);
	/**
	 * 设置投影矩阵偏移
	 * @param off 
	 */
	public void setProjMatrixRSOffset(double off)
	{
		double offParamValue = off;
		setProjMatrixRSOffset_ev_real64(this.nativeObject.pointer, offParamValue);
	}
	native private void appendText_EarthView_World_Core_CUnicodeString_CLatticeTextStyle(long pNativeObject, String str, long style);
	/**
	 * 添加渲染文本
	 * @param str 新的字符串
	 * @param index 文本索引
	 * @param style 文本风格:如果传入NULL值,则表示使用默认风格
	 */
	public void appendText(String str, com.earthview.world.graphic.LatticeTextStyle style)
	{
		String strParamValue = str;
		long styleParamValue = (style == null ? 0L : style.nativeObject.pointer);
		appendText_EarthView_World_Core_CUnicodeString_CLatticeTextStyle(this.nativeObject.pointer, strParamValue, styleParamValue);
	}
	native private long resetText_EarthView_World_Core_CUnicodeString_ev_size_t_CLatticeTextStyle(long pNativeObject, String str, long index, long style);
	/**
	 * 重设渲染文本
	 * @param str 新的字符串
	 * @param index 文本索引
	 * @param style 文本风格:如果传入NULL值,则表示使用默认风格
	 * @return 旧的字体风格指针
	 */
	public com.earthview.world.graphic.LatticeTextStyle resetText(String str, long index, com.earthview.world.graphic.LatticeTextStyle style)
	{
		String strParamValue = str;
		long indexParamValue = index;
		long styleParamValue = (style == null ? 0L : style.nativeObject.pointer);
		long returnValue = resetText_EarthView_World_Core_CUnicodeString_ev_size_t_CLatticeTextStyle(this.nativeObject.pointer, strParamValue, indexParamValue, styleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeTextStyle __returnValue = new com.earthview.world.graphic.LatticeTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CLatticeTextStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeTextStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatticeTextStyle");
		}
		return __returnValue;
	}
	native private long removeText_EarthView_World_Core_CUnicodeString(long pNativeObject, String str);
	/**
	 * 移除渲染文本
	 * @param str 新的字符串
	 * @return 旧的字体风格指针
	 */
	public com.earthview.world.graphic.LatticeTextStyle removeText(String str)
	{
		String strParamValue = str;
		long returnValue = removeText_EarthView_World_Core_CUnicodeString(this.nativeObject.pointer, strParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeTextStyle __returnValue = new com.earthview.world.graphic.LatticeTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CLatticeTextStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeTextStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatticeTextStyle");
		}
		return __returnValue;
	}
	native private long removeText_ev_size_t(long pNativeObject, long index);
	/**
	 * 移除渲染文本
	 * @param index 文本索引
	 * @return 旧的字体风格指针
	 */
	public com.earthview.world.graphic.LatticeTextStyle removeText(long index)
	{
		long indexParamValue = index;
		long returnValue = removeText_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeTextStyle __returnValue = new com.earthview.world.graphic.LatticeTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CLatticeTextStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeTextStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatticeTextStyle");
		}
		return __returnValue;
	}
	native private void setColor_ev_uint32(long pNativeObject, long rgbVal);
	/**
	 * 下列设置函数功能与EarthView::World::Graphic::CLatticeMovableText::Attributes类中的设置函数一致，只是只可能作用于当前对象。
	 */
	public void setColor(long rgbVal)
	{
		long rgbValParamValue = rgbVal;
		setColor_ev_uint32(this.nativeObject.pointer, rgbValParamValue);
	}
	native private void setColor_CColourValue(long pNativeObject, long color);
	public void setColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setUnderline_ev_bool(long pNativeObject, boolean bUnderline);
	public void setUnderline(boolean bUnderline)
	{
		boolean bUnderlineParamValue = bUnderline;
		setUnderline_ev_bool(this.nativeObject.pointer, bUnderlineParamValue);
	}
	native private void setStrikeOut_ev_bool(long pNativeObject, boolean bStrikeOut);
	public void setStrikeOut(boolean bStrikeOut)
	{
		boolean bStrikeOutParamValue = bStrikeOut;
		setStrikeOut_ev_bool(this.nativeObject.pointer, bStrikeOutParamValue);
	}
	native private void setBold_ev_bool(long pNativeObject, boolean bBold);
	public void setBold(boolean bBold)
	{
		boolean bBoldParamValue = bBold;
		setBold_ev_bool(this.nativeObject.pointer, bBoldParamValue);
	}
	native private void setItalic_ev_bool(long pNativeObject, boolean bItalic);
	public void setItalic(boolean bItalic)
	{
		boolean bItalicParamValue = bItalic;
		setItalic_ev_bool(this.nativeObject.pointer, bItalicParamValue);
	}
	native private void setFont_EarthView_World_Core_ev_string(long pNativeObject, String fontFamily);
	public void setFont(String fontFamily)
	{
		String fontFamilyParamValue = fontFamily;
		setFont_EarthView_World_Core_ev_string(this.nativeObject.pointer, fontFamilyParamValue);
	}
	native private void setFontSize_ev_byte(long pNativeObject, short size);
	public void setFontSize(short size)
	{
		short sizeParamValue = size;
		setFontSize_ev_byte(this.nativeObject.pointer, sizeParamValue);
	}
	native private void setLayout_eLayout(long pNativeObject, int layout);
	public void setLayout(com.earthview.world.graphic.eLayout layout)
	{
		int layoutParamValue = layout.getValue();
		setLayout_eLayout(this.nativeObject.pointer, layoutParamValue);
	}
	native private void setExtraOffset_ev_real32_ev_real32_ev_real32(long pNativeObject, float offsetX, float offsetY, float offsetZ);
	public void setExtraOffset(float offsetX, float offsetY, float offsetZ)
	{
		float offsetXParamValue = offsetX;
		float offsetYParamValue = offsetY;
		float offsetZParamValue = offsetZ;
		setExtraOffset_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, offsetXParamValue, offsetYParamValue, offsetZParamValue);
	}
	native private void setAdaptMode_EAdaptMode(long pNativeObject, int adaptMode);
	public void setAdaptMode(com.earthview.world.graphic.LatticeMovableText.EAdaptMode adaptMode)
	{
		int adaptModeParamValue = adaptMode.getValue();
		setAdaptMode_EAdaptMode(this.nativeObject.pointer, adaptModeParamValue);
	}
	native private void setTransparence_ev_real32(long pNativeObject, float rate);
	public void setTransparence(float rate)
	{
		float rateParamValue = rate;
		setTransparence_ev_real32(this.nativeObject.pointer, rateParamValue);
	}
	native private long getFontAttr_void(long pNativeObject);
	/**
	 * 获取可渲染对象的属性对象
	 * @return 字体属性
	 */
	public com.earthview.world.graphic.LatticeMovableText.Attributes getFontAttr()
	{
		long returnValue = getFontAttr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeMovableText.Attributes __returnValue = new com.earthview.world.graphic.LatticeMovableText.Attributes(CreatedWhenConstruct.CWC_NotToCreate, "Attributes");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeMovableText.Attributes)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Attributes");
		}
		return __returnValue;
	}
	native private long getOffset_void(long pNativeObject);
	/**
	 * 获取在局部坐标系下，可渲染对象的所占据的矩形区域左上角相对其局部坐标原点的偏移
	 * @return 字体属性
	 */
	public com.earthview.world.spatial.math.Vector3 getOffset()
	{
		long returnValue = getOffset_void(this.nativeObject.pointer);
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
	native private long getRenderable_void(long pNativeObject);
	/**
	 * 获取文本可渲染对象
	 * @return 文本可渲染对象
	 */
	public com.earthview.world.graphic.Renderable getRenderable()
	{
		long returnValue = getRenderable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable __returnValue = new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate, "CRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderable");
		}
		return __returnValue;
	}
	native private long text_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取可渲染对象所渲染的文本
	 * @param index 索引
	 * @return 渲染文本
	 */
	public WideStringPointer text(long index)
	{
		long indexParamValue = index;
		long returnValue = text_ev_size_t(this.nativeObject.pointer, indexParamValue);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void updateRequest_void(long pNativeObject);
	/**
	 * 更新请求
	 */
	public void updateRequest()
	{
		updateRequest_void(this.nativeObject.pointer);
	}
	native private void refresh_void(long pNativeObject);
	/**
	 * 刷新CTextMovable对象，重新构建顶点缓冲区
	 * @param  
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private long toTexture_void(long pNativeObject);
	/**
	 * 生成文本纹理,由于纹理对尺寸的特殊要求，字体的真实长宽比将会丢失
	 * @param  
	 */
	public com.earthview.world.graphic.TexturePtr toTexture()
	{
		long returnValue = toTexture_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private boolean toHifiImage_CImage(long pNativeObject, long dstImg);
	/**
	 * 生成高保真图片
	 * @param  
	 */
	public boolean toHifiImage(com.earthview.world.graphic.Image dstImg)
	{
		long dstImgParamValue = dstImg.nativeObject.pointer;
		boolean returnValue = toHifiImage_CImage(this.nativeObject.pointer, dstImgParamValue);
		return returnValue;
	}
	/**
	 * 构造函数:此构造函数需要用户提供CFontLatticeCache对象，恰当地利用此构造函数和CFontLatticeCache对象能够提高字体渲染性能
	 * @param  
	 */
	public LatticeMovableText(String str, com.earthview.world.graphic.LatticeFontCache sharedCache) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strPtr = new BasePointer(str);
		list.add("str", strPtr.get());
		BasePointer sharedCachePtr = new BasePointer(sharedCache);
		list.add("sharedCache", sharedCachePtr.get());
		Create("JCLatticeMovableTextProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LatticeMovableText".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数:此构造函数会将可渲染对象与默认字体缓存绑定
	 * @param  
	 */
	public LatticeMovableText(String str) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strPtr = new BasePointer(str);
		list.add("str", strPtr.get());
		Create("JCLatticeMovableTextProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LatticeMovableText".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param str 要显示的字符串
	 * @param fontAttr 字体属性:可以有多个CTextMovable对象共用一个fontAttr,但是这些CTextMovable对象需要在同一个线程内
	 * @param sharedCache 每个CTextMovable对象需要绑定到字体缓存上去，用户可以决定使用默认字体缓存还是自己创建一个字体缓存，字体缓存是线程安全的
	 */
	public LatticeMovableText(String str, com.earthview.world.graphic.LatticeMovableText.Attributes fontAttr, com.earthview.world.graphic.LatticeFontCache sharedCache) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strPtr = new BasePointer(str);
		list.add("str", strPtr.get());
		BasePointer fontAttrPtr = new BasePointer(fontAttr);
		list.add("fontAttr", fontAttrPtr.get());
		BasePointer sharedCachePtr = new BasePointer(sharedCache);
		list.add("sharedCache", sharedCachePtr.get());
		Create("JCLatticeMovableTextProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LatticeMovableText".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public LatticeMovableText(String str, com.earthview.world.graphic.LatticeMovableText.Attributes fontAttr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strPtr = new BasePointer(str);
		list.add("str", strPtr.get());
		BasePointer fontAttrPtr = new BasePointer(fontAttr);
		list.add("fontAttr", fontAttrPtr.get());
		Create("JCLatticeMovableTextProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LatticeMovableText".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public LatticeMovableText(com.earthview.world.graphic.LatticeMovableText src) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer srcPtr = new BasePointer(src);
		list.add("src", srcPtr.get());
		Create("JCLatticeMovableTextProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LatticeMovableText".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private void renderSelection_void(long pNativeObject);
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

	native private long getTypeFlags_void(long pNativeObject);
	/**
	 * 获得专门的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		long returnValue = getTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTypeFlags_void_NoVirtual(long pNativeObject);
	protected long getTypeFlags_NoVirtual()
	{
		long returnValue = getTypeFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获取当前对象的平行轴边框盒边框盒在当地坐标系中包围盒的计算在CTextMovable::refresh()中完成;
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

	native private long getWorldBoundingBox_ev_bool(long pNativeObject, boolean derive);
	/**
	 * 获取当前对象的平行轴边框盒边框盒在世界坐标系中
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool(this.nativeObject.pointer, deriveParamValue);
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
	native private long getWorldBoundingBox_ev_bool_NoVirtual(long pNativeObject, boolean derive);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox_NoVirtual(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool_NoVirtual(this.nativeObject.pointer, deriveParamValue);
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

	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long ref_cam);
	/**
	 * 唤醒移动对象的摄像机线程用于下一次渲染操作内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera(this.nativeObject.pointer, ref_camParamValue);
	}
	native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long ref_cam);
	protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, ref_camParamValue);
	}

	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获取当前对象的球体限定半径
	 * @param  
	 * @return 边框盒
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
	 * 更新渲染队列移动对象必须添加到EarthView::World::Graphic::CRenderable内部方法
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

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
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

	public LatticeMovableText(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatticeMovableText(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static LatticeMovableText fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatticeMovableText obj = null;
 		if(baseObj instanceof LatticeMovableText)
		{
			obj = (LatticeMovableText)baseObj;
		} else {
			obj = new LatticeMovableText(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatticeMovableText");
			obj.increaseCast();
		}

		return obj;
	}
}
