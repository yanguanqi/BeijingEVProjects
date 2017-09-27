package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwarePixelBufferClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwarePixelBuffer emptyInstance = new HardwarePixelBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
