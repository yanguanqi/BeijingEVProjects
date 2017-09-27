package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ExtOctNodeInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ExtOctNodeInfo emptyInstance = new ExtOctNodeInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
