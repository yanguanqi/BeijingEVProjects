package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareIndexBufferSharedPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareIndexBufferSharedPtr emptyInstance = new HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
