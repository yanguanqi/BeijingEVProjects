package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqmodelnodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Obqmodelnode emptyInstance = new Obqmodelnode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
