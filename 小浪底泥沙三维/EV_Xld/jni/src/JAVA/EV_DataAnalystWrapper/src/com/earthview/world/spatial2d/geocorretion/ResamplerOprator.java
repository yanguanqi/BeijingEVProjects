package com.earthview.world.spatial2d.geocorretion;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//////////////////////////////////////////////////////////////////////////////////////
//class ResamplerOprator
///////////////////////////////////////////////////////////////////////////////////////
///<summary>
///重采样变换类
///<summary>
public class ResamplerOprator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator", new ResamplerOpratorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ResamplerOprator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ResamplerOprator", null);
	}

	native private int inlitialOperator_RectifyResampleWarper(long pNativeObject, long warper);
	/**
	 * 初始化，resample完成类
	 * @param warper 重采样参数结构体
	 * @return 0标识成功，-1标识参数不完全
	 */
	public int inlitialOperator(com.earthview.world.spatial2d.geocorretion.RectifyResampleWarper warper)
	{
		long warperParamValue = warper.nativeObject.pointer;
		int returnValue = inlitialOperator_RectifyResampleWarper(this.nativeObject.pointer, warperParamValue);
		return returnValue;
	}
	native private boolean CreateAndResample_ev_char(long pNativeObject, long pszFullpath);
	/**
	 * 创建一个数据集，并执行纠正
	 * @param pszFullpath 目标数据集文件路径
	 * @return 0,标识成功，1标识失败
	 */
	public boolean CreateAndResample(BytePointer pszFullpath)
	{
		long pszFullpathParamValue = (pszFullpath == null ? 0L : pszFullpath.nativeObject.pointer);
		boolean returnValue = CreateAndResample_ev_char(this.nativeObject.pointer, pszFullpathParamValue);
		return returnValue;
	}
	native private boolean resampleBuffer_ev_int32_ev_int32_ev_int32_ev_int32_ev_uchar(long pNativeObject, int destOffX, int destOffY, int W, int H, long pBuffer);
	/**
	 * 分块重采样，并返回指定范围的数据
	 * @param pBuffer 指定范围数据，由user分配与释放
	 */
	public boolean resampleBuffer(int destOffX, int destOffY, int W, int H, UBytePointer pBuffer)
	{
		int destOffXParamValue = destOffX;
		int destOffYParamValue = destOffY;
		int WParamValue = W;
		int HParamValue = H;
		long pBufferParamValue = (pBuffer == null ? 0L : pBuffer.nativeObject.pointer);
		boolean returnValue = resampleBuffer_ev_int32_ev_int32_ev_int32_ev_int32_ev_uchar(this.nativeObject.pointer, destOffXParamValue, destOffYParamValue, WParamValue, HParamValue, pBufferParamValue);
		return returnValue;
	}
	public ResamplerOprator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResamplerOprator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ResamplerOprator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResamplerOprator obj = null;
 		if(baseObj instanceof ResamplerOprator)
		{
			obj = (ResamplerOprator)baseObj;
		} else {
			obj = new ResamplerOprator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ResamplerOprator");
			obj.increaseCast();
		}

		return obj;
	}
}
