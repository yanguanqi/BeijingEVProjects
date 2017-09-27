package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoFeatureClassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnoFeatureClass emptyInstance = new AnnoFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
