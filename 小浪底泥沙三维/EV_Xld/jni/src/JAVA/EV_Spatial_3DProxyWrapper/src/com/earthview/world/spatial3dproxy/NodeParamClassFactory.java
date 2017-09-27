package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NodeParam emptyInstance = new NodeParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
