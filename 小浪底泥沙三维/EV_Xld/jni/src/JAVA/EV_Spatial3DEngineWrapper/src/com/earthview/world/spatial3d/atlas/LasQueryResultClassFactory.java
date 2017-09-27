package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasQueryResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasQueryResult emptyInstance = new LasQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
