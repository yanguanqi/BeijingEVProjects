package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyEventPtr emptyInstance = new GlobeFlyEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
