package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultHardwareBufferManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultHardwareBufferManager emptyInstance = new DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
