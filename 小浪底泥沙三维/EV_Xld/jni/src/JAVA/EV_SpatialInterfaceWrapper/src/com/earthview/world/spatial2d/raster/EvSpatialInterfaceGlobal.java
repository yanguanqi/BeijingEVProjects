package com.earthview.world.spatial2d.raster;
import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;
public class EvSpatialInterfaceGlobal {
	
	native private static int EVgsTermProgress_ev_real64_ev_char_void(double dfComplete, long pszMessage, long pProgressArg);
	
	public static int EVgsTermProgress(double dfComplete, BytePointer pszMessage, VoidPointer pProgressArg)
	{
		double dfCompleteParamValue = dfComplete;
		long pszMessageParamValue = (pszMessage == null ? 0L : pszMessage.nativeObject.pointer);
		long pProgressArgParamValue = (pProgressArg == null ? 0L : pProgressArg.nativeObject.pointer);
		int returnValue = EVgsTermProgress_ev_real64_ev_char_void(dfCompleteParamValue, pszMessageParamValue, pProgressArgParamValue);
		return returnValue;
	}

}
