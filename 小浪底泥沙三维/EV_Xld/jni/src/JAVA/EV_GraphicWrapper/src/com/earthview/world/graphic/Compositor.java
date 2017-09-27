package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ClassrepresentingaEarthView::World::Graphic::CCompositorobject.Compositorsprovidethemeanstoflexibly"composite"thefinalrenderingresultfrommultiplescenerendersandintermediateoperationslikerenderingfullscreenquads.Thismakesitpossibletoapplypostfiltereffects,HDRIpostprocessing,andshadoweffectstoaCViewport.
 */
public class Compositor extends com.earthview.world.graphic.Resource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositor", new CompositorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCompositorProxy", new CompositorClassFactory());
	}

	public Compositor(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		BasePointer ref_loaderPtr = new BasePointer(ref_loader);
		list.add("ref_loader", ref_loaderPtr.get());
		Create("JCCompositorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Compositor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Compositor(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		Create("JCCompositorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Compositor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Compositor(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		Create("JCCompositorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Compositor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	//// Data types for internal lists
	public static class CompositionTechniques extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositor::CompositionTechniques", new CompositionTechniquesClassFactory());
		}

		public CompositionTechniques() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CompositionTechniques", null);
		}

		native private void push_back_CCompositionTechnique(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CCompositionTechnique(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public CompositionTechniques(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CompositionTechniques(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CompositionTechniques fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CompositionTechniques obj = null;
 			if(baseObj instanceof CompositionTechniques)
			{
				obj = (CompositionTechniques)baseObj;
			} else {
				obj = new CompositionTechniques(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CompositionTechniques");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CompositionTechniquesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CompositionTechniques emptyInstance = new CompositionTechniques(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CompositionTechniqueIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator", new CompositionTechniqueIteratorClassFactory());
		}

		public CompositionTechniqueIterator(com.earthview.world.graphic.Compositor.CompositionTechniques lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("CompositionTechniqueIterator", list);
		}

		public CompositionTechniqueIterator(com.earthview.world.graphic.Compositor.CompositionTechniqueIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("CompositionTechniqueIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
			}
			return __returnValue;
		}
		public CompositionTechniqueIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CompositionTechniqueIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CompositionTechniqueIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CompositionTechniqueIterator obj = null;
 			if(baseObj instanceof CompositionTechniqueIterator)
			{
				obj = (CompositionTechniqueIterator)baseObj;
			} else {
				obj = new CompositionTechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CompositionTechniqueIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CompositionTechniqueIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CompositionTechniqueIterator emptyInstance = new CompositionTechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long createTechnique_void(long pNativeObject);
	/**
	 * Createanewtechnique,andreturnapointertoit.
	 * @param  
	 * @return CCompositonTechniquepointer
	 */
	public com.earthview.world.graphic.CompositionTechnique createTechnique()
	{
		long returnValue = createTechnique_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
		}
		return __returnValue;
	}
	native private void removeTechnique_ev_size_t(long pNativeObject, long idx);
	/**
	 * Removeatechnique.Itwillalsobedestroyed.
	 * @param  name="idx"
	 */
	public void removeTechnique(long idx)
	{
		long idxParamValue = idx;
		removeTechnique_ev_size_t(this.nativeObject.pointer, idxParamValue);
	}
	native private long getTechnique_ev_size_t(long pNativeObject, long idx);
	/**
	 * Getatechnique.
	 * @param  name="idx"
	 * @return EarthView::World::Graphic::CCompositionTechniquepointer
	 */
	public com.earthview.world.graphic.CompositionTechnique getTechnique(long idx)
	{
		long idxParamValue = idx;
		long returnValue = getTechnique_ev_size_t(this.nativeObject.pointer, idxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
		}
		return __returnValue;
	}
	native private long getNumTechniques_void(long pNativeObject);
	/**
	 * Getthenumberoftechniques.
	 * @param  
	 */
	public long getNumTechniques()
	{
		long returnValue = getNumTechniques_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeAllTechniques_void(long pNativeObject);
	/**
	 * Removealltechniques
	 * @param  
	 */
	public void removeAllTechniques()
	{
		removeAllTechniques_void(this.nativeObject.pointer);
	}
	native private long getTechniqueIterator_void(long pNativeObject);
	/**
	 * GetaniteratorovertheEarthView::World::Graphic::CCompositor::CompositionTechniquesinthiscompositor.
	 * @param  
	 * @return EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator
	 */
	public com.earthview.world.graphic.Compositor.CompositionTechniqueIterator getTechniqueIterator()
	{
		long returnValue = getTechniqueIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Compositor.CompositionTechniqueIterator __returnValue = new com.earthview.world.graphic.Compositor.CompositionTechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CompositionTechniqueIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Compositor.CompositionTechniqueIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CompositionTechniqueIterator");
		}
		return __returnValue;
	}
	native private long getSupportedTechnique_ev_size_t(long pNativeObject, long idx);
	/**
	 * Getasupportedtechnique.@remarksThesupportedtechniquelistisonlyavailableafterthiscompositorhasbeencompiled,whichtypicallyhappensonloadingit.Therefore,ifthismethodreturnsanemptylist,trycallingCCompositor::load.
	 * @param  name="idx"
	 */
	public com.earthview.world.graphic.CompositionTechnique getSupportedTechnique(long idx)
	{
		long idxParamValue = idx;
		long returnValue = getSupportedTechnique_ev_size_t(this.nativeObject.pointer, idxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
		}
		return __returnValue;
	}
	native private long getNumSupportedTechniques_void(long pNativeObject);
	/**
	 * Getthenumberofsupportedtechniques.@remarksThesupportedtechniquelistisonlyavailableafterthiscompositorhasbeencompiled,whichtypicallyhappensonloadingit.Therefore,ifthismethodreturnsanemptylist,trycallingCCompositor::load.
	 * @param  
	 * @return Techniquenum
	 */
	public long getNumSupportedTechniques()
	{
		long returnValue = getNumSupportedTechniques_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSupportedTechniqueIterator_void(long pNativeObject);
	/**
	 * GetsaniteratoroveralltheEarthView::World::Graphic::CCompositor::CompositionTechniqueswhicharesupportedbythecurrentcard.@remarksThesupportedtechniquelistisonlyavailableafterthiscompositorhasbeencompiled,whichtypicallyhappensonloadingit.Therefore,ifthismethodreturnsanemptylist,trycallingCCompositor::load.
	 * @param  
	 */
	public com.earthview.world.graphic.Compositor.CompositionTechniqueIterator getSupportedTechniqueIterator()
	{
		long returnValue = getSupportedTechniqueIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Compositor.CompositionTechniqueIterator __returnValue = new com.earthview.world.graphic.Compositor.CompositionTechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CompositionTechniqueIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Compositor.CompositionTechniqueIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CompositionTechniqueIterator");
		}
		return __returnValue;
	}
	native private long getSupportedTechnique_EVString(long pNativeObject, String schemeName);
	/**
	 * Getapointertoasupportedtechniqueforagivenscheme.@remarks	Ifthereisnospecificsupportedtechniquewiththisschemename,	thenthefirstsupportedtechniquewithnospecificschemewillbereturned.
	 * @param  name="schemeName"Theschemenameyouarelookingfor.Blankmeansto	lookfortechniqueswithnoschemeassociated
	 */
	public com.earthview.world.graphic.CompositionTechnique getSupportedTechnique(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		long returnValue = getSupportedTechnique_EVString(this.nativeObject.pointer, schemeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
		}
		return __returnValue;
	}
	native private long getSupportedTechnique_void(long pNativeObject);
	public com.earthview.world.graphic.CompositionTechnique getSupportedTechnique()
	{
		long returnValue = getSupportedTechnique_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
		}
		return __returnValue;
	}
	native private String getTextureInstanceName_EVString_ev_size_t(long pNativeObject, String name, long mrtIndex);
	/**
	 * Gettheinstancenameforaglobaltexture.
	 * @param  name="name"Thenameofthetextureintheoriginalcompositordefinition
	 * @param  name="mrtIndex"IfnameidentifiesaMRT,whichtextureattachmenttoretrieve
	 * @return Theinstancenameforthetexture,correspondstoarealtexture
	 */
	public String getTextureInstanceName(String name, long mrtIndex)
	{
		String nameParamValue = name;
		long mrtIndexParamValue = mrtIndex;
		String returnValue = getTextureInstanceName_EVString_ev_size_t(this.nativeObject.pointer, nameParamValue, mrtIndexParamValue);
		return returnValue;
	}
	native private long getTextureInstance_EVString_ev_size_t(long pNativeObject, String name, long mrtIndex);
	/**
	 * Gettheinstanceofaglobaltexture.
	 * @param  name="name"Thenameofthetextureintheoriginalcompositordefinition
	 * @param  name="mrtIndex"IfnameidentifiesaMRT,whichtextureattachmenttoretrieve
	 * @return Thetexturepointer,correspondstoarealtexture
	 */
	public com.earthview.world.graphic.TexturePtr getTextureInstance(String name, long mrtIndex)
	{
		String nameParamValue = name;
		long mrtIndexParamValue = mrtIndex;
		long returnValue = getTextureInstance_EVString_ev_size_t(this.nativeObject.pointer, nameParamValue, mrtIndexParamValue);
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
	native private long getRenderTarget_EVString(long pNativeObject, String name);
	/**
	 * Gettherendertargetforagivenrendertexturename.remarks	Youcanusethistoaddlistenersetc,butdonotuseittoupdatethe	targetsmanuallyoranyothermodifications,thecompositorinstance	isinchargeofthis.
	 * @param  name="name"
	 */
	public com.earthview.world.graphic.RenderTarget getRenderTarget(String name)
	{
		String nameParamValue = name;
		long returnValue = getRenderTarget_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	native private void loadImpl_void(long pNativeObject);
	//// @copydoc CResource::loadImpl
	public void loadImpl()
	{
		loadImpl_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void_NoVirtual(long pNativeObject);
	protected void loadImpl_NoVirtual()
	{
		loadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unloadImpl_void(long pNativeObject);
	//// @copydoc CResource::unloadImpl
	public void unloadImpl()
	{
		unloadImpl_void(this.nativeObject.pointer);
	}
	native private void unloadImpl_void_NoVirtual(long pNativeObject);
	protected void unloadImpl_NoVirtual()
	{
		unloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long calculateSize_void(long pNativeObject);
	//// @copydoc CResource::calculateSize
	public long calculateSize()
	{
		long returnValue = calculateSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long calculateSize_void_NoVirtual(long pNativeObject);
	protected long calculateSize_NoVirtual()
	{
		long returnValue = calculateSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Compositor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Compositor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 加载前调用的函数
	 */
	public void preLoadImpl()
	{
		super.preLoadImpl_NoVirtual();
	}
	/**
	 * 加载后调用的函数
	 */
	public void postLoadImpl()
	{
		super.postLoadImpl_NoVirtual();
	}
	/**
	 * 卸载前调用的函数
	 */
	public void preUnloadImpl()
	{
		super.preUnloadImpl_NoVirtual();
	}
	/**
	 * 卸载后调用的函数
	 */
	public void postUnloadImpl()
	{
		super.postUnloadImpl_NoVirtual();
	}
	/**
	 * 准备函数的实现
	 */
	public void prepareImpl()
	{
		super.prepareImpl_NoVirtual();
	}
	/**
	 * 准备函数的逆过程的实现
	 */
	public void unprepareImpl()
	{
		super.unprepareImpl_NoVirtual();
	}
	/**
	 * 准备(读取资源文件)
	 */
	public void prepare(boolean backgroundThread)
	{
		super.prepare_NoVirtual(backgroundThread);
	}
	public void prepare()
	{
		super.prepare_NoVirtual();
	}
	/**
	 * 加载
	 */
	public void load(boolean backgroundThread)
	{
		super.load_NoVirtual(backgroundThread);
	}
	public void load()
	{
		super.load_NoVirtual();
	}
	/**
	 * 重新加载
	 */
	public void reload()
	{
		super.reload_NoVirtual();
	}
	/**
	 * 是否可重新加载
	 */
	public boolean isReloadable()
	{
		return super.isReloadable_NoVirtual();
	}
	/**
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		return super.isManuallyLoaded_NoVirtual();
	}
	/**
	 * 卸载
	 */
	public void unload()
	{
		super.unload_NoVirtual();
	}
	/**
	 * 获得资源大小
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 确保在使用
	 */
	public void touch()
	{
		super.touch_NoVirtual();
	}
	/**
	 * 获得资源名
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获得资源句柄
	 */
	public ULongPointer getHandle()
	{
		return super.getHandle_NoVirtual();
	}
	/**
	 * 是否准备就绪
	 */
	public boolean isPrepared()
	{
		return super.isPrepared_NoVirtual();
	}
	/**
	 * 是否已加载
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否正在加载
	 */
	public boolean isLoading()
	{
		return super.isLoading_NoVirtual();
	}
	/**
	 * 获得加载状态
	 */
	public com.earthview.world.graphic.Resource.LoadingState getLoadingState()
	{
		return super.getLoadingState_NoVirtual();
	}
	/**
	 * 是否为后台加载
	 */
	public boolean isBackgroundLoaded()
	{
		return super.isBackgroundLoaded_NoVirtual();
	}
	/**
	 * 设置为后台加载
	 */
	public void setBackgroundLoaded(boolean bl)
	{
		super.setBackgroundLoaded_NoVirtual(bl);
	}
	public void escalateLoading()
	{
		super.escalateLoading_NoVirtual();
	}
	/**
	 * 添加监听
	 */
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		super.addListener_NoVirtual(ref_lis);
	}
	/**
	 * 移除监听
	 */
	public void removeListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		super.removeListener_NoVirtual(lis);
	}
	/**
	 * 获得组名
	 */
	public String getGroup()
	{
		return super.getGroup_NoVirtual();
	}
	/**
	 * 更换资源组
	 */
	public void changeGroupOwnership(String newGroup)
	{
		super.changeGroupOwnership_NoVirtual(newGroup);
	}
	/**
	 * 获得创建者(资源管理器)
	 */
	public com.earthview.world.graphic.ResourceManager getCreator()
	{
		return super.getCreator_NoVirtual();
	}
	public String getOrigin()
	{
		return super.getOrigin_NoVirtual();
	}
	//// Notify this resource of it's origin
	public void _notifyOrigin(String origin)
	{
		super._notifyOrigin_NoVirtual(origin);
	}
	public long getStateCount()
	{
		return super.getStateCount_NoVirtual();
	}
	/**
	 * 将状态置为脏
	 */
	public void _dirtyState()
	{
		super._dirtyState_NoVirtual();
	}
	/**
	 * 告知监听者加载完成
	 */
	public void _fireLoadingComplete(boolean wasBackgroundLoaded)
	{
		super._fireLoadingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者准备就绪
	 */
	public void _firePreparingComplete(boolean wasBackgroundLoaded)
	{
		super._firePreparingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者卸载完成
	 */
	public void _fireUnloadingComplete()
	{
		super._fireUnloadingComplete_NoVirtual();
	}
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_preLoadImpl_void(long pNativeObject, String method);
	native protected void register_postLoadImpl_void(long pNativeObject, String method);
	native protected void register_preUnloadImpl_void(long pNativeObject, String method);
	native protected void register_postUnloadImpl_void(long pNativeObject, String method);
	native protected void register_prepareImpl_void(long pNativeObject, String method);
	native protected void register_unprepareImpl_void(long pNativeObject, String method);
	native protected void register_loadImpl_void(long pNativeObject, String method);
	native protected void register_unloadImpl_void(long pNativeObject, String method);
	native protected void register_calculateSize_void(long pNativeObject, String method);
	native protected void register_prepare_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_void(long pNativeObject, String method);
	native protected void register_load_ev_bool(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_reload_void(long pNativeObject, String method);
	native protected void register_isReloadable_void(long pNativeObject, String method);
	native protected void register_isManuallyLoaded_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_touch_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getHandle_void(long pNativeObject, String method);
	native protected void register_isPrepared_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isLoading_void(long pNativeObject, String method);
	native protected void register_getLoadingState_void(long pNativeObject, String method);
	native protected void register_isBackgroundLoaded_void(long pNativeObject, String method);
	native protected void register_setBackgroundLoaded_ev_bool(long pNativeObject, String method);
	native protected void register_escalateLoading_void(long pNativeObject, String method);
	native protected void register_addListener_CResourceListener(long pNativeObject, String method);
	native protected void register_removeListener_CResourceListener(long pNativeObject, String method);
	native protected void register_getGroup_void(long pNativeObject, String method);
	native protected void register_changeGroupOwnership_EVString(long pNativeObject, String method);
	native protected void register_getCreator_void(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register__notifyOrigin_EVString(long pNativeObject, String method);
	native protected void register_getStateCount_void(long pNativeObject, String method);
	native protected void register__dirtyState_void(long pNativeObject, String method);
	native protected void register__fireLoadingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__firePreparingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__fireUnloadingComplete_void(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preLoadImpl_void(this.nativeObject.pointer, "preLoadImpl_void_callback");
			this.register_postLoadImpl_void(this.nativeObject.pointer, "postLoadImpl_void_callback");
			this.register_preUnloadImpl_void(this.nativeObject.pointer, "preUnloadImpl_void_callback");
			this.register_postUnloadImpl_void(this.nativeObject.pointer, "postUnloadImpl_void_callback");
			this.register_prepareImpl_void(this.nativeObject.pointer, "prepareImpl_void_callback");
			this.register_unprepareImpl_void(this.nativeObject.pointer, "unprepareImpl_void_callback");
			this.register_loadImpl_void(this.nativeObject.pointer, "loadImpl_void_callback");
			this.register_unloadImpl_void(this.nativeObject.pointer, "unloadImpl_void_callback");
			this.register_calculateSize_void(this.nativeObject.pointer, "calculateSize_void_callback");
			this.register_prepare_ev_bool(this.nativeObject.pointer, "prepare_ev_bool_callback");
			this.register_prepare_void(this.nativeObject.pointer, "prepare_void_callback");
			this.register_load_ev_bool(this.nativeObject.pointer, "load_ev_bool_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_reload_void(this.nativeObject.pointer, "reload_void_callback");
			this.register_isReloadable_void(this.nativeObject.pointer, "isReloadable_void_callback");
			this.register_isManuallyLoaded_void(this.nativeObject.pointer, "isManuallyLoaded_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_touch_void(this.nativeObject.pointer, "touch_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getHandle_void(this.nativeObject.pointer, "getHandle_void_callback");
			this.register_isPrepared_void(this.nativeObject.pointer, "isPrepared_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isLoading_void(this.nativeObject.pointer, "isLoading_void_callback");
			this.register_getLoadingState_void(this.nativeObject.pointer, "getLoadingState_void_callback");
			this.register_isBackgroundLoaded_void(this.nativeObject.pointer, "isBackgroundLoaded_void_callback");
			this.register_setBackgroundLoaded_ev_bool(this.nativeObject.pointer, "setBackgroundLoaded_ev_bool_callback");
			this.register_escalateLoading_void(this.nativeObject.pointer, "escalateLoading_void_callback");
			this.register_addListener_CResourceListener(this.nativeObject.pointer, "addListener_CResourceListener_callback");
			this.register_removeListener_CResourceListener(this.nativeObject.pointer, "removeListener_CResourceListener_callback");
			this.register_getGroup_void(this.nativeObject.pointer, "getGroup_void_callback");
			this.register_changeGroupOwnership_EVString(this.nativeObject.pointer, "changeGroupOwnership_EVString_callback");
			this.register_getCreator_void(this.nativeObject.pointer, "getCreator_void_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register__notifyOrigin_EVString(this.nativeObject.pointer, "_notifyOrigin_EVString_callback");
			this.register_getStateCount_void(this.nativeObject.pointer, "getStateCount_void_callback");
			this.register__dirtyState_void(this.nativeObject.pointer, "_dirtyState_void_callback");
			this.register__fireLoadingComplete_ev_bool(this.nativeObject.pointer, "_fireLoadingComplete_ev_bool_callback");
			this.register__firePreparingComplete_ev_bool(this.nativeObject.pointer, "_firePreparingComplete_ev_bool_callback");
			this.register__fireUnloadingComplete_void(this.nativeObject.pointer, "_fireUnloadingComplete_void_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static Compositor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Compositor obj = null;
 		if(baseObj instanceof Compositor)
		{
			obj = (Compositor)baseObj;
		} else {
			obj = new Compositor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositor");
			obj.increaseCast();
		}

		return obj;
	}
}
