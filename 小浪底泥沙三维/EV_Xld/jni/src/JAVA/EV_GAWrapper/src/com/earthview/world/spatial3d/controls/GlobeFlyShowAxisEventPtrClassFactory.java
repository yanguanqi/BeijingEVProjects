package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyShowAxisEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyShowAxisEventPtr emptyInstance = new GlobeFlyShowAxisEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
