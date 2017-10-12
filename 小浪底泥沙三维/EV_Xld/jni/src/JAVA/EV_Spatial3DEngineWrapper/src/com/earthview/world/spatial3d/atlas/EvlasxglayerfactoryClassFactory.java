package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlasxglayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlasxglayerfactory emptyInstance = new Evlasxglayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
