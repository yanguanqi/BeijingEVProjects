package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 4叉树
 */
public class Obqmodelquadtree extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree", new ObqmodelquadtreeClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Obqmodelquadtree() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQModelQuadTree", null);
	}

	/**
	 * 构造函数centerX、centerY、minx、miny、maxx、maxy的单位可以是原始xml文件中的数据值单位，也可以是经纬度。
	 * @param level 树级别
	 * @param index 在父树种的序号（从左到右从上到下依次位0、1、2、3）
	 * @param parentCode 父树编码，编码是从根树到当前树序号构成的编码，第0级编码：0、1、2、3。第一级编码00、01、02、03、10、11、12、13、20、21、22、23、30、31、32、33
	 * @param centerX 树的中心点x
	 * @param centerY 树的中心点y
	 * @param minx 树的最小x
	 * @param miny 树的最小y
	 * @param maxx 树的最大x
	 * @param maxy 树的最大y
	 */
	public Obqmodelquadtree(int level, int index, String parentCode, double centerX, double centerY, double minx, double miny, double maxx, double maxy) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer levelPtr = new BasePointer(level);
		list.add("level", levelPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		BasePointer parentCodePtr = new BasePointer(parentCode);
		list.add("parentCode", parentCodePtr.get());
		BasePointer centerXPtr = new BasePointer(centerX);
		list.add("centerX", centerXPtr.get());
		BasePointer centerYPtr = new BasePointer(centerY);
		list.add("centerY", centerYPtr.get());
		BasePointer minxPtr = new BasePointer(minx);
		list.add("minx", minxPtr.get());
		BasePointer minyPtr = new BasePointer(miny);
		list.add("miny", minyPtr.get());
		BasePointer maxxPtr = new BasePointer(maxx);
		list.add("maxx", maxxPtr.get());
		BasePointer maxyPtr = new BasePointer(maxy);
		list.add("maxy", maxyPtr.get());
		Create("OBQModelQuadTree", list);
	}

	native private void setCenter_ev_real64_ev_real64(long pNativeObject, double centerX, double centerY);
	/**
	 * 设置树的中心点位置
	 * @param centerX 树的中心点x
	 * @param centerY 树的中心点y
	 */
	public void setCenter(double centerX, double centerY)
	{
		double centerXParamValue = centerX;
		double centerYParamValue = centerY;
		setCenter_ev_real64_ev_real64(this.nativeObject.pointer, centerXParamValue, centerYParamValue);
	}
	native private void setLevle_ev_int32(long pNativeObject, int level);
	/**
	 * 设置树的级别
	 * @param  
	 */
	public void setLevle(int level)
	{
		int levelParamValue = level;
		setLevle_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private double getCenterX_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getCenterX()
	{
		double returnValue = getCenterX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCenterY_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getCenterY()
	{
		double returnValue = getCenterY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinX_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean addOBQModelNode_OBQModelNode_ev_int32(long pNativeObject, long modelNode, int level);
	/**
	 * 添加一个模型节点到指定级别
	 * @param modelNode 模型节点
	 * @param level 级别
	 */
	public boolean addOBQModelNode(com.earthview.world.spatial3d.modelmanager.Obqmodelnode modelNode, int level)
	{
		long modelNodeParamValue = modelNode.nativeObject.pointer;
		int levelParamValue = level;
		boolean returnValue = addOBQModelNode_OBQModelNode_ev_int32(this.nativeObject.pointer, modelNodeParamValue, levelParamValue);
		return returnValue;
	}
	native private boolean getNode_EVString_OBQModelNode(long pNativeObject, String nodename, long node);
	/**
	 * 通过模型节点名称获取模型节点
	 * @param nodename 模型节点名称
	 * @param node 模型节点对象
	 */
	public boolean getNode(String nodename, com.earthview.world.spatial3d.modelmanager.Obqmodelnode node)
	{
		String nodenameParamValue = nodename;
		long nodeParamValue = node.nativeObject.pointer;
		boolean returnValue = getNode_EVString_OBQModelNode(this.nativeObject.pointer, nodenameParamValue, nodeParamValue);
		return returnValue;
	}
	native private String getModelFiles_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, int level, double minx, double miny, double maxx, double maxy);
	/**
	 * 
	 * @param  
	 */
	public String getModelFiles(int level, double minx, double miny, double maxx, double maxy)
	{
		int levelParamValue = level;
		double minxParamValue = minx;
		double minyParamValue = miny;
		double maxxParamValue = maxx;
		double maxyParamValue = maxy;
		String returnValue = getModelFiles_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, levelParamValue, minxParamValue, minyParamValue, maxxParamValue, maxyParamValue);
		return returnValue;
	}
	native private long getCode_void(long pNativeObject);
	/**
	 * 获取当前树编码
	 * @param  
	 */
	public StringPointer getCode()
	{
		long returnValue = getCode_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long child_ev_int32(long pNativeObject, int index);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial3d.modelmanager.Obqmodelquadtree child(int index)
	{
		int indexParamValue = index;
		long returnValue = child_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.Obqmodelquadtree __returnValue = new com.earthview.world.spatial3d.modelmanager.Obqmodelquadtree(CreatedWhenConstruct.CWC_NotToCreate, "OBQModelQuadTree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Obqmodelquadtree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "OBQModelQuadTree");
		}
		return __returnValue;
	}
	native private String getMyModelPathList_OBQModelQuadRootTree(long pNativeObject, long tree);
	/**
	 * 获取当前树拥有的模型路径名称，模型名称使用“：”分隔
	 * @param  
	 */
	public String getMyModelPathList(com.earthview.world.spatial3d.modelmanager.Obqmodelquadroottree tree)
	{
		long treeParamValue = tree.nativeObject.pointer;
		String returnValue = getMyModelPathList_OBQModelQuadRootTree(this.nativeObject.pointer, treeParamValue);
		return returnValue;
	}
	native private int getMyModelCount_void(long pNativeObject);
	/**
	 * 获取当前树拥有的模型个数
	 * @param  
	 */
	public int getMyModelCount()
	{
		int returnValue = getMyModelCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Obqmodelquadtree(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqmodelquadtree(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqmodelquadtree fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqmodelquadtree obj = null;
 		if(baseObj instanceof Obqmodelquadtree)
		{
			obj = (Obqmodelquadtree)baseObj;
		} else {
			obj = new Obqmodelquadtree(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQModelQuadTree");
			obj.increaseCast();
		}

		return obj;
	}
}
