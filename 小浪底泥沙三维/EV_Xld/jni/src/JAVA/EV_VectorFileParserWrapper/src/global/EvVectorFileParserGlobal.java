package global;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;
public class EvVectorFileParserGlobal {
	
	native private static long ACGetColorTable_void();
	
	public static UBytePointer ACGetColorTable()
	{
		long returnValue = ACGetColorTable_void();
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	native private static String ACTextUnescape_ev_char(long pszRawInput);
	
	public static String ACTextUnescape(BytePointer pszRawInput)
	{
		long pszRawInputParamValue = (pszRawInput == null ? 0L : pszRawInput.nativeObject.pointer);
		String returnValue = ACTextUnescape_ev_char(pszRawInputParamValue);
		return returnValue;
	}

}
