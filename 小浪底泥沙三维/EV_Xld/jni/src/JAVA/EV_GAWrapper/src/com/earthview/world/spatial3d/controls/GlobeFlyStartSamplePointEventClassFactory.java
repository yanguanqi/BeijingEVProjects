package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyStartSamplePointEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyStartSamplePointEvent emptyInstance = new GlobeFlyStartSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
