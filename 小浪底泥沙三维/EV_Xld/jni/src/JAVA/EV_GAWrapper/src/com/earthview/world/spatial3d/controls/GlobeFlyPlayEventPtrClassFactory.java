package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPlayEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyPlayEventPtr emptyInstance = new GlobeFlyPlayEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
