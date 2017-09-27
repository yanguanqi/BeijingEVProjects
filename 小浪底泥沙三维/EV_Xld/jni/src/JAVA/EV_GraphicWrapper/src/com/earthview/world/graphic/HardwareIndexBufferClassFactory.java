package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareIndexBufferClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareIndexBuffer emptyInstance = new HardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
