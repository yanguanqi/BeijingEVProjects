package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareOcclusionQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareOcclusionQuery emptyInstance = new HardwareOcclusionQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
