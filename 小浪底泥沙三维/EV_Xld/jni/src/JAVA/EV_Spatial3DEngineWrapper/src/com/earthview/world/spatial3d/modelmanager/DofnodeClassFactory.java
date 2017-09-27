package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DofnodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dofnode emptyInstance = new Dofnode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
