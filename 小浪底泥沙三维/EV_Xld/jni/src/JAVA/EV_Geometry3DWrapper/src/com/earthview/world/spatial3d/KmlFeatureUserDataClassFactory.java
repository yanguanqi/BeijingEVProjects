package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFeatureUserDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFeatureUserData emptyInstance = new KmlFeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
