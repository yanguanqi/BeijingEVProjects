package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuLogicalBufferStructPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuLogicalBufferStructPtr emptyInstance = new GpuLogicalBufferStructPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
