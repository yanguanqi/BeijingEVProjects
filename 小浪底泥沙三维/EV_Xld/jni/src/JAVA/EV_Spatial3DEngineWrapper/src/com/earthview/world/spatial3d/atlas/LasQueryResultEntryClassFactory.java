package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasQueryResultEntryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasQueryResultEntry emptyInstance = new LasQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
