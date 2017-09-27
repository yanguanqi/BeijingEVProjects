package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureUserDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureUserData emptyInstance = new FeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
