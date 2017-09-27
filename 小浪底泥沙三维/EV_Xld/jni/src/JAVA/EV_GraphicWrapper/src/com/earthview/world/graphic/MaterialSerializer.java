package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 材质连载
 */
public class MaterialSerializer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterialSerializer", new MaterialSerializerClassFactory());
	}

	/// EarthView::World::Graphic::CMaterial serizliae event.
	public enum SerializeEvent implements INativeEnum<SerializeEvent> {
		MSE_PRE_WRITE(SerializeEventHelper.ENUM_VALUES[0]),
		MSE_WRITE_BEGIN(SerializeEventHelper.ENUM_VALUES[1]),
		MSE_WRITE_END(SerializeEventHelper.ENUM_VALUES[2]),
		MSE_POST_WRITE(SerializeEventHelper.ENUM_VALUES[3]);
		private int value;
		SerializeEvent(int i) {
			this.value = i;
		}
		public SerializeEvent getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final SerializeEvent toEnum(int retval) {
			if(retval == MSE_PRE_WRITE.value){
				return MSE_PRE_WRITE;
			}
			else if(retval == MSE_WRITE_BEGIN.value){
				return MSE_WRITE_BEGIN;
			}
			else if(retval == MSE_WRITE_END.value){
				return MSE_WRITE_END;
			}
			else if(retval == MSE_POST_WRITE.value){
				return MSE_POST_WRITE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class SerializeEventHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 监听材质连载过程的各个阶段
	 */
	public static class MaterialSerializerListener extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterialSerializer::CMaterialSerializerListener", new MaterialSerializerListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterialSerializer::JCMaterialSerializerListenerProxy", new MaterialSerializerListenerClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public MaterialSerializerListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCMaterialSerializerListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.MaterialSerializer$MaterialSerializerListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback(long ser, int event, long skip, long mat)
		{
			com.earthview.world.graphic.MaterialSerializer serParamValue = (ser == 0L ? null : new com.earthview.world.graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate));
			if(serParamValue != null)
			{
			serParamValue.setDelegate(true);
			serParamValue.setInstancePointer(new InstancePointer(ser));
			IClassFactory serParamValueClassFactory = GlobalClassFactoryMap.get(serParamValue.getCppInstanceTypeName());
			if (serParamValueClassFactory != null)
			{
				serParamValue.setDelegate(true);
				serParamValue = (com.earthview.world.graphic.MaterialSerializer)serParamValueClassFactory.create();
				serParamValue.setDelegate(true);
				serParamValue.setInstancePointer(new InstancePointer(ser));
			}
			}
			com.earthview.world.graphic.MaterialSerializer.SerializeEvent eventParamValue = com.earthview.world.graphic.MaterialSerializer.SerializeEvent.toEnum(event);
			BooleanPointer skipParamValue = new BooleanPointer(new InstancePointer(skip));
			com.earthview.world.graphic.Material matParamValue = (mat == 0L ? null : new com.earthview.world.graphic.Material(CreatedWhenConstruct.CWC_NotToCreate));
			if(matParamValue != null)
			{
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
			IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
			if (matParamValueClassFactory != null)
			{
				matParamValue.setDelegate(true);
				matParamValue = (com.earthview.world.graphic.Material)matParamValueClassFactory.create();
				matParamValue.setDelegate(true);
				matParamValue.setInstancePointer(new InstancePointer(mat));
			}
			}
			materialEventRaised(serParamValue, eventParamValue, skipParamValue, matParamValue);
		}

		native private void materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(long pNativeObject, long ser, int event, long skip, long mat);
		/**
		 * 当材质类事件触发时被调用
		 * @param ser EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质
		 * @param event 事件
		 * @param skip 如果设置为true,跳过下面部分的写入
		 * @param mat 被写入的材质
		 */
		public void materialEventRaised(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Material mat)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long matParamValue = (mat == null ? 0L : mat.nativeObject.pointer);
			materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, matParamValue);
		}
		native private void materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_NoVirtual(long pNativeObject, long ser, int event, long skip, long mat);
		protected void materialEventRaised_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Material mat)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long matParamValue = (mat == null ? 0L : mat.nativeObject.pointer);
			materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_NoVirtual(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, matParamValue);
		}

		protected  void techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback(long ser, int event, long skip, long tech)
		{
			com.earthview.world.graphic.MaterialSerializer serParamValue = (ser == 0L ? null : new com.earthview.world.graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate));
			if(serParamValue != null)
			{
			serParamValue.setDelegate(true);
			serParamValue.setInstancePointer(new InstancePointer(ser));
			IClassFactory serParamValueClassFactory = GlobalClassFactoryMap.get(serParamValue.getCppInstanceTypeName());
			if (serParamValueClassFactory != null)
			{
				serParamValue.setDelegate(true);
				serParamValue = (com.earthview.world.graphic.MaterialSerializer)serParamValueClassFactory.create();
				serParamValue.setDelegate(true);
				serParamValue.setInstancePointer(new InstancePointer(ser));
			}
			}
			com.earthview.world.graphic.MaterialSerializer.SerializeEvent eventParamValue = com.earthview.world.graphic.MaterialSerializer.SerializeEvent.toEnum(event);
			BooleanPointer skipParamValue = new BooleanPointer(new InstancePointer(skip));
			com.earthview.world.graphic.Technique techParamValue = (tech == 0L ? null : new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate));
			if(techParamValue != null)
			{
			techParamValue.setDelegate(true);
			techParamValue.setInstancePointer(new InstancePointer(tech));
			IClassFactory techParamValueClassFactory = GlobalClassFactoryMap.get(techParamValue.getCppInstanceTypeName());
			if (techParamValueClassFactory != null)
			{
				techParamValue.setDelegate(true);
				techParamValue = (com.earthview.world.graphic.Technique)techParamValueClassFactory.create();
				techParamValue.setDelegate(true);
				techParamValue.setInstancePointer(new InstancePointer(tech));
			}
			}
			techniqueEventRaised(serParamValue, eventParamValue, skipParamValue, techParamValue);
		}

		native private void techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(long pNativeObject, long ser, int event, long skip, long tech);
		/**
		 * 当技术类事件触发时被调用
		 * @param ser EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质
		 * @param event 事件
		 * @param skip 如果设置为true,跳过下面部分的写入
		 * @param mat 被写入的技术
		 */
		public void techniqueEventRaised(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Technique tech)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long techParamValue = (tech == null ? 0L : tech.nativeObject.pointer);
			techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, techParamValue);
		}
		native private void techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_NoVirtual(long pNativeObject, long ser, int event, long skip, long tech);
		protected void techniqueEventRaised_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Technique tech)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long techParamValue = (tech == null ? 0L : tech.nativeObject.pointer);
			techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_NoVirtual(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, techParamValue);
		}

		protected  void passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback(long ser, int event, long skip, long pass)
		{
			com.earthview.world.graphic.MaterialSerializer serParamValue = (ser == 0L ? null : new com.earthview.world.graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate));
			if(serParamValue != null)
			{
			serParamValue.setDelegate(true);
			serParamValue.setInstancePointer(new InstancePointer(ser));
			IClassFactory serParamValueClassFactory = GlobalClassFactoryMap.get(serParamValue.getCppInstanceTypeName());
			if (serParamValueClassFactory != null)
			{
				serParamValue.setDelegate(true);
				serParamValue = (com.earthview.world.graphic.MaterialSerializer)serParamValueClassFactory.create();
				serParamValue.setDelegate(true);
				serParamValue.setInstancePointer(new InstancePointer(ser));
			}
			}
			com.earthview.world.graphic.MaterialSerializer.SerializeEvent eventParamValue = com.earthview.world.graphic.MaterialSerializer.SerializeEvent.toEnum(event);
			BooleanPointer skipParamValue = new BooleanPointer(new InstancePointer(skip));
			com.earthview.world.graphic.Pass passParamValue = (pass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
			if(passParamValue != null)
			{
			passParamValue.setDelegate(true);
			passParamValue.setInstancePointer(new InstancePointer(pass));
			IClassFactory passParamValueClassFactory = GlobalClassFactoryMap.get(passParamValue.getCppInstanceTypeName());
			if (passParamValueClassFactory != null)
			{
				passParamValue.setDelegate(true);
				passParamValue = (com.earthview.world.graphic.Pass)passParamValueClassFactory.create();
				passParamValue.setDelegate(true);
				passParamValue.setInstancePointer(new InstancePointer(pass));
			}
			}
			passEventRaised(serParamValue, eventParamValue, skipParamValue, passParamValue);
		}

		native private void passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass(long pNativeObject, long ser, int event, long skip, long pass);
		/**
		 * 当通路事件触发时被调用
		 * @param ser EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质
		 * @param event 事件
		 * @param skip 如果设置为true,跳过下面部分的写入
		 * @param mat 被写入的通路
		 */
		public void passEventRaised(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Pass pass)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
			passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, passParamValue);
		}
		native private void passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(long pNativeObject, long ser, int event, long skip, long pass);
		protected void passEventRaised_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Pass pass)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
			passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, passParamValue);
		}

		native private void gpuProgramRefEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_EVString_CGpuProgramPtr_GpuProgramParametersSharedPtr_CGpuProgramParameters(long pNativeObject, long ser, int event, long skip, String attrib, long program, long params, long defaultParams);
		/**
		 * 当GPU程序事件触发时被调用
		 * @param ser EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质
		 * @param event 事件
		 * @param skip 如果设置为true,跳过下面部分的写入
		 * @param attrib GPU程序引用的描述
		 * @param program 被写入的程序
		 * @param params 程序参数
		 * @param defaultParams 程序的默认参数
		 */
		public void gpuProgramRefEventRaised(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, String attrib, com.earthview.world.graphic.GpuProgramPtr program, com.earthview.world.graphic.GpuProgramParametersSharedPtr params, com.earthview.world.graphic.GpuProgramParameters defaultParams)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			String attribParamValue = attrib;
			long programParamValue = program.nativeObject.pointer;
			long paramsParamValue = params.nativeObject.pointer;
			long defaultParamsParamValue = (defaultParams == null ? 0L : defaultParams.nativeObject.pointer);
			gpuProgramRefEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_EVString_CGpuProgramPtr_GpuProgramParametersSharedPtr_CGpuProgramParameters(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, attribParamValue, programParamValue, paramsParamValue, defaultParamsParamValue);
		}
		protected  void textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback(long ser, int event, long skip, long textureUnit)
		{
			com.earthview.world.graphic.MaterialSerializer serParamValue = (ser == 0L ? null : new com.earthview.world.graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate));
			if(serParamValue != null)
			{
			serParamValue.setDelegate(true);
			serParamValue.setInstancePointer(new InstancePointer(ser));
			IClassFactory serParamValueClassFactory = GlobalClassFactoryMap.get(serParamValue.getCppInstanceTypeName());
			if (serParamValueClassFactory != null)
			{
				serParamValue.setDelegate(true);
				serParamValue = (com.earthview.world.graphic.MaterialSerializer)serParamValueClassFactory.create();
				serParamValue.setDelegate(true);
				serParamValue.setInstancePointer(new InstancePointer(ser));
			}
			}
			com.earthview.world.graphic.MaterialSerializer.SerializeEvent eventParamValue = com.earthview.world.graphic.MaterialSerializer.SerializeEvent.toEnum(event);
			BooleanPointer skipParamValue = new BooleanPointer(new InstancePointer(skip));
			com.earthview.world.graphic.TextureUnitState textureUnitParamValue = (textureUnit == 0L ? null : new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate));
			if(textureUnitParamValue != null)
			{
			textureUnitParamValue.setDelegate(true);
			textureUnitParamValue.setInstancePointer(new InstancePointer(textureUnit));
			IClassFactory textureUnitParamValueClassFactory = GlobalClassFactoryMap.get(textureUnitParamValue.getCppInstanceTypeName());
			if (textureUnitParamValueClassFactory != null)
			{
				textureUnitParamValue.setDelegate(true);
				textureUnitParamValue = (com.earthview.world.graphic.TextureUnitState)textureUnitParamValueClassFactory.create();
				textureUnitParamValue.setDelegate(true);
				textureUnitParamValue.setInstancePointer(new InstancePointer(textureUnit));
			}
			}
			textureUnitStateEventRaised(serParamValue, eventParamValue, skipParamValue, textureUnitParamValue);
		}

		native private void textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(long pNativeObject, long ser, int event, long skip, long textureUnit);
		/**
		 * 当纹理单元状态事件触发时被调用
		 * @param ser EarthView::World::Graphic::CMaterialSerializer实例，写入已给的材质
		 * @param event 事件
		 * @param skip 如果设置为true,跳过下面部分的写入
		 * @param textureUnit 被写入的纹理单元状态
		 */
		public void textureUnitStateEventRaised(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.TextureUnitState textureUnit)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long textureUnitParamValue = (textureUnit == null ? 0L : textureUnit.nativeObject.pointer);
			textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, textureUnitParamValue);
		}
		native private void textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_NoVirtual(long pNativeObject, long ser, int event, long skip, long textureUnit);
		protected void textureUnitStateEventRaised_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.TextureUnitState textureUnit)
		{
			long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
			int eventParamValue = event.getValue();
			long skipParamValue = skip.nativeObject.pointer;
			long textureUnitParamValue = (textureUnit == null ? 0L : textureUnit.nativeObject.pointer);
			textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_NoVirtual(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, textureUnitParamValue);
		}

		public MaterialSerializerListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MaterialSerializerListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(long pNativeObject, String method);
		native protected void register_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(long pNativeObject, String method);
		native protected void register_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass(long pNativeObject, String method);
		native protected void register_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(this.nativeObject.pointer, "materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_callback");
				this.register_techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(this.nativeObject.pointer, "techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_callback");
				this.register_passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass(this.nativeObject.pointer, "passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_callback");
				this.register_textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(this.nativeObject.pointer, "textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_callback");
			}
		}
		
		public static MaterialSerializerListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MaterialSerializerListener obj = null;
 			if(baseObj instanceof MaterialSerializerListener)
			{
				obj = (MaterialSerializerListener)baseObj;
			} else {
				obj = new MaterialSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMaterialSerializerListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MaterialSerializerListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MaterialSerializerListener emptyInstance = new MaterialSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public MaterialSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMaterialSerializer", null);
	}

	native private void queueForExport_CMaterialPtr_ev_bool_ev_bool_EVString(long pNativeObject, long pMat, boolean clearQueued, boolean exportDefaults, String materialName);
	/**
	 * 材质队列的内部缓存输出
	 * @param pMat 材质指针
	 * @param clearQueued 如果为true，材质的所有队列被清除
	 * @param exportDefaults 如果为true，默认的属性会被包含在脚本文件中输出，否则会被忽略
	 * @param materialName 允许材质以不同的名称输出
	 */
	public void queueForExport(com.earthview.world.graphic.MaterialPtr pMat, boolean clearQueued, boolean exportDefaults, String materialName)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		boolean clearQueuedParamValue = clearQueued;
		boolean exportDefaultsParamValue = exportDefaults;
		String materialNameParamValue = materialName;
		queueForExport_CMaterialPtr_ev_bool_ev_bool_EVString(this.nativeObject.pointer, pMatParamValue, clearQueuedParamValue, exportDefaultsParamValue, materialNameParamValue);
	}
	native private void queueForExport_CMaterialPtr_ev_bool_ev_bool(long pNativeObject, long pMat, boolean clearQueued, boolean exportDefaults);
	/**
	 * 材质队列的内部缓存输出
	 * @param pMat 材质指针
	 * @param clearQueued 如果为true，材质的所有队列被清除
	 * @param exportDefaults 如果为true，默认的属性会被包含在脚本文件中输出，否则会被忽略
	 */
	public void queueForExport(com.earthview.world.graphic.MaterialPtr pMat, boolean clearQueued, boolean exportDefaults)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		boolean clearQueuedParamValue = clearQueued;
		boolean exportDefaultsParamValue = exportDefaults;
		queueForExport_CMaterialPtr_ev_bool_ev_bool(this.nativeObject.pointer, pMatParamValue, clearQueuedParamValue, exportDefaultsParamValue);
	}
	native private void queueForExport_CMaterialPtr_ev_bool(long pNativeObject, long pMat, boolean clearQueued);
	/**
	 * 材质队列的内部缓存输出
	 * @param pMat 材质指针
	 * @param clearQueued 如果为true，材质的所有队列被清除
	 */
	public void queueForExport(com.earthview.world.graphic.MaterialPtr pMat, boolean clearQueued)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		boolean clearQueuedParamValue = clearQueued;
		queueForExport_CMaterialPtr_ev_bool(this.nativeObject.pointer, pMatParamValue, clearQueuedParamValue);
	}
	native private void queueForExport_CMaterialPtr(long pNativeObject, long pMat);
	/**
	 * 材质队列的内部缓存输出
	 * @param pMat 材质指针
	 */
	public void queueForExport(com.earthview.world.graphic.MaterialPtr pMat)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		queueForExport_CMaterialPtr(this.nativeObject.pointer, pMatParamValue);
	}
	native private void exportQueued_EVString_ev_bool_EVString(long pNativeObject, String filename, boolean includeProgDef, String programFilename);
	/**
	 * 将材质队列输出到一个已命名的材质脚本文件中
	 * @param filename 输出脚本文件的名称
	 * @param includeProgDef 如果为true，顶点程序和片段程序的定义将写入到脚本文件的顶部
	 * @param programFilename 顶点/片段程序脚本文件的名称
	 */
	public void exportQueued(String filename, boolean includeProgDef, String programFilename)
	{
		String filenameParamValue = filename;
		boolean includeProgDefParamValue = includeProgDef;
		String programFilenameParamValue = programFilename;
		exportQueued_EVString_ev_bool_EVString(this.nativeObject.pointer, filenameParamValue, includeProgDefParamValue, programFilenameParamValue);
	}
	native private void exportQueued_EVString_ev_bool(long pNativeObject, String filename, boolean includeProgDef);
	/**
	 * 将材质队列输出到一个已命名的材质脚本文件中
	 * @param filename 输出脚本文件的名称
	 * @param includeProgDef 如果为true，顶点程序和片段程序的定义将写入到脚本文件的顶部
	 */
	public void exportQueued(String filename, boolean includeProgDef)
	{
		String filenameParamValue = filename;
		boolean includeProgDefParamValue = includeProgDef;
		exportQueued_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, includeProgDefParamValue);
	}
	native private void exportQueued_EVString(long pNativeObject, String filename);
	/**
	 * 将材质队列输出到一个已命名的材质脚本文件中
	 * @param filename 输出脚本文件的名称
	 */
	public void exportQueued(String filename)
	{
		String filenameParamValue = filename;
		exportQueued_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void exportMaterial_CMaterialPtr_EVString_ev_bool_ev_bool_EVString_EVString(long pNativeObject, long pMat, String filename, boolean exportDefaults, boolean includeProgDef, String programFilename, String materialName);
	/**
	 * 输出单独的材质内存到已命名的材质脚本文件中
	 * @param pMat 
	 * @param filename 输出脚本文件的名称
	 * @param exportDefaults 如果为true，输出所有的值
	 * @param includeProgDef 如果为true，在输出的脚本文件中包含Gpu阴影程序的定义，如果为false，这个程序的定义将会被输出到programFilename文件中
	 * @param programFilename 顶点/片段程序脚本文件的名称，只有在includeProgDef为false情况下使用
	 * @param materialName 允许材质以不同的名字输出
	 */
	public void exportMaterial(com.earthview.world.graphic.MaterialPtr pMat, String filename, boolean exportDefaults, boolean includeProgDef, String programFilename, String materialName)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		String filenameParamValue = filename;
		boolean exportDefaultsParamValue = exportDefaults;
		boolean includeProgDefParamValue = includeProgDef;
		String programFilenameParamValue = programFilename;
		String materialNameParamValue = materialName;
		exportMaterial_CMaterialPtr_EVString_ev_bool_ev_bool_EVString_EVString(this.nativeObject.pointer, pMatParamValue, filenameParamValue, exportDefaultsParamValue, includeProgDefParamValue, programFilenameParamValue, materialNameParamValue);
	}
	native private void exportMaterial_CMaterialPtr_EVString_ev_bool_ev_bool_EVString(long pNativeObject, long pMat, String filename, boolean exportDefaults, boolean includeProgDef, String programFilename);
	/**
	 * 输出单独的材质内存到已命名的材质脚本文件中
	 * @param pMat 
	 * @param filename 输出脚本文件的名称
	 * @param exportDefaults 如果为true，输出所有的值
	 * @param includeProgDef 如果为true，在输出的脚本文件中包含Gpu阴影程序的定义，如果为false，这个程序的定义将会被输出到programFilename文件中
	 * @param programFilename 顶点/片段程序脚本文件的名称，只有在includeProgDef为false情况下使用
	 */
	public void exportMaterial(com.earthview.world.graphic.MaterialPtr pMat, String filename, boolean exportDefaults, boolean includeProgDef, String programFilename)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		String filenameParamValue = filename;
		boolean exportDefaultsParamValue = exportDefaults;
		boolean includeProgDefParamValue = includeProgDef;
		String programFilenameParamValue = programFilename;
		exportMaterial_CMaterialPtr_EVString_ev_bool_ev_bool_EVString(this.nativeObject.pointer, pMatParamValue, filenameParamValue, exportDefaultsParamValue, includeProgDefParamValue, programFilenameParamValue);
	}
	native private void exportMaterial_CMaterialPtr_EVString_ev_bool_ev_bool(long pNativeObject, long pMat, String filename, boolean exportDefaults, boolean includeProgDef);
	/**
	 * 输出单独的材质内存到已命名的材质脚本文件中
	 * @param pMat 
	 * @param filename 输出脚本文件的名称
	 * @param exportDefaults 如果为true，输出所有的值
	 * @param includeProgDef 如果为true，在输出的脚本文件中包含Gpu阴影程序的定义，如果为false，这个程序的定义将会被输出到programFilename文件中
	 */
	public void exportMaterial(com.earthview.world.graphic.MaterialPtr pMat, String filename, boolean exportDefaults, boolean includeProgDef)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		String filenameParamValue = filename;
		boolean exportDefaultsParamValue = exportDefaults;
		boolean includeProgDefParamValue = includeProgDef;
		exportMaterial_CMaterialPtr_EVString_ev_bool_ev_bool(this.nativeObject.pointer, pMatParamValue, filenameParamValue, exportDefaultsParamValue, includeProgDefParamValue);
	}
	native private void exportMaterial_CMaterialPtr_EVString_ev_bool(long pNativeObject, long pMat, String filename, boolean exportDefaults);
	/**
	 * 输出单独的材质内存到已命名的材质脚本文件中
	 * @param pMat 
	 * @param filename 输出脚本文件的名称
	 * @param exportDefaults 如果为true，输出所有的值
	 */
	public void exportMaterial(com.earthview.world.graphic.MaterialPtr pMat, String filename, boolean exportDefaults)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		String filenameParamValue = filename;
		boolean exportDefaultsParamValue = exportDefaults;
		exportMaterial_CMaterialPtr_EVString_ev_bool(this.nativeObject.pointer, pMatParamValue, filenameParamValue, exportDefaultsParamValue);
	}
	native private void exportMaterial_CMaterialPtr_EVString(long pNativeObject, long pMat, String filename);
	/**
	 * 输出单独的材质内存到已命名的材质脚本文件中
	 * @param pMat 
	 * @param filename 输出脚本文件的名称
	 */
	public void exportMaterial(com.earthview.world.graphic.MaterialPtr pMat, String filename)
	{
		long pMatParamValue = pMat.nativeObject.pointer;
		String filenameParamValue = filename;
		exportMaterial_CMaterialPtr_EVString(this.nativeObject.pointer, pMatParamValue, filenameParamValue);
	}
	native private long getQueuedAsString_void(long pNativeObject);
	/**
	 * 获得解析的材质
	 * @param  
	 */
	public StringPointer getQueuedAsString()
	{
		long returnValue = getQueuedAsString_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void clearQueue_void(long pNativeObject);
	/**
	 * 清空内部缓存
	 * @param  
	 */
	public void clearQueue()
	{
		clearQueue_void(this.nativeObject.pointer);
	}
	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	/**
	 * 解析材质脚本文件
	 * @param stream 数据流
	 * @param groupName 资源组名称
	 */
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}
	native private void addListener_CMaterialSerializerListener(long pNativeObject, long ref_listener);
	/**
	 * 注册一个监听器到CSerializer类
	 * @param listener 监听器
	 */
	public void addListener(com.earthview.world.graphic.MaterialSerializer.MaterialSerializerListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CMaterialSerializerListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeListener_CMaterialSerializerListener(long pNativeObject, long listener);
	/**
	 * 删除监听器
	 * @param listener 监听器
	 */
	public void removeListener(com.earthview.world.graphic.MaterialSerializer.MaterialSerializerListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CMaterialSerializerListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void beginSection_ev_uint16_ev_bool(long pNativeObject, int level, boolean useMainBuffer);
	public void beginSection(int level, boolean useMainBuffer)
	{
		int levelParamValue = level;
		boolean useMainBufferParamValue = useMainBuffer;
		beginSection_ev_uint16_ev_bool(this.nativeObject.pointer, levelParamValue, useMainBufferParamValue);
	}
	native private void beginSection_ev_uint16(long pNativeObject, int level);
	public void beginSection(int level)
	{
		int levelParamValue = level;
		beginSection_ev_uint16(this.nativeObject.pointer, levelParamValue);
	}
	native private void endSection_ev_uint16_ev_bool(long pNativeObject, int level, boolean useMainBuffer);
	public void endSection(int level, boolean useMainBuffer)
	{
		int levelParamValue = level;
		boolean useMainBufferParamValue = useMainBuffer;
		endSection_ev_uint16_ev_bool(this.nativeObject.pointer, levelParamValue, useMainBufferParamValue);
	}
	native private void endSection_ev_uint16(long pNativeObject, int level);
	public void endSection(int level)
	{
		int levelParamValue = level;
		endSection_ev_uint16(this.nativeObject.pointer, levelParamValue);
	}
	native private void writeAttribute_ev_uint16_EVString_ev_bool(long pNativeObject, int level, String att, boolean useMainBuffer);
	public void writeAttribute(int level, String att, boolean useMainBuffer)
	{
		int levelParamValue = level;
		String attParamValue = att;
		boolean useMainBufferParamValue = useMainBuffer;
		writeAttribute_ev_uint16_EVString_ev_bool(this.nativeObject.pointer, levelParamValue, attParamValue, useMainBufferParamValue);
	}
	native private void writeAttribute_ev_uint16_EVString(long pNativeObject, int level, String att);
	public void writeAttribute(int level, String att)
	{
		int levelParamValue = level;
		String attParamValue = att;
		writeAttribute_ev_uint16_EVString(this.nativeObject.pointer, levelParamValue, attParamValue);
	}
	native private void writeValue_EVString_ev_bool(long pNativeObject, String val, boolean useMainBuffer);
	public void writeValue(String val, boolean useMainBuffer)
	{
		String valParamValue = val;
		boolean useMainBufferParamValue = useMainBuffer;
		writeValue_EVString_ev_bool(this.nativeObject.pointer, valParamValue, useMainBufferParamValue);
	}
	native private void writeValue_EVString(long pNativeObject, String val);
	public void writeValue(String val)
	{
		String valParamValue = val;
		writeValue_EVString(this.nativeObject.pointer, valParamValue);
	}
	native private String quoteWord_EVString(long pNativeObject, String val);
	public String quoteWord(String val)
	{
		String valParamValue = val;
		String returnValue = quoteWord_EVString(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private void writeComment_ev_uint16_EVString_ev_bool(long pNativeObject, int level, String comment, boolean useMainBuffer);
	public void writeComment(int level, String comment, boolean useMainBuffer)
	{
		int levelParamValue = level;
		String commentParamValue = comment;
		boolean useMainBufferParamValue = useMainBuffer;
		writeComment_ev_uint16_EVString_ev_bool(this.nativeObject.pointer, levelParamValue, commentParamValue, useMainBufferParamValue);
	}
	native private void writeComment_ev_uint16_EVString(long pNativeObject, int level, String comment);
	public void writeComment(int level, String comment)
	{
		int levelParamValue = level;
		String commentParamValue = comment;
		writeComment_ev_uint16_EVString(this.nativeObject.pointer, levelParamValue, commentParamValue);
	}
	public MaterialSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MaterialSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MaterialSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MaterialSerializer obj = null;
 		if(baseObj instanceof MaterialSerializer)
		{
			obj = (MaterialSerializer)baseObj;
		} else {
			obj = new MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMaterialSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
