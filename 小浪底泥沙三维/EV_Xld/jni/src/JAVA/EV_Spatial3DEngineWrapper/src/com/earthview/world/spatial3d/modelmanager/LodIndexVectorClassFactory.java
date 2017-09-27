package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodIndexVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodIndexVector emptyInstance = new LodIndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
