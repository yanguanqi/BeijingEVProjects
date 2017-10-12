package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfsdatalayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfsdatalayerfactory emptyInstance = new Wfsdatalayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
