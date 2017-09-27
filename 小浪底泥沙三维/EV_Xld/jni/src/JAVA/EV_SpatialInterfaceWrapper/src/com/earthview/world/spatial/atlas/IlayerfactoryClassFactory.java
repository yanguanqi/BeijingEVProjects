package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilayerfactory emptyInstance = new Ilayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
