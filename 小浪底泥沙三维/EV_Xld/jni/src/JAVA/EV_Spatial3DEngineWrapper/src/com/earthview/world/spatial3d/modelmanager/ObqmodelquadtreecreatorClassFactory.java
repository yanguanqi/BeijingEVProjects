package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqmodelquadtreecreatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Obqmodelquadtreecreator emptyInstance = new Obqmodelquadtreecreator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
