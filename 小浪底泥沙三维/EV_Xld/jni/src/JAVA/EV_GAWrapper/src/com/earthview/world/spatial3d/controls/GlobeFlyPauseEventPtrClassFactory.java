package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPauseEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyPauseEventPtr emptyInstance = new GlobeFlyPauseEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
