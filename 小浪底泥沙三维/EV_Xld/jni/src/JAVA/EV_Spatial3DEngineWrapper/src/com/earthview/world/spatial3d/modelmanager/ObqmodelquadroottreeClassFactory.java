package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqmodelquadroottreeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Obqmodelquadroottree emptyInstance = new Obqmodelquadroottree(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
