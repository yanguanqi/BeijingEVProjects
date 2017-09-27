package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyStopEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyStopEvent emptyInstance = new GlobeFlyStopEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
