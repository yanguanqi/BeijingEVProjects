package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 链状轨迹类节点轨迹一些说明和相关操作
 */
public class RibbonTrail extends com.earthview.world.graphic.BillboardChain {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRibbonTrail", new RibbonTrailClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRibbonTrailProxy", new RibbonTrailClassFactory());
	}

	/**
	 * 链状轨迹监听帧类
	 */
	public static class RibbonTrailListener extends com.earthview.world.graphic.Node.NodeListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRibbonTrail::CRibbonTrailListener", new RibbonTrailListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRibbonTrail::JCRibbonTrailListenerProxy", new RibbonTrailListenerClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 广告板链指针
		 */
		public RibbonTrailListener(com.earthview.world.graphic.RibbonTrail ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCRibbonTrailListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.RibbonTrail$RibbonTrailListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void nodeUpdated_CNode(long pNativeObject, long node);
		/**
		 * 节点更新
		 * @param node 节点
		 */
		public void nodeUpdated(com.earthview.world.graphic.Node node)
		{
			long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
			nodeUpdated_CNode(this.nativeObject.pointer, nodeParamValue);
		}
		native private void nodeUpdated_CNode_NoVirtual(long pNativeObject, long node);
		protected void nodeUpdated_NoVirtual(com.earthview.world.graphic.Node node)
		{
			long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
			nodeUpdated_CNode_NoVirtual(this.nativeObject.pointer, nodeParamValue);
		}

		native private void nodeDestroyed_CNode(long pNativeObject, long node);
		/**
		 * 节点销毁
		 * @param node 节点
		 */
		public void nodeDestroyed(com.earthview.world.graphic.Node node)
		{
			long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
			nodeDestroyed_CNode(this.nativeObject.pointer, nodeParamValue);
		}
		native private void nodeDestroyed_CNode_NoVirtual(long pNativeObject, long node);
		protected void nodeDestroyed_NoVirtual(com.earthview.world.graphic.Node node)
		{
			long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
			nodeDestroyed_CNode_NoVirtual(this.nativeObject.pointer, nodeParamValue);
		}

		public RibbonTrailListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RibbonTrailListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 挂接节点
		 * @param pNode 
		 */
		public void nodeAttached(com.earthview.world.graphic.Node pNode)
		{
			super.nodeAttached_NoVirtual(pNode);
		}
		/**
		 * 脱钩节点
		 * @param pNode 
		 */
		public void nodeDetached(com.earthview.world.graphic.Node pNode)
		{
			super.nodeDetached_NoVirtual(pNode);
		}
		/**
		 * 移动节点
		 * @param pNode 
		 */
		public void nodeMoved(com.earthview.world.graphic.Node pNode)
		{
			super.nodeMoved_NoVirtual(pNode);
		}
		
		native protected void register_nodeUpdated_CNode(long pNativeObject, String method);
		native protected void register_nodeDestroyed_CNode(long pNativeObject, String method);
		native protected void register_nodeAttached_CNode(long pNativeObject, String method);
		native protected void register_nodeDetached_CNode(long pNativeObject, String method);
		native protected void register_nodeMoved_CNode(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_nodeUpdated_CNode(this.nativeObject.pointer, "nodeUpdated_CNode_callback");
				this.register_nodeDestroyed_CNode(this.nativeObject.pointer, "nodeDestroyed_CNode_callback");
				this.register_nodeAttached_CNode(this.nativeObject.pointer, "nodeAttached_CNode_callback");
				this.register_nodeDetached_CNode(this.nativeObject.pointer, "nodeDetached_CNode_callback");
				this.register_nodeMoved_CNode(this.nativeObject.pointer, "nodeMoved_CNode_callback");
			}
		}
		
		public static RibbonTrailListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RibbonTrailListener obj = null;
 			if(baseObj instanceof RibbonTrailListener)
			{
				obj = (RibbonTrailListener)baseObj;
			} else {
				obj = new RibbonTrailListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRibbonTrailListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RibbonTrailListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RibbonTrailListener emptyInstance = new RibbonTrailListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getNodeListenerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.RibbonTrail.RibbonTrailListener getNodeListenerPtr()
	{
		long returnValue = getNodeListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RibbonTrail.RibbonTrailListener __returnValue = new com.earthview.world.graphic.RibbonTrail.RibbonTrailListener(CreatedWhenConstruct.CWC_NotToCreate, "CRibbonTrailListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail.RibbonTrailListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRibbonTrailListener");
		}
		return __returnValue;
	}
	native private long getNodeListener_void(long pNativeObject);
	public com.earthview.world.graphic.RibbonTrail.RibbonTrailListener getNodeListener()
	{
		long returnValue = getNodeListener_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RibbonTrail.RibbonTrailListener __returnValue = new com.earthview.world.graphic.RibbonTrail.RibbonTrailListener(CreatedWhenConstruct.CWC_NotToCreate, "CRibbonTrailListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail.RibbonTrailListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRibbonTrailListener");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 元素链的最大存储
	 * @param numberOfChains 链中的编号
	 * @param useTextureCoords 是否使用纹理坐标
	 * @param useColours 是否使用颜色
	 */
	public RibbonTrail(String name, long maxElements, long numberOfChains, boolean useTextureCoords, boolean useColours) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		BasePointer numberOfChainsPtr = new BasePointer(numberOfChains);
		list.add("numberOfChains", numberOfChainsPtr.get());
		BasePointer useTextureCoordsPtr = new BasePointer(useTextureCoords);
		list.add("useTextureCoords", useTextureCoordsPtr.get());
		BasePointer useColoursPtr = new BasePointer(useColours);
		list.add("useColours", useColoursPtr.get());
		Create("JCRibbonTrailProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RibbonTrail".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 元素链的最大存储
	 * @param numberOfChains 链中的编号
	 * @param useTextureCoords 是否使用纹理坐标
	 */
	public RibbonTrail(String name, long maxElements, long numberOfChains, boolean useTextureCoords) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		BasePointer numberOfChainsPtr = new BasePointer(numberOfChains);
		list.add("numberOfChains", numberOfChainsPtr.get());
		BasePointer useTextureCoordsPtr = new BasePointer(useTextureCoords);
		list.add("useTextureCoords", useTextureCoordsPtr.get());
		Create("JCRibbonTrailProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RibbonTrail".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 元素链的最大存储
	 * @param numberOfChains 链中的编号
	 */
	public RibbonTrail(String name, long maxElements, long numberOfChains) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		BasePointer numberOfChainsPtr = new BasePointer(numberOfChains);
		list.add("numberOfChains", numberOfChainsPtr.get());
		Create("JCRibbonTrailProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RibbonTrail".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 元素链的最大存储
	 */
	public RibbonTrail(String name, long maxElements) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		Create("JCRibbonTrailProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RibbonTrail".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 */
	public RibbonTrail(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCRibbonTrailProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RibbonTrail".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	///typedef vector<CNode*> NodeList;
	/// <summary>
	/// 节点列表类
	/// </summary>
	public static class NodeList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRibbonTrail::NodeList", new NodeListClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public NodeList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NodeList", null);
		}

		native private void push_back_CNode(long pNativeObject, long ref_t);
		/**
		 * 在节点列表后面增加一个节点
		 * @param t 增加的节点
		 */
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.Node> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CNode(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除当前节点列表最后一个节点
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回当前节点列表第一个节点的引用
		 * @param  
		 * @return 第一个节点的引用
		 */
		public NativeObjectPointer<com.earthview.world.graphic.Node> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回当前节点列表最后一个节点的引用
		 * @param  
		 * @return 最后一个节点的引用
		 */
		public NativeObjectPointer<com.earthview.world.graphic.Node> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CNode(long pNativeObject, long pos, long ref_t);
		/**
		 * 在当前节点列表第pos元素之后插入节点t
		 * @param pos 迭代器下标
		 * @param t 要插入的节点
		 */
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.Node> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CNode(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 移除当前节点列表中的某一个节点
		 * @param pos 该移除节点所在迭代器位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断当前节点列表是否为空
		 * @param  
		 * @return 如果为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.Node> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.Node> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Node> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Node>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 当前节点列表存储节点的大小
		 * @param  
		 * @return 当前广告版节点的个数
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 调整节点列表存储元素的大小
		 * @param newSize 新的列表存储节点的个数
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 重置节点列表存储大小
		 * @param  
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空列表中的节点
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public NodeList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NodeList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeList obj = null;
 			if(baseObj instanceof NodeList)
			{
				obj = (NodeList)baseObj;
			} else {
				obj = new NodeList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NodeList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeList emptyInstance = new NodeList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CConstVectorIterator<NodeList> NodeIterator;
	/// <summary>
	/// 节点迭代器类
	/// </summary>
	public static class NodeIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRibbonTrail::NodeIterator", new NodeIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 节点列表
		 */
		public NodeIterator(com.earthview.world.graphic.RibbonTrail.NodeList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("NodeIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 节点迭代器
		 */
		public NodeIterator(com.earthview.world.graphic.RibbonTrail.NodeIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("NodeIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 是否有更多的元素
		 * @param  
		 * @return 有返回true，否则返回false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.Node getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
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
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.Node next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Node getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
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
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Node getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
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
		public NodeIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NodeIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeIterator obj = null;
 			if(baseObj instanceof NodeIterator)
			{
				obj = (NodeIterator)baseObj;
			} else {
				obj = new NodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NodeIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeIterator emptyInstance = new NodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private boolean getAutoListenToParentNode_void(long pNativeObject);
	/**
	 * 获取是否自动监听父节点
	 * @param  
	 */
	public boolean getAutoListenToParentNode()
	{
		boolean returnValue = getAutoListenToParentNode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setAutoListenToParentNode_ev_bool(long pNativeObject, boolean autoListen);
	/**
	 * 设置是否自动监听父节点如果为true，相当于自动调用addNode一次;默认为false.
	 * @param  
	 */
	public boolean setAutoListenToParentNode(boolean autoListen)
	{
		boolean autoListenParamValue = autoListen;
		boolean returnValue = setAutoListenToParentNode_ev_bool(this.nativeObject.pointer, autoListenParamValue);
		return returnValue;
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

	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}
	native private void _notifyAttached_CNode_ev_bool_NoVirtual(long pNativeObject, long ref_parent, boolean isTagPoint);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}

	protected  void addNode_CNode_callback(long ref_n)
	{
		com.earthview.world.graphic.Node ref_nParamValue = (ref_n == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_nParamValue != null)
		{
		ref_nParamValue.setDelegate(true);
		ref_nParamValue.setInstancePointer(new InstancePointer(ref_n));
		IClassFactory ref_nParamValueClassFactory = GlobalClassFactoryMap.get(ref_nParamValue.getCppInstanceTypeName());
		if (ref_nParamValueClassFactory != null)
		{
			ref_nParamValue.setDelegate(true);
			ref_nParamValue = (com.earthview.world.graphic.Node)ref_nParamValueClassFactory.create();
			ref_nParamValue.setDelegate(true);
			ref_nParamValue.setInstancePointer(new InstancePointer(ref_n));
		}
		}
		addNode(ref_nParamValue);
	}

	native private void addNode_CNode(long pNativeObject, long ref_n);
	/**
	 * 增加节点
	 * @param n 节点编号
	 */
	public void addNode(com.earthview.world.graphic.Node ref_n)
	{
		long ref_nParamValue = (ref_n == null ? 0L : ref_n.nativeObject.pointer);
		addNode_CNode(this.nativeObject.pointer, ref_nParamValue);
	}
	native private void addNode_CNode_NoVirtual(long pNativeObject, long ref_n);
	protected void addNode_NoVirtual(com.earthview.world.graphic.Node ref_n)
	{
		long ref_nParamValue = (ref_n == null ? 0L : ref_n.nativeObject.pointer);
		addNode_CNode_NoVirtual(this.nativeObject.pointer, ref_nParamValue);
	}

	protected  void removeNode_CNode_callback(long n)
	{
		com.earthview.world.graphic.Node nParamValue = (n == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nParamValue != null)
		{
		nParamValue.setDelegate(true);
		nParamValue.setInstancePointer(new InstancePointer(n));
		IClassFactory nParamValueClassFactory = GlobalClassFactoryMap.get(nParamValue.getCppInstanceTypeName());
		if (nParamValueClassFactory != null)
		{
			nParamValue.setDelegate(true);
			nParamValue = (com.earthview.world.graphic.Node)nParamValueClassFactory.create();
			nParamValue.setDelegate(true);
			nParamValue.setInstancePointer(new InstancePointer(n));
		}
		}
		removeNode(nParamValue);
	}

	native private void removeNode_CNode(long pNativeObject, long n);
	/**
	 * 移除节点
	 * @param n 节点编号
	 */
	public void removeNode(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		removeNode_CNode(this.nativeObject.pointer, nParamValue);
	}
	native private void removeNode_CNode_NoVirtual(long pNativeObject, long n);
	protected void removeNode_NoVirtual(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		removeNode_CNode_NoVirtual(this.nativeObject.pointer, nParamValue);
	}

	protected  long getNodeIterator_void_callback()
	{
		com.earthview.world.graphic.RibbonTrail.NodeIterator returnValue = getNodeIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getNodeIterator_void(long pNativeObject);
	/**
	 * 获取节点迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.RibbonTrail.NodeIterator getNodeIterator()
	{
		long returnValue = getNodeIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RibbonTrail.NodeIterator __returnValue = new com.earthview.world.graphic.RibbonTrail.NodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "NodeIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail.NodeIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "NodeIterator");
		}
		return __returnValue;
	}
	native private long getNodeIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RibbonTrail.NodeIterator getNodeIterator_NoVirtual()
	{
		long returnValue = getNodeIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.RibbonTrail.NodeIterator __returnValue = new com.earthview.world.graphic.RibbonTrail.NodeIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "NodeIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail.NodeIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "NodeIterator");
		}
		return __returnValue;
	}

	protected  long getChainIndexForNode_CNode_callback(long n)
	{
		com.earthview.world.graphic.Node nParamValue = (n == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nParamValue != null)
		{
		nParamValue.setDelegate(true);
		nParamValue.setInstancePointer(new InstancePointer(n));
		IClassFactory nParamValueClassFactory = GlobalClassFactoryMap.get(nParamValue.getCppInstanceTypeName());
		if (nParamValueClassFactory != null)
		{
			nParamValue.setDelegate(true);
			nParamValue = (com.earthview.world.graphic.Node)nParamValueClassFactory.create();
			nParamValue.setDelegate(true);
			nParamValue.setInstancePointer(new InstancePointer(n));
		}
		}
		long returnValue = getChainIndexForNode(nParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getChainIndexForNode_CNode(long pNativeObject, long n);
	/**
	 * 对节点获取链的索引
	 * @param n 节点
	 * @return 节点的多少
	 */
	public long getChainIndexForNode(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		long returnValue = getChainIndexForNode_CNode(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}
	native private long getChainIndexForNode_CNode_NoVirtual(long pNativeObject, long n);
	protected long getChainIndexForNode_NoVirtual(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		long returnValue = getChainIndexForNode_CNode_NoVirtual(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}

	protected  void setTrailLength_Real_callback(double len)
	{
		double lenParamValue = len;
		setTrailLength(lenParamValue);
	}

	native private void setTrailLength_Real(long pNativeObject, double len);
	/**
	 * 设置一个轨迹的长度
	 * @param len 长度
	 */
	public void setTrailLength(double len)
	{
		double lenParamValue = len;
		setTrailLength_Real(this.nativeObject.pointer, lenParamValue);
	}
	native private void setTrailLength_Real_NoVirtual(long pNativeObject, double len);
	protected void setTrailLength_NoVirtual(double len)
	{
		double lenParamValue = len;
		setTrailLength_Real_NoVirtual(this.nativeObject.pointer, lenParamValue);
	}

	protected  double getTrailLength_void_callback()
	{
		double returnValue = getTrailLength();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTrailLength_void(long pNativeObject);
	/**
	 * 获取一个轨迹的长度
	 * @param  
	 * @return 长度
	 */
	public double getTrailLength()
	{
		double returnValue = getTrailLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTrailLength_void_NoVirtual(long pNativeObject);
	protected double getTrailLength_NoVirtual()
	{
		double returnValue = getTrailLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMaxChainElements_ev_size_t(long pNativeObject, long maxElements);
	/**
	 * 设置最大链的元素大小
	 * @param  
	 */
	public void setMaxChainElements(long maxElements)
	{
		long maxElementsParamValue = maxElements;
		setMaxChainElements_ev_size_t(this.nativeObject.pointer, maxElementsParamValue);
	}
	native private void setMaxChainElements_ev_size_t_NoVirtual(long pNativeObject, long maxElements);
	protected void setMaxChainElements_NoVirtual(long maxElements)
	{
		long maxElementsParamValue = maxElements;
		setMaxChainElements_ev_size_t_NoVirtual(this.nativeObject.pointer, maxElementsParamValue);
	}

	native private void setNumberOfChains_ev_size_t(long pNativeObject, long numChains);
	/**
	 * 设置链的编号
	 * @param numChains 编号
	 */
	public void setNumberOfChains(long numChains)
	{
		long numChainsParamValue = numChains;
		setNumberOfChains_ev_size_t(this.nativeObject.pointer, numChainsParamValue);
	}
	native private void setNumberOfChains_ev_size_t_NoVirtual(long pNativeObject, long numChains);
	protected void setNumberOfChains_NoVirtual(long numChains)
	{
		long numChainsParamValue = numChains;
		setNumberOfChains_ev_size_t_NoVirtual(this.nativeObject.pointer, numChainsParamValue);
	}

	native private void clearChain_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 清空链中的元素
	 * @param chainIndex 索引
	 */
	public void clearChain(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		clearChain_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
	}
	native private void clearChain_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected void clearChain_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		clearChain_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
	}

	native private void setNeedUpdateDistance_Real(long pNativeObject, double distance);
	/**
	 * 设置判断飘带的节点是否移动的条件。
	 * @param distance 距离
	 */
	public void setNeedUpdateDistance(double distance)
	{
		double distanceParamValue = distance;
		setNeedUpdateDistance_Real(this.nativeObject.pointer, distanceParamValue);
	}
	protected  void setInitialColour_ev_size_t_CColourValue_callback(long chainIndex, long col)
	{
		long chainIndexParamValue = chainIndex;
		com.earthview.world.graphic.ColourValue colParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colParamValue.setDelegate(true);
		colParamValue.setInstancePointer(new InstancePointer(col));
		IClassFactory colParamValueClassFactory = GlobalClassFactoryMap.get(colParamValue.getCppInstanceTypeName());
		if (colParamValueClassFactory != null)
		{
			colParamValue.setDelegate(true);
			colParamValue = (com.earthview.world.graphic.ColourValue)colParamValueClassFactory.create();
			colParamValue.setDelegate(true);
			colParamValue.setInstancePointer(new InstancePointer(col));
		}
		setInitialColour(chainIndexParamValue, colParamValue);
	}

	native private void setInitialColour_ev_size_t_CColourValue(long pNativeObject, long chainIndex, long col);
	/**
	 * 设置最初的颜色
	 * @param chainIndex 索引
	 * @param col 颜色的值
	 */
	public void setInitialColour(long chainIndex, com.earthview.world.graphic.ColourValue col)
	{
		long chainIndexParamValue = chainIndex;
		long colParamValue = col.nativeObject.pointer;
		setInitialColour_ev_size_t_CColourValue(this.nativeObject.pointer, chainIndexParamValue, colParamValue);
	}
	native private void setInitialColour_ev_size_t_CColourValue_NoVirtual(long pNativeObject, long chainIndex, long col);
	protected void setInitialColour_NoVirtual(long chainIndex, com.earthview.world.graphic.ColourValue col)
	{
		long chainIndexParamValue = chainIndex;
		long colParamValue = col.nativeObject.pointer;
		setInitialColour_ev_size_t_CColourValue_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, colParamValue);
	}

	protected  void setInitialColour_ev_size_t_Real_Real_Real_Real_callback(long chainIndex, double r, double g, double b, double a)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		setInitialColour(chainIndexParamValue, rParamValue, gParamValue, bParamValue, aParamValue);
	}

	native private void setInitialColour_ev_size_t_Real_Real_Real_Real(long pNativeObject, long chainIndex, double r, double g, double b, double a);
	/**
	 * 设置最初的颜色
	 * @param chainIndex 索引
	 * @param r 最初r颜色
	 * @param g 最初g颜色
	 * @param b 最初b颜色
	 * @param a 最初a颜色
	 */
	public void setInitialColour(long chainIndex, double r, double g, double b, double a)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		setInitialColour_ev_size_t_Real_Real_Real_Real(this.nativeObject.pointer, chainIndexParamValue, rParamValue, gParamValue, bParamValue, aParamValue);
	}
	native private void setInitialColour_ev_size_t_Real_Real_Real_Real_NoVirtual(long pNativeObject, long chainIndex, double r, double g, double b, double a);
	protected void setInitialColour_NoVirtual(long chainIndex, double r, double g, double b, double a)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		setInitialColour_ev_size_t_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, rParamValue, gParamValue, bParamValue, aParamValue);
	}

	protected  void setInitialColour_ev_size_t_Real_Real_Real_callback(long chainIndex, double r, double g, double b)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		setInitialColour(chainIndexParamValue, rParamValue, gParamValue, bParamValue);
	}

	native private void setInitialColour_ev_size_t_Real_Real_Real(long pNativeObject, long chainIndex, double r, double g, double b);
	/**
	 * 设置最初的颜色
	 * @param chainIndex 索引
	 * @param r 最初r颜色
	 * @param g 最初g颜色
	 * @param b 最初b颜色
	 */
	public void setInitialColour(long chainIndex, double r, double g, double b)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		setInitialColour_ev_size_t_Real_Real_Real(this.nativeObject.pointer, chainIndexParamValue, rParamValue, gParamValue, bParamValue);
	}
	native private void setInitialColour_ev_size_t_Real_Real_Real_NoVirtual(long pNativeObject, long chainIndex, double r, double g, double b);
	protected void setInitialColour_NoVirtual(long chainIndex, double r, double g, double b)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		setInitialColour_ev_size_t_Real_Real_Real_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, rParamValue, gParamValue, bParamValue);
	}

	protected  long getInitialColour_ev_size_t_callback(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		com.earthview.world.graphic.ColourValue returnValue = getInitialColour(chainIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInitialColour_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 获取最初的颜色
	 * @param chainIndex 索引
	 */
	public com.earthview.world.graphic.ColourValue getInitialColour(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		long returnValue = getInitialColour_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
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
	native private long getInitialColour_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected com.earthview.world.graphic.ColourValue getInitialColour_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		long returnValue = getInitialColour_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
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

	protected  void setColourChange_ev_size_t_CColourValue_callback(long chainIndex, long valuePerSecond)
	{
		long chainIndexParamValue = chainIndex;
		com.earthview.world.graphic.ColourValue valuePerSecondParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		valuePerSecondParamValue.setDelegate(true);
		valuePerSecondParamValue.setInstancePointer(new InstancePointer(valuePerSecond));
		IClassFactory valuePerSecondParamValueClassFactory = GlobalClassFactoryMap.get(valuePerSecondParamValue.getCppInstanceTypeName());
		if (valuePerSecondParamValueClassFactory != null)
		{
			valuePerSecondParamValue.setDelegate(true);
			valuePerSecondParamValue = (com.earthview.world.graphic.ColourValue)valuePerSecondParamValueClassFactory.create();
			valuePerSecondParamValue.setDelegate(true);
			valuePerSecondParamValue.setInstancePointer(new InstancePointer(valuePerSecond));
		}
		setColourChange(chainIndexParamValue, valuePerSecondParamValue);
	}

	native private void setColourChange_ev_size_t_CColourValue(long pNativeObject, long chainIndex, long valuePerSecond);
	/**
	 * 设置颜色的改变
	 * @param chainIndex 索引
	 * @param valuePerSecond 第二种颜色的值
	 */
	public void setColourChange(long chainIndex, com.earthview.world.graphic.ColourValue valuePerSecond)
	{
		long chainIndexParamValue = chainIndex;
		long valuePerSecondParamValue = valuePerSecond.nativeObject.pointer;
		setColourChange_ev_size_t_CColourValue(this.nativeObject.pointer, chainIndexParamValue, valuePerSecondParamValue);
	}
	native private void setColourChange_ev_size_t_CColourValue_NoVirtual(long pNativeObject, long chainIndex, long valuePerSecond);
	protected void setColourChange_NoVirtual(long chainIndex, com.earthview.world.graphic.ColourValue valuePerSecond)
	{
		long chainIndexParamValue = chainIndex;
		long valuePerSecondParamValue = valuePerSecond.nativeObject.pointer;
		setColourChange_ev_size_t_CColourValue_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, valuePerSecondParamValue);
	}

	protected  void setInitialWidth_ev_size_t_Real_callback(long chainIndex, double width)
	{
		long chainIndexParamValue = chainIndex;
		double widthParamValue = width;
		setInitialWidth(chainIndexParamValue, widthParamValue);
	}

	native private void setInitialWidth_ev_size_t_Real(long pNativeObject, long chainIndex, double width);
	/**
	 * 设置最初宽度
	 * @param chainIndex 索引
	 * @param width 宽度
	 */
	public void setInitialWidth(long chainIndex, double width)
	{
		long chainIndexParamValue = chainIndex;
		double widthParamValue = width;
		setInitialWidth_ev_size_t_Real(this.nativeObject.pointer, chainIndexParamValue, widthParamValue);
	}
	native private void setInitialWidth_ev_size_t_Real_NoVirtual(long pNativeObject, long chainIndex, double width);
	protected void setInitialWidth_NoVirtual(long chainIndex, double width)
	{
		long chainIndexParamValue = chainIndex;
		double widthParamValue = width;
		setInitialWidth_ev_size_t_Real_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, widthParamValue);
	}

	protected  double getInitialWidth_ev_size_t_callback(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		double returnValue = getInitialWidth(chainIndexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getInitialWidth_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 获取最初宽度
	 * @param chainIndex 索引
	 * @return 最初宽度
	 */
	public double getInitialWidth(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		double returnValue = getInitialWidth_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
		return returnValue;
	}
	native private double getInitialWidth_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected double getInitialWidth_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		double returnValue = getInitialWidth_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
		return returnValue;
	}

	protected  void setWidthChange_ev_size_t_Real_callback(long chainIndex, double widthDeltaPerSecond)
	{
		long chainIndexParamValue = chainIndex;
		double widthDeltaPerSecondParamValue = widthDeltaPerSecond;
		setWidthChange(chainIndexParamValue, widthDeltaPerSecondParamValue);
	}

	native private void setWidthChange_ev_size_t_Real(long pNativeObject, long chainIndex, double widthDeltaPerSecond);
	/**
	 * 设置宽度的改变
	 * @param chainIndex 索引
	 * @param widthDeltaPerSecond 宽度改变的值
	 */
	public void setWidthChange(long chainIndex, double widthDeltaPerSecond)
	{
		long chainIndexParamValue = chainIndex;
		double widthDeltaPerSecondParamValue = widthDeltaPerSecond;
		setWidthChange_ev_size_t_Real(this.nativeObject.pointer, chainIndexParamValue, widthDeltaPerSecondParamValue);
	}
	native private void setWidthChange_ev_size_t_Real_NoVirtual(long pNativeObject, long chainIndex, double widthDeltaPerSecond);
	protected void setWidthChange_NoVirtual(long chainIndex, double widthDeltaPerSecond)
	{
		long chainIndexParamValue = chainIndex;
		double widthDeltaPerSecondParamValue = widthDeltaPerSecond;
		setWidthChange_ev_size_t_Real_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, widthDeltaPerSecondParamValue);
	}

	protected  double getWidthChange_ev_size_t_callback(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		double returnValue = getWidthChange(chainIndexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getWidthChange_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 获取宽度的改变
	 * @param chainIndex 索引
	 */
	public double getWidthChange(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		double returnValue = getWidthChange_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
		return returnValue;
	}
	native private double getWidthChange_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected double getWidthChange_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		double returnValue = getWidthChange_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
		return returnValue;
	}

	protected  void setColourChange_ev_size_t_Real_Real_Real_Real_callback(long chainIndex, double r, double g, double b, double a)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		setColourChange(chainIndexParamValue, rParamValue, gParamValue, bParamValue, aParamValue);
	}

	native private void setColourChange_ev_size_t_Real_Real_Real_Real(long pNativeObject, long chainIndex, double r, double g, double b, double a);
	/**
	 * 设置颜色的改变
	 * @param chainIndex 索引
	 * @param r 最初r颜色
	 * @param g 最初g颜色
	 * @param b 最初b颜色
	 * @param a 最初a颜色
	 */
	public void setColourChange(long chainIndex, double r, double g, double b, double a)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		setColourChange_ev_size_t_Real_Real_Real_Real(this.nativeObject.pointer, chainIndexParamValue, rParamValue, gParamValue, bParamValue, aParamValue);
	}
	native private void setColourChange_ev_size_t_Real_Real_Real_Real_NoVirtual(long pNativeObject, long chainIndex, double r, double g, double b, double a);
	protected void setColourChange_NoVirtual(long chainIndex, double r, double g, double b, double a)
	{
		long chainIndexParamValue = chainIndex;
		double rParamValue = r;
		double gParamValue = g;
		double bParamValue = b;
		double aParamValue = a;
		setColourChange_ev_size_t_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, rParamValue, gParamValue, bParamValue, aParamValue);
	}

	protected  long getColourChange_ev_size_t_callback(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		com.earthview.world.graphic.ColourValue returnValue = getColourChange(chainIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColourChange_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 获取颜色值的改变
	 * @param chainIndex 索引
	 * @return 颜色的值
	 */
	public com.earthview.world.graphic.ColourValue getColourChange(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		long returnValue = getColourChange_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
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
	native private long getColourChange_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected com.earthview.world.graphic.ColourValue getColourChange_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		long returnValue = getColourChange_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
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

	protected  void setVelocity_Real_callback(double velocity)
	{
		double velocityParamValue = velocity;
		setVelocity(velocityParamValue);
	}

	native private void setVelocity_Real(long pNativeObject, double velocity);
	/**
	 * 设置参考速率
	 * @param velocity 速率
	 */
	public void setVelocity(double velocity)
	{
		double velocityParamValue = velocity;
		setVelocity_Real(this.nativeObject.pointer, velocityParamValue);
	}
	native private void setVelocity_Real_NoVirtual(long pNativeObject, double velocity);
	protected void setVelocity_NoVirtual(double velocity)
	{
		double velocityParamValue = velocity;
		setVelocity_Real_NoVirtual(this.nativeObject.pointer, velocityParamValue);
	}

	protected  double getVelocity_void_callback()
	{
		double returnValue = getVelocity();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getVelocity_void(long pNativeObject);
	/**
	 * 获取参考速率
	 * @return 参考速率
	 */
	public double getVelocity()
	{
		double returnValue = getVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getVelocity_void_NoVirtual(long pNativeObject);
	protected double getVelocity_NoVirtual()
	{
		double returnValue = getVelocity_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _timeUpdate_Real_callback(double time)
	{
		double timeParamValue = time;
		_timeUpdate(timeParamValue);
	}

	native private void _timeUpdate_Real(long pNativeObject, double time);
	/**
	 * 时间系统更新
	 * @param time 时间
	 */
	public void _timeUpdate(double time)
	{
		double timeParamValue = time;
		_timeUpdate_Real(this.nativeObject.pointer, timeParamValue);
	}
	native private void _timeUpdate_Real_NoVirtual(long pNativeObject, double time);
	protected void _timeUpdate_NoVirtual(double time)
	{
		double timeParamValue = time;
		_timeUpdate_Real_NoVirtual(this.nativeObject.pointer, timeParamValue);
	}

	native private String getMovableType_void(long pNativeObject);
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

	protected  void manageController_void_callback()
	{
		manageController();
	}

	native private void manageController_void(long pNativeObject);
	/**
	 * 管理控制
	 * @param  
	 */
	public void manageController()
	{
		manageController_void(this.nativeObject.pointer);
	}
	native private void manageController_void_NoVirtual(long pNativeObject);
	protected void manageController_NoVirtual()
	{
		manageController_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateTrail_ev_size_t_CNode_callback(long index, long node)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		}
		updateTrail(indexParamValue, nodeParamValue);
	}

	native private void updateTrail_ev_size_t_CNode(long pNativeObject, long index, long node);
	/**
	 * 更新轨迹
	 * @param index 索引
	 * @param node 节点
	 */
	public void updateTrail(long index, com.earthview.world.graphic.Node node)
	{
		long indexParamValue = index;
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		updateTrail_ev_size_t_CNode(this.nativeObject.pointer, indexParamValue, nodeParamValue);
	}
	native private void updateTrail_ev_size_t_CNode_NoVirtual(long pNativeObject, long index, long node);
	protected void updateTrail_NoVirtual(long index, com.earthview.world.graphic.Node node)
	{
		long indexParamValue = index;
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		updateTrail_ev_size_t_CNode_NoVirtual(this.nativeObject.pointer, indexParamValue, nodeParamValue);
	}

	protected  void resetTrail_ev_size_t_CNode_callback(long index, long node)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		}
		resetTrail(indexParamValue, nodeParamValue);
	}

	native private void resetTrail_ev_size_t_CNode(long pNativeObject, long index, long node);
	/**
	 * 重新设置某一个节点的轨迹
	 * @param index 索引
	 * @param node 节点
	 */
	public void resetTrail(long index, com.earthview.world.graphic.Node node)
	{
		long indexParamValue = index;
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		resetTrail_ev_size_t_CNode(this.nativeObject.pointer, indexParamValue, nodeParamValue);
	}
	native private void resetTrail_ev_size_t_CNode_NoVirtual(long pNativeObject, long index, long node);
	protected void resetTrail_NoVirtual(long index, com.earthview.world.graphic.Node node)
	{
		long indexParamValue = index;
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		resetTrail_ev_size_t_CNode_NoVirtual(this.nativeObject.pointer, indexParamValue, nodeParamValue);
	}

	protected  void resetAllTrails_void_callback()
	{
		resetAllTrails();
	}

	native private void resetAllTrails_void(long pNativeObject);
	/**
	 * 重新设置所有节点的轨迹
	 * @param index 索引
	 * @param node 节点
	 */
	public void resetAllTrails()
	{
		resetAllTrails_void(this.nativeObject.pointer);
	}
	native private void resetAllTrails_void_NoVirtual(long pNativeObject);
	protected void resetAllTrails_NoVirtual()
	{
		resetAllTrails_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void updateVertexBuffer_CCamera(long pNativeObject, long cam);
	public void updateVertexBuffer(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		updateVertexBuffer_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void updateVertexBuffer_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void updateVertexBuffer_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		updateVertexBuffer_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	public RibbonTrail(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RibbonTrail(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		return super.getMaterial_NoVirtual();
	}
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		super.getRenderOperation_NoVirtual(op);
	}
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		return super.getSquaredViewDepth_NoVirtual(cam);
	}
	public com.earthview.world.graphic.LightList getLights()
	{
		return super.getLights_NoVirtual();
	}
	public com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable getRenderablePtr()
	{
		return super.getRenderablePtr_NoVirtual();
	}
	/**
	 * 获得链上元素数量的最大值
	 * @param  
	 * @return 最大值
	 */
	public long getMaxChainElements()
	{
		return super.getMaxChainElements_NoVirtual();
	}
	/**
	 * 获得广告板链个数
	 * @param  
	 */
	public long getNumberOfChains()
	{
		return super.getNumberOfChains_NoVirtual();
	}
	/**
	 * 设置是否使用纹理坐标
	 * @param use 是否使用
	 */
	public void setUseTextureCoords(boolean use)
	{
		super.setUseTextureCoords_NoVirtual(use);
	}
	/**
	 * 判断是否使用纹理坐标
	 * @param  
	 * @return 作用了返回true，否则false
	 */
	public boolean getUseTextureCoords()
	{
		return super.getUseTextureCoords_NoVirtual();
	}
	/**
	 * 设置纹理的坐标方向
	 * @param dir 方向
	 */
	public void setTextureCoordDirection(com.earthview.world.graphic.BillboardChain.TexCoordDirection dir)
	{
		super.setTextureCoordDirection_NoVirtual(dir);
	}
	/**
	 * 获得纹理的坐标方向信息
	 * @param  
	 * @return 纹理坐标方向
	 */
	public com.earthview.world.graphic.BillboardChain.TexCoordDirection getTextureCoordDirection()
	{
		return super.getTextureCoordDirection_NoVirtual();
	}
	/**
	 * 设置其它纹理的坐标范围信息
	 * @param start 开始
	 * @param end 结束
	 */
	public void setOtherTextureCoordRange(double start, double end)
	{
		super.setOtherTextureCoordRange_NoVirtual(start, end);
	}
	/**
	 * 获得其它纹理的坐标范围信息
	 * @param  
	 * @return 纹理范围
	 */
	public void getOtherTextureCoordRange(DoublePointer start, DoublePointer end)
	{
		super.getOtherTextureCoordRange_NoVirtual(start, end);
	}
	/**
	 * 设置使用顶点颜色
	 * @param use 是否使用
	 */
	public void setUseVertexColours(boolean use)
	{
		super.setUseVertexColours_NoVirtual(use);
	}
	/**
	 * 判断是否使用顶点颜色
	 * @param  
	 * @return 使用了返回true，否则返回false
	 */
	public boolean getUseVertexColours()
	{
		return super.getUseVertexColours_NoVirtual();
	}
	/**
	 * 设置缓冲区是否与Dynamic改造信息匹配
	 * @param dyn 是否合适
	 */
	public void setDynamic(boolean dyn)
	{
		super.setDynamic_NoVirtual(dyn);
	}
	/**
	 * 判断缓冲区是否与Dynamic改造信息匹配
	 * @param  
	 * @return 合适返回true，否则返回false
	 */
	public boolean getDynamic()
	{
		return super.getDynamic_NoVirtual();
	}
	/**
	 * 在元素链最前面增加一个元素
	 * @param chainIndex 链索引
	 * @param billboardChainElement 所增加的元素
	 */
	public void addChainElement(long chainIndex, com.earthview.world.graphic.BillboardChain.Element billboardChainElement)
	{
		super.addChainElement_NoVirtual(chainIndex, billboardChainElement);
	}
	/**
	 * 从元素链的尾部移除一个元素
	 * @param chainIndex 链索引
	 */
	public void removeChainElement(long chainIndex)
	{
		super.removeChainElement_NoVirtual(chainIndex);
	}
	/**
	 * 更新链中的元素
	 * @param chainIndex 链索引
	 * @param elementIndex 元素索引
	 * @param billboardChainElement 用来更新的元素
	 */
	public void updateChainElement(long chainIndex, long elementIndex, com.earthview.world.graphic.BillboardChain.Element billboardChainElement)
	{
		super.updateChainElement_NoVirtual(chainIndex, elementIndex, billboardChainElement);
	}
	/**
	 * 获得链中的元素
	 * @param chainIndex 链索引
	 * @param elementIndex 元素索引
	 * @return 获得的元素
	 */
	public com.earthview.world.graphic.BillboardChain.Element getChainElement(long chainIndex, long elementIndex)
	{
		return super.getChainElement_NoVirtual(chainIndex, elementIndex);
	}
	/**
	 * 获得链中的元素的个数
	 * @param chainIndex 链索引
	 * @return 获得的元素个数
	 */
	public long getNumChainElements(long chainIndex)
	{
		return super.getNumChainElements_NoVirtual(chainIndex);
	}
	/**
	 * 清除所有链中的元素但保留元素链
	 * @param  
	 */
	public void clearAllChains()
	{
		super.clearAllChains_NoVirtual();
	}
	/**
	 * 获得使用的材质名称
	 * @param  
	 * @return 材质名称
	 */
	public String getMaterialName()
	{
		return super.getMaterialName_NoVirtual();
	}
	/**
	 * 设置材质名称
	 * @param name 名称
	 * @param groupName 组名称
	 */
	public void setMaterialName(String name, String groupName)
	{
		super.setMaterialName_NoVirtual(name, groupName);
	}
	/**
	 * 设置材质名称
	 * @param name 名称
	 */
	public void setMaterialName(String name)
	{
		super.setMaterialName_NoVirtual(name);
	}
	/**
	 * 创建广告板链容器
	 * @param  
	 */
	public void setupChainContainers()
	{
		super.setupChainContainers_NoVirtual();
	}
	/**
	 * 创建顶点声明
	 * @param  
	 */
	public void setupVertexDeclaration()
	{
		super.setupVertexDeclaration_NoVirtual();
	}
	/**
	 * 创建顶点和索引缓冲
	 * @param  
	 */
	public void setupBuffers()
	{
		super.setupBuffers_NoVirtual();
	}
	/**
	 * 更新索引缓冲
	 * @param  
	 */
	public void updateIndexBuffer()
	{
		super.updateIndexBuffer_NoVirtual();
	}
	/**
	 * 更新限制边框盒
	 * @param  
	 */
	public void updateBoundingBox()
	{
		super.updateBoundingBox_NoVirtual();
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
	 * 通报当前相机内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		super._notifyCurrentCamera_NoVirtual(ref_cam);
	}
	/**
	 * 获取模型坐标系下的包围盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		return super.getBoundingBox_NoVirtual();
	}
	/**
	 * 获取当前对象的球体限定半径
	 * @param  
	 * @return 边框盒
	 */
	public double getBoundingRadius()
	{
		return super.getBoundingRadius_NoVirtual();
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
	 * 更新渲染队列内部方法
	 * @param queue 渲染队列
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		super._updateRenderQueue_NoVirtual(queue);
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
		return super.selectBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, point);
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
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		super.renderSelection_NoVirtual();
	}
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
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
	/**
	 * 获取可移动对象的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		return super.getTypeFlags_NoVirtual();
	}
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，渲染对象将添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		super.visitRenderables_NoVirtual(visitor, debugRenderables);
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
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		return super.getWorldBoundingBox_NoVirtual(derive);
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
	
	native protected void register_addNode_CNode(long pNativeObject, String method);
	native protected void register_removeNode_CNode(long pNativeObject, String method);
	native protected void register_getNodeIterator_void(long pNativeObject, String method);
	native protected void register_getChainIndexForNode_CNode(long pNativeObject, String method);
	native protected void register_setTrailLength_Real(long pNativeObject, String method);
	native protected void register_getTrailLength_void(long pNativeObject, String method);
	native protected void register_setInitialColour_ev_size_t_CColourValue(long pNativeObject, String method);
	native protected void register_setInitialColour_ev_size_t_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setInitialColour_ev_size_t_Real_Real_Real(long pNativeObject, String method);
	native protected void register_getInitialColour_ev_size_t(long pNativeObject, String method);
	native protected void register_setColourChange_ev_size_t_CColourValue(long pNativeObject, String method);
	native protected void register_setInitialWidth_ev_size_t_Real(long pNativeObject, String method);
	native protected void register_getInitialWidth_ev_size_t(long pNativeObject, String method);
	native protected void register_setWidthChange_ev_size_t_Real(long pNativeObject, String method);
	native protected void register_getWidthChange_ev_size_t(long pNativeObject, String method);
	native protected void register_setColourChange_ev_size_t_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_getColourChange_ev_size_t(long pNativeObject, String method);
	native protected void register_setVelocity_Real(long pNativeObject, String method);
	native protected void register_getVelocity_void(long pNativeObject, String method);
	native protected void register__timeUpdate_Real(long pNativeObject, String method);
	native protected void register_manageController_void(long pNativeObject, String method);
	native protected void register_updateTrail_ev_size_t_CNode(long pNativeObject, String method);
	native protected void register_resetTrail_ev_size_t_CNode(long pNativeObject, String method);
	native protected void register_resetAllTrails_void(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getRenderablePtr_void(long pNativeObject, String method);
	native protected void register_setMaxChainElements_ev_size_t(long pNativeObject, String method);
	native protected void register_getMaxChainElements_void(long pNativeObject, String method);
	native protected void register_setNumberOfChains_ev_size_t(long pNativeObject, String method);
	native protected void register_getNumberOfChains_void(long pNativeObject, String method);
	native protected void register_setUseTextureCoords_ev_bool(long pNativeObject, String method);
	native protected void register_getUseTextureCoords_void(long pNativeObject, String method);
	native protected void register_setTextureCoordDirection_TexCoordDirection(long pNativeObject, String method);
	native protected void register_getTextureCoordDirection_void(long pNativeObject, String method);
	native protected void register_setOtherTextureCoordRange_Real_Real(long pNativeObject, String method);
	native protected void register_getOtherTextureCoordRange_Real_Real(long pNativeObject, String method);
	native protected void register_setUseVertexColours_ev_bool(long pNativeObject, String method);
	native protected void register_getUseVertexColours_void(long pNativeObject, String method);
	native protected void register_setDynamic_ev_bool(long pNativeObject, String method);
	native protected void register_getDynamic_void(long pNativeObject, String method);
	native protected void register_addChainElement_ev_size_t_CElement(long pNativeObject, String method);
	native protected void register_removeChainElement_ev_size_t(long pNativeObject, String method);
	native protected void register_updateChainElement_ev_size_t_ev_size_t_CElement(long pNativeObject, String method);
	native protected void register_getChainElement_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_getNumChainElements_ev_size_t(long pNativeObject, String method);
	native protected void register_clearChain_ev_size_t(long pNativeObject, String method);
	native protected void register_clearAllChains_void(long pNativeObject, String method);
	native protected void register_getMaterialName_void(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString(long pNativeObject, String method);
	native protected void register_setupChainContainers_void(long pNativeObject, String method);
	native protected void register_setupVertexDeclaration_void(long pNativeObject, String method);
	native protected void register_setupBuffers_void(long pNativeObject, String method);
	native protected void register_updateVertexBuffer_CCamera(long pNativeObject, String method);
	native protected void register_updateIndexBuffer_void(long pNativeObject, String method);
	native protected void register_updateBoundingBox_void(long pNativeObject, String method);
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
			this.register_addNode_CNode(this.nativeObject.pointer, "addNode_CNode_callback");
			this.register_removeNode_CNode(this.nativeObject.pointer, "removeNode_CNode_callback");
			this.register_getNodeIterator_void(this.nativeObject.pointer, "getNodeIterator_void_callback");
			this.register_getChainIndexForNode_CNode(this.nativeObject.pointer, "getChainIndexForNode_CNode_callback");
			this.register_setTrailLength_Real(this.nativeObject.pointer, "setTrailLength_Real_callback");
			this.register_getTrailLength_void(this.nativeObject.pointer, "getTrailLength_void_callback");
			this.register_setInitialColour_ev_size_t_CColourValue(this.nativeObject.pointer, "setInitialColour_ev_size_t_CColourValue_callback");
			this.register_setInitialColour_ev_size_t_Real_Real_Real_Real(this.nativeObject.pointer, "setInitialColour_ev_size_t_Real_Real_Real_Real_callback");
			this.register_setInitialColour_ev_size_t_Real_Real_Real(this.nativeObject.pointer, "setInitialColour_ev_size_t_Real_Real_Real_callback");
			this.register_getInitialColour_ev_size_t(this.nativeObject.pointer, "getInitialColour_ev_size_t_callback");
			this.register_setColourChange_ev_size_t_CColourValue(this.nativeObject.pointer, "setColourChange_ev_size_t_CColourValue_callback");
			this.register_setInitialWidth_ev_size_t_Real(this.nativeObject.pointer, "setInitialWidth_ev_size_t_Real_callback");
			this.register_getInitialWidth_ev_size_t(this.nativeObject.pointer, "getInitialWidth_ev_size_t_callback");
			this.register_setWidthChange_ev_size_t_Real(this.nativeObject.pointer, "setWidthChange_ev_size_t_Real_callback");
			this.register_getWidthChange_ev_size_t(this.nativeObject.pointer, "getWidthChange_ev_size_t_callback");
			this.register_setColourChange_ev_size_t_Real_Real_Real_Real(this.nativeObject.pointer, "setColourChange_ev_size_t_Real_Real_Real_Real_callback");
			this.register_getColourChange_ev_size_t(this.nativeObject.pointer, "getColourChange_ev_size_t_callback");
			this.register_setVelocity_Real(this.nativeObject.pointer, "setVelocity_Real_callback");
			this.register_getVelocity_void(this.nativeObject.pointer, "getVelocity_void_callback");
			this.register__timeUpdate_Real(this.nativeObject.pointer, "_timeUpdate_Real_callback");
			this.register_manageController_void(this.nativeObject.pointer, "manageController_void_callback");
			this.register_updateTrail_ev_size_t_CNode(this.nativeObject.pointer, "updateTrail_ev_size_t_CNode_callback");
			this.register_resetTrail_ev_size_t_CNode(this.nativeObject.pointer, "resetTrail_ev_size_t_CNode_callback");
			this.register_resetAllTrails_void(this.nativeObject.pointer, "resetAllTrails_void_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getRenderablePtr_void(this.nativeObject.pointer, "getRenderablePtr_void_callback");
			this.register_setMaxChainElements_ev_size_t(this.nativeObject.pointer, "setMaxChainElements_ev_size_t_callback");
			this.register_getMaxChainElements_void(this.nativeObject.pointer, "getMaxChainElements_void_callback");
			this.register_setNumberOfChains_ev_size_t(this.nativeObject.pointer, "setNumberOfChains_ev_size_t_callback");
			this.register_getNumberOfChains_void(this.nativeObject.pointer, "getNumberOfChains_void_callback");
			this.register_setUseTextureCoords_ev_bool(this.nativeObject.pointer, "setUseTextureCoords_ev_bool_callback");
			this.register_getUseTextureCoords_void(this.nativeObject.pointer, "getUseTextureCoords_void_callback");
			this.register_setTextureCoordDirection_TexCoordDirection(this.nativeObject.pointer, "setTextureCoordDirection_TexCoordDirection_callback");
			this.register_getTextureCoordDirection_void(this.nativeObject.pointer, "getTextureCoordDirection_void_callback");
			this.register_setOtherTextureCoordRange_Real_Real(this.nativeObject.pointer, "setOtherTextureCoordRange_Real_Real_callback");
			this.register_getOtherTextureCoordRange_Real_Real(this.nativeObject.pointer, "getOtherTextureCoordRange_Real_Real_callback");
			this.register_setUseVertexColours_ev_bool(this.nativeObject.pointer, "setUseVertexColours_ev_bool_callback");
			this.register_getUseVertexColours_void(this.nativeObject.pointer, "getUseVertexColours_void_callback");
			this.register_setDynamic_ev_bool(this.nativeObject.pointer, "setDynamic_ev_bool_callback");
			this.register_getDynamic_void(this.nativeObject.pointer, "getDynamic_void_callback");
			this.register_addChainElement_ev_size_t_CElement(this.nativeObject.pointer, "addChainElement_ev_size_t_CElement_callback");
			this.register_removeChainElement_ev_size_t(this.nativeObject.pointer, "removeChainElement_ev_size_t_callback");
			this.register_updateChainElement_ev_size_t_ev_size_t_CElement(this.nativeObject.pointer, "updateChainElement_ev_size_t_ev_size_t_CElement_callback");
			this.register_getChainElement_ev_size_t_ev_size_t(this.nativeObject.pointer, "getChainElement_ev_size_t_ev_size_t_callback");
			this.register_getNumChainElements_ev_size_t(this.nativeObject.pointer, "getNumChainElements_ev_size_t_callback");
			this.register_clearChain_ev_size_t(this.nativeObject.pointer, "clearChain_ev_size_t_callback");
			this.register_clearAllChains_void(this.nativeObject.pointer, "clearAllChains_void_callback");
			this.register_getMaterialName_void(this.nativeObject.pointer, "getMaterialName_void_callback");
			this.register_setMaterialName_EVString_EVString(this.nativeObject.pointer, "setMaterialName_EVString_EVString_callback");
			this.register_setMaterialName_EVString(this.nativeObject.pointer, "setMaterialName_EVString_callback");
			this.register_setupChainContainers_void(this.nativeObject.pointer, "setupChainContainers_void_callback");
			this.register_setupVertexDeclaration_void(this.nativeObject.pointer, "setupVertexDeclaration_void_callback");
			this.register_setupBuffers_void(this.nativeObject.pointer, "setupBuffers_void_callback");
			this.register_updateVertexBuffer_CCamera(this.nativeObject.pointer, "updateVertexBuffer_CCamera_callback");
			this.register_updateIndexBuffer_void(this.nativeObject.pointer, "updateIndexBuffer_void_callback");
			this.register_updateBoundingBox_void(this.nativeObject.pointer, "updateBoundingBox_void_callback");
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
	
	public static RibbonTrail fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RibbonTrail obj = null;
 		if(baseObj instanceof RibbonTrail)
		{
			obj = (RibbonTrail)baseObj;
		} else {
			obj = new RibbonTrail(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRibbonTrail");
			obj.increaseCast();
		}

		return obj;
	}
}
