package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyEvent emptyInstance = new GlobeFlyEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
