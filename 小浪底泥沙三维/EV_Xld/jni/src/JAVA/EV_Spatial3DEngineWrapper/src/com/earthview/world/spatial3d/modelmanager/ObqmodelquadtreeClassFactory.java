package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqmodelquadtreeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Obqmodelquadtree emptyInstance = new Obqmodelquadtree(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
