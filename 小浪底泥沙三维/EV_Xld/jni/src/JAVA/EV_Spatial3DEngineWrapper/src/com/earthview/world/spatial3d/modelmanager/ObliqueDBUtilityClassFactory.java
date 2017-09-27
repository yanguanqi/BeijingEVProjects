package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObliqueDBUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObliqueDBUtility emptyInstance = new ObliqueDBUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
