package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodecodeAndTypeMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NodecodeAndTypeMap emptyInstance = new NodecodeAndTypeMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
