package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultHardwareBufferManagerBaseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultHardwareBufferManagerBase emptyInstance = new DefaultHardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
