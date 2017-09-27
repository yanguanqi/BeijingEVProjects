package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfslayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfslayerfactory emptyInstance = new Wfslayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
