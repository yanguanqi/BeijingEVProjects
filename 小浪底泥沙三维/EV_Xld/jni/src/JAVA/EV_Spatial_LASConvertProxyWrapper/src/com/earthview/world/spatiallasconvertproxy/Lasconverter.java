package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 				管理点云对象类
 */
public class Lasconverter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLASConverter", new LasconverterClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Lasconverter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLASConverter", null);
	}

	native private void setLASPaths_StringVector(long pNativeObject, long lasPaths);
	/**
	 * 设置las点云文件路径
	 * @param lasPaths 点云文件路径
	 */
	public void setLASPaths(com.earthview.world.core.StringVector lasPaths)
	{
		long lasPathsParamValue = lasPaths.nativeObject.pointer;
		setLASPaths_StringVector(this.nativeObject.pointer, lasPathsParamValue);
	}
	native private void setConvertListener_CLASConverterListener(long pNativeObject, long listener);
	/**
	 * 设置转换进度的监听
	 * @param listener 监听
	 */
	public void setConvertListener(com.earthview.world.spatiallasconvertproxy.Lasconverterlistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setConvertListener_CLASConverterListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private static long getSpatialReference_EVString(String lasPath);
	/**
	 * 静态函数：获取点云数据文件的源参考系
	 * @param lasPath 点云数据文件
	 * @return 点云文件的源参考系
	 */
	public static com.earthview.world.spatial.utility.SpatialReference getSpatialReference(String lasPath)
	{
		String lasPathParamValue = lasPath;
		long returnValue = getSpatialReference_EVString(lasPathParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private void stopConvert_void(long pNativeObject);
	/**
	 * 终止转换
	 * @param  
	 */
	public void stopConvert()
	{
		stopConvert_void(this.nativeObject.pointer);
	}
	native private boolean convertLas_CSpatialReference_EVString_ev_bool_EVString_ev_bool_CLasLODParam(long pNativeObject, long srcSr, String outPath, boolean isMerge, String name, boolean isLod, long param);
	/**
	 * 把点云数据转换并输出
	 * @param srcSr 源数据参考系
	 * @param outPath mesh输出路径
	 * @param isMerge 多个点云数据转换时是否合并
	 * @param name 合并时输出的mesh前缀名称(仅在isMerge为true时有效)
	 * @param isLod 输出的mesh是否生成LOD
	 * @param param 生成LOD时的参数(仅在isLod为true时有效)
	 * @return 是否成功
	 */
	public boolean convertLas(com.earthview.world.spatial.utility.SpatialReference srcSr, String outPath, boolean isMerge, String name, boolean isLod, com.earthview.world.spatiallasconvertproxy.LasLODParam param)
	{
		long srcSrParamValue = (srcSr == null ? 0L : srcSr.nativeObject.pointer);
		String outPathParamValue = outPath;
		boolean isMergeParamValue = isMerge;
		String nameParamValue = name;
		boolean isLodParamValue = isLod;
		long paramParamValue = param.nativeObject.pointer;
		boolean returnValue = convertLas_CSpatialReference_EVString_ev_bool_EVString_ev_bool_CLasLODParam(this.nativeObject.pointer, srcSrParamValue, outPathParamValue, isMergeParamValue, nameParamValue, isLodParamValue, paramParamValue);
		return returnValue;
	}
	public Lasconverter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Lasconverter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Lasconverter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Lasconverter obj = null;
 		if(baseObj instanceof Lasconverter)
		{
			obj = (Lasconverter)baseObj;
		} else {
			obj = new Lasconverter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLASConverter");
			obj.increaseCast();
		}

		return obj;
	}
}
