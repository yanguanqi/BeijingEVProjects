package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwarePixelBufferSharedPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwarePixelBufferSharedPtr emptyInstance = new HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
