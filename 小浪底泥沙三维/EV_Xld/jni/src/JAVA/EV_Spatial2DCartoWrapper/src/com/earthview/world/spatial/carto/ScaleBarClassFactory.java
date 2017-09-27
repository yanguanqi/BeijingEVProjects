package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleBarClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleBar emptyInstance = new ScaleBar(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
