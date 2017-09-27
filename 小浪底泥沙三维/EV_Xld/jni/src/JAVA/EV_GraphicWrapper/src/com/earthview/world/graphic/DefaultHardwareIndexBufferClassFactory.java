package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultHardwareIndexBufferClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultHardwareIndexBuffer emptyInstance = new DefaultHardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
