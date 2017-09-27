package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnoFeature emptyInstance = new AnnoFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
