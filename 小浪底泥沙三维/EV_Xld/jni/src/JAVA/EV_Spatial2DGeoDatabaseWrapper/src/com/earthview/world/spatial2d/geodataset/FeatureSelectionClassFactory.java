package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureSelection emptyInstance = new FeatureSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
