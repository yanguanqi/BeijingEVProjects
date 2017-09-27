package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareBufferClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareBuffer emptyInstance = new HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
