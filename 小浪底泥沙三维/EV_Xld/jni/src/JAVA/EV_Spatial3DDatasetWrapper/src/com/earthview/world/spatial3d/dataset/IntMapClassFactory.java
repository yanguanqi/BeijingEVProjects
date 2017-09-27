package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntMap emptyInstance = new IntMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
