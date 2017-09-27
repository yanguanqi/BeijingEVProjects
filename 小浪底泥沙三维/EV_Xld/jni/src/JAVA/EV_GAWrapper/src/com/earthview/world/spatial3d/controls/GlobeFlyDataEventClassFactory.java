package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyDataEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyDataEvent emptyInstance = new GlobeFlyDataEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
