package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodIndexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodIndex emptyInstance = new LodIndex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
