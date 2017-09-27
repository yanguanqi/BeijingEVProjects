package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodnodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Lodnode emptyInstance = new Lodnode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
