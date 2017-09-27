package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartFeatureSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartFeatureSelection emptyInstance = new ChartFeatureSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
