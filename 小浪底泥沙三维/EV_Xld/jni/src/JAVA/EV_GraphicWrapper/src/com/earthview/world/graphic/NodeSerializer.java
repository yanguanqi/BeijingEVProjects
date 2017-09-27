package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeSerializer extends com.earthview.world.graphic.AnimationBaseSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNodeSerializer", new NodeSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCNodeSerializerProxy", new NodeSerializerClassFactory());
	}

	public static class NodeSerializerList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList", new NodeSerializerListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public NodeSerializerList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CNodeSerializerList", null);
		}

		native private void push_back_CNodeSerializer(long pNativeObject, long t);
		/**
		 * 在容器最后添加元素
		 * @param t 元素值
		 */
		public void push_back(com.earthview.world.graphic.NodeSerializer t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CNodeSerializer(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除容器最后元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回容器首个元素
		 * @param  
		 * @return 返回容器首个元素
		 */
		public com.earthview.world.graphic.NodeSerializer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.NodeSerializer __returnValue = new com.earthview.world.graphic.NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate, "CNodeSerializer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NodeSerializer)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器最后元素
		 * @param  
		 * @return 返回容器最后元素
		 */
		public com.earthview.world.graphic.NodeSerializer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.NodeSerializer __returnValue = new com.earthview.world.graphic.NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate, "CNodeSerializer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NodeSerializer)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_CNodeSerializer(long pNativeObject, long pos, long t);
		/**
		 * 容器中间位置插入元素
		 * @param pos 位置
		 * @param t 元素值
		 */
		public void insert(long pos, com.earthview.world.graphic.NodeSerializer t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CNodeSerializer(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 删除容器中间位置元素
		 * @param pos 位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 重载[]操作符
		 * @param n 下标位置
		 * @return 返回下标对应的值
		 */
		public com.earthview.world.graphic.NodeSerializer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.NodeSerializer __returnValue = new com.earthview.world.graphic.NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate, "CNodeSerializer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NodeSerializer)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回某位置的元素值
		 * @param n 位置
		 * @return 返回位置对应的值
		 */
		public com.earthview.world.graphic.NodeSerializer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.NodeSerializer __returnValue = new com.earthview.world.graphic.NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate, "CNodeSerializer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NodeSerializer)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回元素的数量大小
		 * @param  
		 * @return 返回元素的数量大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 改变容器中元素数量大小
		 * @param newSize 改变的容器中元素数量大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 改变容器中最小的元素容纳数量
		 * @param count 最小的元素容纳数量
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空所有元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public NodeSerializerList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeSerializerList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NodeSerializerList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeSerializerList obj = null;
 			if(baseObj instanceof NodeSerializerList)
			{
				obj = (NodeSerializerList)baseObj;
			} else {
				obj = new NodeSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CNodeSerializerList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeSerializerListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeSerializerList emptyInstance = new NodeSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public NodeSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCNodeSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.NodeSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void fromStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void fromStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void fromStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private void toStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void toStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void toStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private boolean hasAnimation_void(long pNativeObject);
	/**
	 * /从根到自身，如果其中一个节点有动画，返回true;/
	 * @param  
	 */
	public boolean hasAnimation()
	{
		boolean returnValue = hasAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean childHasAnimation_void(long pNativeObject);
	/**
	 * 任意一个子节点有动画，返回true;
	 * @param  
	 */
	public boolean childHasAnimation()
	{
		boolean returnValue = childHasAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String get_mxmlElementDescription_void(long pNativeObject);
	public String get_mxmlElementDescription()
	{
		String jniValue = get_mxmlElementDescription_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mxmlElementDescription_EVString (long pNativeObject, String value);
	public void set_mxmlElementDescription(String mxmlElementDescription)
	{
		String mxmlElementDescriptionParamValue = mxmlElementDescription;
		
		set_mxmlElementDescription_EVString(this.nativeObject.pointer, mxmlElementDescriptionParamValue);
	}
	
	native private String get_mxmlElementName_void(long pNativeObject);
	public String get_mxmlElementName()
	{
		String jniValue = get_mxmlElementName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mxmlElementName_EVString (long pNativeObject, String value);
	public void set_mxmlElementName(String mxmlElementName)
	{
		String mxmlElementNameParamValue = mxmlElementName;
		
		set_mxmlElementName_EVString(this.nativeObject.pointer, mxmlElementNameParamValue);
	}
	
	native private long get_mID_void(long pNativeObject);
	public long get_mID()
	{
		long jniValue = get_mID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mID_ev_uint32 (long pNativeObject, long value);
	public void set_mID(long mID)
	{
		long mIDParamValue = mID;
		
		set_mID_ev_uint32(this.nativeObject.pointer, mIDParamValue);
	}
	
	native private long get_mmatrixSerializer_void(long pNativeObject);
	public com.earthview.world.graphic.MatrixSerializer get_mmatrixSerializer()
	{
		long jniValue = get_mmatrixSerializer_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MatrixSerializer __returnValue = new com.earthview.world.graphic.MatrixSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrixSerializer");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MatrixSerializer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrixSerializer");
		}
		return __returnValue;
	}
	
	native private void set_mmatrixSerializer_CMatrixSerializer (long pNativeObject, long value);
	public void set_mmatrixSerializer(com.earthview.world.graphic.MatrixSerializer mmatrixSerializer)
	{
		long mmatrixSerializerParamValue = mmatrixSerializer.nativeObject.pointer;
		
		set_mmatrixSerializer_CMatrixSerializer(this.nativeObject.pointer, mmatrixSerializerParamValue);
	}
	
	native private long get_moffsetMatrixSerializer_void(long pNativeObject);
	public com.earthview.world.graphic.MatrixSerializer get_moffsetMatrixSerializer()
	{
		long jniValue = get_moffsetMatrixSerializer_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MatrixSerializer __returnValue = new com.earthview.world.graphic.MatrixSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrixSerializer");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MatrixSerializer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrixSerializer");
		}
		return __returnValue;
	}
	
	native private void set_moffsetMatrixSerializer_CMatrixSerializer (long pNativeObject, long value);
	public void set_moffsetMatrixSerializer(com.earthview.world.graphic.MatrixSerializer moffsetMatrixSerializer)
	{
		long moffsetMatrixSerializerParamValue = moffsetMatrixSerializer.nativeObject.pointer;
		
		set_moffsetMatrixSerializer_CMatrixSerializer(this.nativeObject.pointer, moffsetMatrixSerializerParamValue);
	}
	
	native private long get_manimationSerializerList_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationSerializerList get_manimationSerializerList()
	{
		long jniValue = get_manimationSerializerList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.AnimationSerializerList __returnValue = new com.earthview.world.graphic.AnimationSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAnimationSerializerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationSerializerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAnimationSerializerList");
		}
		return __returnValue;
	}
	
	native private void set_manimationSerializerList_CAnimationSerializerList (long pNativeObject, long value);
	public void set_manimationSerializerList(com.earthview.world.graphic.AnimationSerializerList manimationSerializerList)
	{
		long manimationSerializerListParamValue = manimationSerializerList.nativeObject.pointer;
		
		set_manimationSerializerList_CAnimationSerializerList(this.nativeObject.pointer, manimationSerializerListParamValue);
	}
	
	native private long get_msubMeshSerializerList_void(long pNativeObject);
	public com.earthview.world.graphic.SubMeshSerializerList get_msubMeshSerializerList()
	{
		long jniValue = get_msubMeshSerializerList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SubMeshSerializerList __returnValue = new com.earthview.world.graphic.SubMeshSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CSubMeshSerializerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubMeshSerializerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSubMeshSerializerList");
		}
		return __returnValue;
	}
	
	native private void set_msubMeshSerializerList_CSubMeshSerializerList (long pNativeObject, long value);
	public void set_msubMeshSerializerList(com.earthview.world.graphic.SubMeshSerializerList msubMeshSerializerList)
	{
		long msubMeshSerializerListParamValue = msubMeshSerializerList.nativeObject.pointer;
		
		set_msubMeshSerializerList_CSubMeshSerializerList(this.nativeObject.pointer, msubMeshSerializerListParamValue);
	}
	
	native private boolean get_mHasAnimation_void(long pNativeObject);
	public boolean get_mHasAnimation()
	{
		boolean jniValue = get_mHasAnimation_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mHasAnimation_ev_bool (long pNativeObject, boolean value);
	public void set_mHasAnimation(boolean mHasAnimation)
	{
		boolean mHasAnimationParamValue = mHasAnimation;
		
		set_mHasAnimation_ev_bool(this.nativeObject.pointer, mHasAnimationParamValue);
	}
	
	native private long get_msubNodeSerializerList_void(long pNativeObject);
	public com.earthview.world.graphic.NodeSerializer.NodeSerializerList get_msubNodeSerializerList()
	{
		long jniValue = get_msubNodeSerializerList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.NodeSerializer.NodeSerializerList __returnValue = new com.earthview.world.graphic.NodeSerializer.NodeSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CNodeSerializerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeSerializer.NodeSerializerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CNodeSerializerList");
		}
		return __returnValue;
	}
	
	native private void set_msubNodeSerializerList_CNodeSerializerList (long pNativeObject, long value);
	public void set_msubNodeSerializerList(com.earthview.world.graphic.NodeSerializer.NodeSerializerList msubNodeSerializerList)
	{
		long msubNodeSerializerListParamValue = msubNodeSerializerList.nativeObject.pointer;
		
		set_msubNodeSerializerList_CNodeSerializerList(this.nativeObject.pointer, msubNodeSerializerListParamValue);
	}
	
	native private long get_mBoundingBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox get_mBoundingBox()
	{
		long jniValue = get_mBoundingBox_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mBoundingBox_CAxisAlignedBox (long pNativeObject, long value);
	public void set_mBoundingBox(com.earthview.world.spatial.math.AxisAlignedBox mBoundingBox)
	{
		long mBoundingBoxParamValue = mBoundingBox.nativeObject.pointer;
		
		set_mBoundingBox_CAxisAlignedBox(this.nativeObject.pointer, mBoundingBoxParamValue);
	}
	
	public NodeSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodeSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void flipToLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipToLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipToLittleEndian(VoidPointer pData, long size)
	{
		super.flipToLittleEndian_NoVirtual(pData, size);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size);
	}
	public void flipEndian(VoidPointer pData, long size, long count)
	{
		super.flipEndian_NoVirtual(pData, size, count);
	}
	public void flipEndian(VoidPointer pData, long size)
	{
		super.flipEndian_NoVirtual(pData, size);
	}
	//// Determine the endianness of the incoming stream compared to native
	public void determineEndianness(com.earthview.world.core.DataStreamPtr stream)
	{
		super.determineEndianness_NoVirtual(stream);
	}
	//// Determine the endianness to write with based on option
	public void determineEndianness(com.earthview.world.graphic.AnimationBaseSerializer.Endian requestedEndian)
	{
		super.determineEndianness_NoVirtual(requestedEndian);
	}
	
	native protected void register_fromStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_toStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_determineEndianness_DataStreamPtr(long pNativeObject, String method);
	native protected void register_determineEndianness_Endian(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, "fromStreamImplement_DataStreamPtr_callback");
			this.register_toStreamImplement_DataStreamPtr(this.nativeObject.pointer, "toStreamImplement_DataStreamPtr_callback");
			this.register_flipToLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipToLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_callback");
			this.register_determineEndianness_DataStreamPtr(this.nativeObject.pointer, "determineEndianness_DataStreamPtr_callback");
			this.register_determineEndianness_Endian(this.nativeObject.pointer, "determineEndianness_Endian_callback");
		}
	}
	
	public static NodeSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodeSerializer obj = null;
 		if(baseObj instanceof NodeSerializer)
		{
			obj = (NodeSerializer)baseObj;
		} else {
			obj = new NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNodeSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
