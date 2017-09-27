package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渲染几何体到顶点的对象
 */
public class RenderToVertexBuffer extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderToVertexBuffer", new RenderToVertexBufferClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderToVertexBufferProxy", new RenderToVertexBufferClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderToVertexBuffer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderToVertexBufferProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderToVertexBuffer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getVertexDeclaration_void(long pNativeObject);
	/**
	 * 获得顶点的声明
	 * @param  
	 */
	public com.earthview.world.graphic.VertexDeclaration getVertexDeclaration()
	{
		long returnValue = getVertexDeclaration_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	native private long getMaxVertexCount_void(long pNativeObject);
	/**
	 * 获得缓存拥有顶点的最大的数量
	 * @param  
	 */
	public long getMaxVertexCount()
	{
		long returnValue = getMaxVertexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxVertexCount_ev_uint32(long pNativeObject, long maxVertexCount);
	/**
	 * 设置缓存拥有顶点的最大的数量
	 * @param maxVertexCount 
	 */
	public void setMaxVertexCount(long maxVertexCount)
	{
		long maxVertexCountParamValue = maxVertexCount;
		setMaxVertexCount_ev_uint32(this.nativeObject.pointer, maxVertexCountParamValue);
	}
	native private int getOperationType_void(long pNativeObject);
	/**
	 * 获得这个对象产生的原始类型
	 * @param  
	 */
	public com.earthview.world.graphic.RenderOperation.OperationType getOperationType()
	{
		int returnValue = getOperationType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.RenderOperation.OperationType.toEnum(returnValue);
	}
	native private void setOperationType_OperationType(long pNativeObject, int operationType);
	/**
	 * 设置这个对象产生的原始类型
	 * @param operationType 
	 */
	public void setOperationType(com.earthview.world.graphic.RenderOperation.OperationType operationType)
	{
		int operationTypeParamValue = operationType.getValue();
		setOperationType_OperationType(this.nativeObject.pointer, operationTypeParamValue);
	}
	native private void setResetsEveryUpdate_ev_bool(long pNativeObject, boolean resetsEveryUpdate);
	/**
	 * 设置这个对象是否重新设置它的缓存当每次更新时
	 * @param resetsEveryUpdate 
	 */
	public void setResetsEveryUpdate(boolean resetsEveryUpdate)
	{
		boolean resetsEveryUpdateParamValue = resetsEveryUpdate;
		setResetsEveryUpdate_ev_bool(this.nativeObject.pointer, resetsEveryUpdateParamValue);
	}
	native private boolean getResetsEveryUpdate_void(long pNativeObject);
	/**
	 * 判断这个对象是否重新设置它的缓存当每次更新时
	 * @param mResetsEveryUpdate 
	 */
	public boolean getResetsEveryUpdate()
	{
		boolean returnValue = getResetsEveryUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void getRenderOperation_CRenderOperation_callback(long op)
	{
		com.earthview.world.graphic.RenderOperation opParamValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		opParamValue.setDelegate(true);
		opParamValue.setInstancePointer(new InstancePointer(op));
		IClassFactory opParamValueClassFactory = GlobalClassFactoryMap.get(opParamValue.getCppInstanceTypeName());
		if (opParamValueClassFactory != null)
		{
			opParamValue.setDelegate(true);
			opParamValue = (com.earthview.world.graphic.RenderOperation)opParamValueClassFactory.create();
			opParamValue.setDelegate(true);
			opParamValue.setInstancePointer(new InstancePointer(op));
		}
		getRenderOperation(opParamValue);
	}

	native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
	/**
	 * 获得缓存的渲染操作
	 * @param op 
	 */
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

	protected  void update_CSceneManager_callback(long sceneMgr)
	{
		com.earthview.world.graphic.SceneManager sceneMgrParamValue = (sceneMgr == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(sceneMgrParamValue != null)
		{
		sceneMgrParamValue.setDelegate(true);
		sceneMgrParamValue.setInstancePointer(new InstancePointer(sceneMgr));
		IClassFactory sceneMgrParamValueClassFactory = GlobalClassFactoryMap.get(sceneMgrParamValue.getCppInstanceTypeName());
		if (sceneMgrParamValueClassFactory != null)
		{
			sceneMgrParamValue.setDelegate(true);
			sceneMgrParamValue = (com.earthview.world.graphic.SceneManager)sceneMgrParamValueClassFactory.create();
			sceneMgrParamValue.setDelegate(true);
			sceneMgrParamValue.setInstancePointer(new InstancePointer(sceneMgr));
		}
		}
		update(sceneMgrParamValue);
	}

	native private void update_CSceneManager(long pNativeObject, long sceneMgr);
	/**
	 * 更新渲染顶点缓存的内容
	 * @param sceneMgr 
	 */
	public void update(com.earthview.world.graphic.SceneManager sceneMgr)
	{
		long sceneMgrParamValue = (sceneMgr == null ? 0L : sceneMgr.nativeObject.pointer);
		update_CSceneManager(this.nativeObject.pointer, sceneMgrParamValue);
	}
	native private void update_CSceneManager_NoVirtual(long pNativeObject, long sceneMgr);
	protected void update_NoVirtual(com.earthview.world.graphic.SceneManager sceneMgr)
	{
		long sceneMgrParamValue = (sceneMgr == null ? 0L : sceneMgr.nativeObject.pointer);
		update_CSceneManager_NoVirtual(this.nativeObject.pointer, sceneMgrParamValue);
	}

	protected  void reset_void_callback()
	{
		reset();
	}

	native private void reset_void(long pNativeObject);
	/**
	 * 重新设置顶点缓存的初始状态，在下一次更新时，渲染资源将最为输入值
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void reset_void_NoVirtual(long pNativeObject);
	protected void reset_NoVirtual()
	{
		reset_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setSourceRenderable_CRenderable(long pNativeObject, long ref_source);
	/**
	 * 设置对象的渲染资源
	 * @param  
	 */
	public void setSourceRenderable(com.earthview.world.graphic.Renderable ref_source)
	{
		long ref_sourceParamValue = (ref_source == null ? 0L : ref_source.nativeObject.pointer);
		setSourceRenderable_CRenderable(this.nativeObject.pointer, ref_sourceParamValue);
	}
	native private long getSourceRenderable_void(long pNativeObject);
	/**
	 * 获得对象的渲染资源
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable getSourceRenderable()
	{
		long returnValue = getSourceRenderable_void(this.nativeObject.pointer);
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
	native private long getRenderToBufferMaterial_void(long pNativeObject);
	/**
	 * 获得在顶点缓冲中用来渲染几何体的材质
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getRenderToBufferMaterial()
	{
		long returnValue = getRenderToBufferMaterial_void(this.nativeObject.pointer);
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
	native private void setRenderToBufferMaterialName_EVString(long pNativeObject, String materialName);
	/**
	 * 设置在顶点缓冲中用来渲染几何体的材质的名称
	 * @param materialName 材质的名称
	 */
	public void setRenderToBufferMaterialName(String materialName)
	{
		String materialNameParamValue = materialName;
		setRenderToBufferMaterialName_EVString(this.nativeObject.pointer, materialNameParamValue);
	}
	public RenderToVertexBuffer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderToVertexBuffer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_update_CSceneManager(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_update_CSceneManager(this.nativeObject.pointer, "update_CSceneManager_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
		}
	}
	
	public static RenderToVertexBuffer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderToVertexBuffer obj = null;
 		if(baseObj instanceof RenderToVertexBuffer)
		{
			obj = (RenderToVertexBuffer)baseObj;
		} else {
			obj = new RenderToVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderToVertexBuffer");
			obj.increaseCast();
		}

		return obj;
	}
}
