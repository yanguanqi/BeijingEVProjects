package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleTextClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleText emptyInstance = new ScaleText(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
