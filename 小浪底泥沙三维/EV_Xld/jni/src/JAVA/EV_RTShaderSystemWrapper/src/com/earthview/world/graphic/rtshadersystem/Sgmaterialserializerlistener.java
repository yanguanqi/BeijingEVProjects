package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Sgmaterialserializerlistener extends com.earthview.world.graphic.MaterialSerializer.MaterialSerializerListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener", new SgmaterialserializerlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCSGMaterialSerializerListenerProxy", new SgmaterialserializerlistenerClassFactory());
	}

	native private void materialEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(long pNativeObject, long ser, int event, long skip, long mat);
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

	native private void techniqueEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(long pNativeObject, long ser, int event, long skip, long tech);
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

	native private void passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass(long pNativeObject, long ser, int event, long skip, long tech);
	public void passEventRaised(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Pass tech)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		int eventParamValue = event.getValue();
		long skipParamValue = skip.nativeObject.pointer;
		long techParamValue = (tech == null ? 0L : tech.nativeObject.pointer);
		passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, techParamValue);
	}
	native private void passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(long pNativeObject, long ser, int event, long skip, long tech);
	protected void passEventRaised_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.MaterialSerializer.SerializeEvent event, BooleanPointer skip, com.earthview.world.graphic.Pass tech)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		int eventParamValue = event.getValue();
		long skipParamValue = skip.nativeObject.pointer;
		long techParamValue = (tech == null ? 0L : tech.nativeObject.pointer);
		passEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(this.nativeObject.pointer, serParamValue, eventParamValue, skipParamValue, techParamValue);
	}

	native private void textureUnitStateEventRaised_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(long pNativeObject, long ser, int event, long skip, long textureUnit);
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

	public Sgmaterialserializerlistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Sgmaterialserializerlistener(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Sgmaterialserializerlistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Sgmaterialserializerlistener obj = null;
 		if(baseObj instanceof Sgmaterialserializerlistener)
		{
			obj = (Sgmaterialserializerlistener)baseObj;
		} else {
			obj = new Sgmaterialserializerlistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSGMaterialSerializerListener");
			obj.increaseCast();
		}

		return obj;
	}
}
