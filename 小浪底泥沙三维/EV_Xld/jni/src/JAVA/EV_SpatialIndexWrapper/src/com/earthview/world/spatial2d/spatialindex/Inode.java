package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////////////////////
//class INode
/////////////////////////////////////////////////////////////////////////
public class Inode extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::INode", new InodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::JINodeProxy", new InodeClassFactory());
	}

	protected  int getNodeID_void_callback()
	{
		int returnValue = getNodeID();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNodeID_void(long pNativeObject);
	/**
	 * 获取当前节点的ID
	 * @return 当前节点的ID
	 */
	public int getNodeID()
	{
		int returnValue = getNodeID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNodeID_void_NoVirtual(long pNativeObject);
	protected int getNodeID_NoVirtual()
	{
		int returnValue = getNodeID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getChildrenCount_void_callback()
	{
		int returnValue = getChildrenCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getChildrenCount_void(long pNativeObject);
	/**
	 * 获取子阶段个数
	 * @return 子节点个数
	 */
	public int getChildrenCount()
	{
		int returnValue = getChildrenCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getChildrenCount_void_NoVirtual(long pNativeObject);
	protected int getChildrenCount_NoVirtual()
	{
		int returnValue = getChildrenCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getChildNode_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.spatial2d.spatialindex.Inode returnValue = getChildNode(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChildNode_ev_int32(long pNativeObject, int index);
	/**
	 * 获取子节点
	 * @param index 子节点索引
	 * @return 子节点
	 */
	public com.earthview.world.spatial2d.spatialindex.Inode getChildNode(int index)
	{
		int indexParamValue = index;
		long returnValue = getChildNode_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Inode __returnValue = new com.earthview.world.spatial2d.spatialindex.Inode(CreatedWhenConstruct.CWC_NotToCreate, "INode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Inode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "INode");
		}
		return __returnValue;
	}
	native private long getChildNode_ev_int32_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.spatial2d.spatialindex.Inode getChildNode_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getChildNode_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Inode __returnValue = new com.earthview.world.spatial2d.spatialindex.Inode(CreatedWhenConstruct.CWC_NotToCreate, "INode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Inode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "INode");
		}
		return __returnValue;
	}

	protected  long getParent_void_callback()
	{
		com.earthview.world.spatial2d.spatialindex.Inode returnValue = getParent();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getParent_void(long pNativeObject);
	/**
	 * 获取父节点
	 * @return 父节点
	 */
	public com.earthview.world.spatial2d.spatialindex.Inode getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Inode __returnValue = new com.earthview.world.spatial2d.spatialindex.Inode(CreatedWhenConstruct.CWC_NotToCreate, "INode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Inode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "INode");
		}
		return __returnValue;
	}
	native private long getParent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.spatialindex.Inode getParent_NoVirtual()
	{
		long returnValue = getParent_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Inode __returnValue = new com.earthview.world.spatial2d.spatialindex.Inode(CreatedWhenConstruct.CWC_NotToCreate, "INode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Inode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "INode");
		}
		return __returnValue;
	}

	protected  int getFeatureCount_void_callback()
	{
		int returnValue = getFeatureCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getFeatureCount_void(long pNativeObject);
	/**
	 * 获取要素个数
	 * @return 要素个数
	 */
	public int getFeatureCount()
	{
		int returnValue = getFeatureCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFeatureCount_void_NoVirtual(long pNativeObject);
	protected int getFeatureCount_NoVirtual()
	{
		int returnValue = getFeatureCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getFeatrueData_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.spatial2d.spatialindex.Data returnValue = getFeatrueData(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFeatrueData_ev_int32(long pNativeObject, int index);
	/**
	 * 获取要素的ID
	 * @param index feature链表中的位置
	 * @return 要素数据
	 */
	public com.earthview.world.spatial2d.spatialindex.Data getFeatrueData(int index)
	{
		int indexParamValue = index;
		long returnValue = getFeatrueData_ev_int32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial2d.spatialindex.Data __returnValue = new com.earthview.world.spatial2d.spatialindex.Data(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Data");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Data)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Data");
		}
		return __returnValue;
	}
	native private long getFeatrueData_ev_int32_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.spatial2d.spatialindex.Data getFeatrueData_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getFeatrueData_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial2d.spatialindex.Data __returnValue = new com.earthview.world.spatial2d.spatialindex.Data(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Data");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Data)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Data");
		}
		return __returnValue;
	}

	protected  void getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback(long dfUpleftX, long dfUpleftY, long dfDownrightX, long dfDownRightY)
	{
		FloatPointer dfUpleftXParamValue = new FloatPointer(new InstancePointer(dfUpleftX));
		FloatPointer dfUpleftYParamValue = new FloatPointer(new InstancePointer(dfUpleftY));
		FloatPointer dfDownrightXParamValue = new FloatPointer(new InstancePointer(dfDownrightX));
		FloatPointer dfDownRightYParamValue = new FloatPointer(new InstancePointer(dfDownRightY));
		getNodeMBR(dfUpleftXParamValue, dfUpleftYParamValue, dfDownrightXParamValue, dfDownRightYParamValue);
	}

	native private void getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, long dfUpleftX, long dfUpleftY, long dfDownrightX, long dfDownRightY);
	/**
	 * 获取指定要素的外接矩形框
	 * @param dfUpleftX 左上角X
	 * @param dfUpleftY 左上角Y
	 * @param dfDownrightX 右下角X
	 * @param dfDownRightY 右下角Y
	 */
	public void getNodeMBR(FloatPointer dfUpleftX, FloatPointer dfUpleftY, FloatPointer dfDownrightX, FloatPointer dfDownRightY)
	{
		long dfUpleftXParamValue = dfUpleftX.nativeObject.pointer;
		long dfUpleftYParamValue = dfUpleftY.nativeObject.pointer;
		long dfDownrightXParamValue = dfDownrightX.nativeObject.pointer;
		long dfDownRightYParamValue = dfDownRightY.nativeObject.pointer;
		getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, dfUpleftXParamValue, dfUpleftYParamValue, dfDownrightXParamValue, dfDownRightYParamValue);
	}
	native private void getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, long dfUpleftX, long dfUpleftY, long dfDownrightX, long dfDownRightY);
	protected void getNodeMBR_NoVirtual(FloatPointer dfUpleftX, FloatPointer dfUpleftY, FloatPointer dfDownrightX, FloatPointer dfDownRightY)
	{
		long dfUpleftXParamValue = dfUpleftX.nativeObject.pointer;
		long dfUpleftYParamValue = dfUpleftY.nativeObject.pointer;
		long dfDownrightXParamValue = dfDownrightX.nativeObject.pointer;
		long dfDownRightYParamValue = dfDownRightY.nativeObject.pointer;
		getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, dfUpleftXParamValue, dfUpleftYParamValue, dfDownrightXParamValue, dfDownRightYParamValue);
	}

	protected  boolean isLeaf_void_callback()
	{
		boolean returnValue = isLeaf();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isLeaf_void(long pNativeObject);
	/**
	 * 是否是叶节点
	 * @return 1，是叶节点,0非叶子节点
	 */
	public boolean isLeaf()
	{
		boolean returnValue = isLeaf_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLeaf_void_NoVirtual(long pNativeObject);
	protected boolean isLeaf_NoVirtual()
	{
		boolean returnValue = isLeaf_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isRoot_void_callback()
	{
		boolean returnValue = isRoot();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isRoot_void(long pNativeObject);
	/**
	 * 是否是根节点
	 * @return 1，是根节点,0非根子节点
	 */
	public boolean isRoot()
	{
		boolean returnValue = isRoot_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isRoot_void_NoVirtual(long pNativeObject);
	protected boolean isRoot_NoVirtual()
	{
		boolean returnValue = isRoot_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void toStream_ev_uchar_ev_uint32_callback(long pBuffer, long lenth)
	{
		NativeObjectPointer<UBytePointer> pBufferParamValue = new NativeObjectPointer<UBytePointer>(new InstancePointer(pBuffer));
		UIntegerPointer lenthParamValue = new UIntegerPointer(new InstancePointer(lenth));
		toStream(pBufferParamValue, lenthParamValue);
	}

	native private void toStream_ev_uchar_ev_uint32(long pNativeObject, long pBuffer, long lenth);
	/**
	 * 变换到流
	 * @param pBuffer 流内存,外边调用释放
	 * @param lenth 数据长度
	 */
	public void toStream(NativeObjectPointer<UBytePointer> pBuffer, UIntegerPointer lenth)
	{
		long pBufferParamValue = pBuffer.nativeObject.pointer;
		long lenthParamValue = lenth.nativeObject.pointer;
		toStream_ev_uchar_ev_uint32(this.nativeObject.pointer, pBufferParamValue, lenthParamValue);
	}
	native private void toStream_ev_uchar_ev_uint32_NoVirtual(long pNativeObject, long pBuffer, long lenth);
	protected void toStream_NoVirtual(NativeObjectPointer<UBytePointer> pBuffer, UIntegerPointer lenth)
	{
		long pBufferParamValue = pBuffer.nativeObject.pointer;
		long lenthParamValue = lenth.nativeObject.pointer;
		toStream_ev_uchar_ev_uint32_NoVirtual(this.nativeObject.pointer, pBufferParamValue, lenthParamValue);
	}

	public Inode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Inode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getNodeID_void(long pNativeObject, String method);
	native protected void register_getChildrenCount_void(long pNativeObject, String method);
	native protected void register_getChildNode_ev_int32(long pNativeObject, String method);
	native protected void register_getParent_void(long pNativeObject, String method);
	native protected void register_getFeatureCount_void(long pNativeObject, String method);
	native protected void register_getFeatrueData_ev_int32(long pNativeObject, String method);
	native protected void register_getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_isLeaf_void(long pNativeObject, String method);
	native protected void register_isRoot_void(long pNativeObject, String method);
	native protected void register_toStream_ev_uchar_ev_uint32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getNodeID_void(this.nativeObject.pointer, "getNodeID_void_callback");
			this.register_getChildrenCount_void(this.nativeObject.pointer, "getChildrenCount_void_callback");
			this.register_getChildNode_ev_int32(this.nativeObject.pointer, "getChildNode_ev_int32_callback");
			this.register_getParent_void(this.nativeObject.pointer, "getParent_void_callback");
			this.register_getFeatureCount_void(this.nativeObject.pointer, "getFeatureCount_void_callback");
			this.register_getFeatrueData_ev_int32(this.nativeObject.pointer, "getFeatrueData_ev_int32_callback");
			this.register_getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_isLeaf_void(this.nativeObject.pointer, "isLeaf_void_callback");
			this.register_isRoot_void(this.nativeObject.pointer, "isRoot_void_callback");
			this.register_toStream_ev_uchar_ev_uint32(this.nativeObject.pointer, "toStream_ev_uchar_ev_uint32_callback");
		}
	}
	
	public static Inode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Inode obj = null;
 		if(baseObj instanceof Inode)
		{
			obj = (Inode)baseObj;
		} else {
			obj = new Inode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "INode");
			obj.increaseCast();
		}

		return obj;
	}
}
