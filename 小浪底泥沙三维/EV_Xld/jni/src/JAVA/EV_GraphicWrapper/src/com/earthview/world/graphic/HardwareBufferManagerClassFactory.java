package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareBufferManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareBufferManager emptyInstance = new HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
