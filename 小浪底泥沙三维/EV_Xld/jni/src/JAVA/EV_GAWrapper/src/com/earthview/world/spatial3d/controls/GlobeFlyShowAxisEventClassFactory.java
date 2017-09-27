package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyShowAxisEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyShowAxisEvent emptyInstance = new GlobeFlyShowAxisEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
