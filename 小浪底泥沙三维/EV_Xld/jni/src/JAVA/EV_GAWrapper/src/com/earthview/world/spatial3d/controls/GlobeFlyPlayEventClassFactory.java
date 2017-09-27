package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPlayEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyPlayEvent emptyInstance = new GlobeFlyPlayEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
