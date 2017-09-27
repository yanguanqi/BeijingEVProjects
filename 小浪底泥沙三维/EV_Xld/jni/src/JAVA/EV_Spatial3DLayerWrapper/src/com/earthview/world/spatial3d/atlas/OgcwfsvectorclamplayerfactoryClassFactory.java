package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwfsvectorclamplayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwfsvectorclamplayerfactory emptyInstance = new Ogcwfsvectorclamplayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
