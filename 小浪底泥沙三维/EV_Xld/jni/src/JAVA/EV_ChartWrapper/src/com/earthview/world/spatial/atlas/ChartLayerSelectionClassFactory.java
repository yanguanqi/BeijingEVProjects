package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartLayerSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartLayerSelection emptyInstance = new ChartLayerSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
