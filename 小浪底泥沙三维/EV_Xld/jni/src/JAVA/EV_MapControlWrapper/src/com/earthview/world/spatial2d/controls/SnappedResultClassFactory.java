package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SnappedResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SnappedResult emptyInstance = new SnappedResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
