package global;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;
public class EvMathEngineGlobal {
	
	native private static long closest2ExpN_ev_uint32(long val);
	
	public static long closest2ExpN(long val)
	{
		long valParamValue = val;
		long returnValue = closest2ExpN_ev_uint32(valParamValue);
		return returnValue;
	}

	native private static long closestHOrL2ExpN_ev_uint32_ev_bool(long val, boolean isLarger);
	
	public static long closestHOrL2ExpN(long val, boolean isLarger)
	{
		long valParamValue = val;
		boolean isLargerParamValue = isLarger;
		long returnValue = closestHOrL2ExpN_ev_uint32_ev_bool(valParamValue, isLargerParamValue);
		return returnValue;
	}

}
