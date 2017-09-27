package com.earthview.world.spatial3dproxy.modeldb;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDBEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDBEvent emptyInstance = new ModelDBEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
