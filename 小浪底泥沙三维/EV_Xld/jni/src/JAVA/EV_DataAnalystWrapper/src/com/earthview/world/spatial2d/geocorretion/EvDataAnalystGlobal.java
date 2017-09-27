package com.earthview.world.spatial2d.geocorretion;
import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;
public class EvDataAnalystGlobal {
	
	native private static void getSuggestOutPut_void_ev_int32_ev_int32_ev_real64(long pTrans, long nWidth, long nHeight, long dfGeoTransform);
	
	public static void getSuggestOutPut(VoidPointer pTrans, IntegerPointer nWidth, IntegerPointer nHeight, DoublePointer dfGeoTransform)
	{
		long pTransParamValue = (pTrans == null ? 0L : pTrans.nativeObject.pointer);
		long nWidthParamValue = nWidth.nativeObject.pointer;
		long nHeightParamValue = nHeight.nativeObject.pointer;
		long dfGeoTransformParamValue = (dfGeoTransform == null ? 0L : dfGeoTransform.nativeObject.pointer);
		getSuggestOutPut_void_ev_int32_ev_int32_ev_real64(pTransParamValue, nWidthParamValue, nHeightParamValue, dfGeoTransformParamValue);
	}

	native private static long genCreateTransformerArg_void_void_ev_real64_ev_int32(long pRectifyRef, long pStdImageRef, long pParameter, int iCount);
	
	public static VoidPointer genCreateTransformerArg(VoidPointer pRectifyRef, VoidPointer pStdImageRef, DoublePointer pParameter, int iCount)
	{
		long pRectifyRefParamValue = (pRectifyRef == null ? 0L : pRectifyRef.nativeObject.pointer);
		long pStdImageRefParamValue = (pStdImageRef == null ? 0L : pStdImageRef.nativeObject.pointer);
		long pParameterParamValue = (pParameter == null ? 0L : pParameter.nativeObject.pointer);
		int iCountParamValue = iCount;
		long returnValue = genCreateTransformerArg_void_void_ev_real64_ev_int32(pRectifyRefParamValue, pStdImageRefParamValue, pParameterParamValue, iCountParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	native private static void destroyTransformH_void(long hTrans);
	
	public static void destroyTransformH(VoidPointer hTrans)
	{
		long hTransParamValue = (hTrans == null ? 0L : hTrans.nativeObject.pointer);
		destroyTransformH_void(hTransParamValue);
	}

}
