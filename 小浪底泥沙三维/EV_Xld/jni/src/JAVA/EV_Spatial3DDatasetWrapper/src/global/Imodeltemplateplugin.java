package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Imodeltemplateplugin extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("IModelTemplatePlugin", new ImodeltemplatepluginClassFactory());
		GlobalClassFactoryMap.put("JIModelTemplatePluginProxy", new ImodeltemplatepluginClassFactory());
	}

	public Imodeltemplateplugin() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIModelTemplatePluginProxy", null, true);
		this.registerCallback();
		if (!"global.Imodeltemplateplugin".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean getImportModelData_EVString_CModelData_callback(String meshPath, long importModelData)
	{
		String meshPathParamValue = meshPath;
		ModelData importModelDataParamValue = new ModelData(CreatedWhenConstruct.CWC_NotToCreate);
		importModelDataParamValue.setDelegate(true);
		importModelDataParamValue.setInstancePointer(new InstancePointer(importModelData));
		IClassFactory importModelDataParamValueClassFactory = GlobalClassFactoryMap.get(importModelDataParamValue.getCppInstanceTypeName());
		if (importModelDataParamValueClassFactory != null)
		{
			importModelDataParamValue.setDelegate(true);
			importModelDataParamValue = (ModelData)importModelDataParamValueClassFactory.create();
			importModelDataParamValue.setDelegate(true);
			importModelDataParamValue.setInstancePointer(new InstancePointer(importModelData));
		}
		boolean returnValue = getImportModelData(meshPathParamValue, importModelDataParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getImportModelData_EVString_CModelData(long pNativeObject, String meshPath, long importModelData);
	public boolean getImportModelData(String meshPath, ModelData importModelData)
	{
		String meshPathParamValue = meshPath;
		long importModelDataParamValue = importModelData.nativeObject.pointer;
		boolean returnValue = getImportModelData_EVString_CModelData(this.nativeObject.pointer, meshPathParamValue, importModelDataParamValue);
		return returnValue;
	}
	native private boolean getImportModelData_EVString_CModelData_NoVirtual(long pNativeObject, String meshPath, long importModelData);
	protected boolean getImportModelData_NoVirtual(String meshPath, ModelData importModelData)
	{
		String meshPathParamValue = meshPath;
		long importModelDataParamValue = importModelData.nativeObject.pointer;
		boolean returnValue = getImportModelData_EVString_CModelData_NoVirtual(this.nativeObject.pointer, meshPathParamValue, importModelDataParamValue);
		return returnValue;
	}

	protected  String getPluginName_void_callback()
	{
		String returnValue = getPluginName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getPluginName_void(long pNativeObject);
	public String getPluginName()
	{
		String returnValue = getPluginName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getPluginName_void_NoVirtual(long pNativeObject);
	protected String getPluginName_NoVirtual()
	{
		String returnValue = getPluginName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getRealResourceData_CResourceData_CResourceData_callback(long srcResourceData, long destResourceData)
	{
		ResourceData srcResourceDataParamValue = new ResourceData(CreatedWhenConstruct.CWC_NotToCreate);
		srcResourceDataParamValue.setDelegate(true);
		srcResourceDataParamValue.setInstancePointer(new InstancePointer(srcResourceData));
		IClassFactory srcResourceDataParamValueClassFactory = GlobalClassFactoryMap.get(srcResourceDataParamValue.getCppInstanceTypeName());
		if (srcResourceDataParamValueClassFactory != null)
		{
			srcResourceDataParamValue.setDelegate(true);
			srcResourceDataParamValue = (ResourceData)srcResourceDataParamValueClassFactory.create();
			srcResourceDataParamValue.setDelegate(true);
			srcResourceDataParamValue.setInstancePointer(new InstancePointer(srcResourceData));
		}
		ResourceData destResourceDataParamValue = new ResourceData(CreatedWhenConstruct.CWC_NotToCreate);
		destResourceDataParamValue.setDelegate(true);
		destResourceDataParamValue.setInstancePointer(new InstancePointer(destResourceData));
		IClassFactory destResourceDataParamValueClassFactory = GlobalClassFactoryMap.get(destResourceDataParamValue.getCppInstanceTypeName());
		if (destResourceDataParamValueClassFactory != null)
		{
			destResourceDataParamValue.setDelegate(true);
			destResourceDataParamValue = (ResourceData)destResourceDataParamValueClassFactory.create();
			destResourceDataParamValue.setDelegate(true);
			destResourceDataParamValue.setInstancePointer(new InstancePointer(destResourceData));
		}
		boolean returnValue = getRealResourceData(srcResourceDataParamValue, destResourceDataParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getRealResourceData_CResourceData_CResourceData(long pNativeObject, long srcResourceData, long destResourceData);
	public boolean getRealResourceData(ResourceData srcResourceData, ResourceData destResourceData)
	{
		long srcResourceDataParamValue = srcResourceData.nativeObject.pointer;
		long destResourceDataParamValue = destResourceData.nativeObject.pointer;
		boolean returnValue = getRealResourceData_CResourceData_CResourceData(this.nativeObject.pointer, srcResourceDataParamValue, destResourceDataParamValue);
		return returnValue;
	}
	native private boolean getRealResourceData_CResourceData_CResourceData_NoVirtual(long pNativeObject, long srcResourceData, long destResourceData);
	protected boolean getRealResourceData_NoVirtual(ResourceData srcResourceData, ResourceData destResourceData)
	{
		long srcResourceDataParamValue = srcResourceData.nativeObject.pointer;
		long destResourceDataParamValue = destResourceData.nativeObject.pointer;
		boolean returnValue = getRealResourceData_CResourceData_CResourceData_NoVirtual(this.nativeObject.pointer, srcResourceDataParamValue, destResourceDataParamValue);
		return returnValue;
	}

	protected  boolean getRealModelData_CModelData_CModelData_callback(long srcResourceData, long destModelData)
	{
		ModelData srcResourceDataParamValue = new ModelData(CreatedWhenConstruct.CWC_NotToCreate);
		srcResourceDataParamValue.setDelegate(true);
		srcResourceDataParamValue.setInstancePointer(new InstancePointer(srcResourceData));
		IClassFactory srcResourceDataParamValueClassFactory = GlobalClassFactoryMap.get(srcResourceDataParamValue.getCppInstanceTypeName());
		if (srcResourceDataParamValueClassFactory != null)
		{
			srcResourceDataParamValue.setDelegate(true);
			srcResourceDataParamValue = (ModelData)srcResourceDataParamValueClassFactory.create();
			srcResourceDataParamValue.setDelegate(true);
			srcResourceDataParamValue.setInstancePointer(new InstancePointer(srcResourceData));
		}
		ModelData destModelDataParamValue = new ModelData(CreatedWhenConstruct.CWC_NotToCreate);
		destModelDataParamValue.setDelegate(true);
		destModelDataParamValue.setInstancePointer(new InstancePointer(destModelData));
		IClassFactory destModelDataParamValueClassFactory = GlobalClassFactoryMap.get(destModelDataParamValue.getCppInstanceTypeName());
		if (destModelDataParamValueClassFactory != null)
		{
			destModelDataParamValue.setDelegate(true);
			destModelDataParamValue = (ModelData)destModelDataParamValueClassFactory.create();
			destModelDataParamValue.setDelegate(true);
			destModelDataParamValue.setInstancePointer(new InstancePointer(destModelData));
		}
		boolean returnValue = getRealModelData(srcResourceDataParamValue, destModelDataParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getRealModelData_CModelData_CModelData(long pNativeObject, long srcResourceData, long destModelData);
	public boolean getRealModelData(ModelData srcResourceData, ModelData destModelData)
	{
		long srcResourceDataParamValue = srcResourceData.nativeObject.pointer;
		long destModelDataParamValue = destModelData.nativeObject.pointer;
		boolean returnValue = getRealModelData_CModelData_CModelData(this.nativeObject.pointer, srcResourceDataParamValue, destModelDataParamValue);
		return returnValue;
	}
	native private boolean getRealModelData_CModelData_CModelData_NoVirtual(long pNativeObject, long srcResourceData, long destModelData);
	protected boolean getRealModelData_NoVirtual(ModelData srcResourceData, ModelData destModelData)
	{
		long srcResourceDataParamValue = srcResourceData.nativeObject.pointer;
		long destModelDataParamValue = destModelData.nativeObject.pointer;
		boolean returnValue = getRealModelData_CModelData_CModelData_NoVirtual(this.nativeObject.pointer, srcResourceDataParamValue, destModelDataParamValue);
		return returnValue;
	}

	public Imodeltemplateplugin(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imodeltemplateplugin(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getImportModelData_EVString_CModelData(long pNativeObject, String method);
	native protected void register_getPluginName_void(long pNativeObject, String method);
	native protected void register_getRealResourceData_CResourceData_CResourceData(long pNativeObject, String method);
	native protected void register_getRealModelData_CModelData_CModelData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getImportModelData_EVString_CModelData(this.nativeObject.pointer, "getImportModelData_EVString_CModelData_callback");
			this.register_getPluginName_void(this.nativeObject.pointer, "getPluginName_void_callback");
			this.register_getRealResourceData_CResourceData_CResourceData(this.nativeObject.pointer, "getRealResourceData_CResourceData_CResourceData_callback");
			this.register_getRealModelData_CModelData_CModelData(this.nativeObject.pointer, "getRealModelData_CModelData_CModelData_callback");
		}
	}
	
	public static Imodeltemplateplugin fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imodeltemplateplugin obj = null;
 		if(baseObj instanceof Imodeltemplateplugin)
		{
			obj = (Imodeltemplateplugin)baseObj;
		} else {
			obj = new Imodeltemplateplugin(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IModelTemplatePlugin");
			obj.increaseCast();
		}

		return obj;
	}
}
