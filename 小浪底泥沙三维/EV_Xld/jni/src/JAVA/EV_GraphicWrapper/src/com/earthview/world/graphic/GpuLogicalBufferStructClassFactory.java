package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuLogicalBufferStructClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuLogicalBufferStruct emptyInstance = new GpuLogicalBufferStruct(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
