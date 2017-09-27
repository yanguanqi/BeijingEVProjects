package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartLayer emptyInstance = new ChartLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
