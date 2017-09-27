package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FrenderblocksetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Frenderblockset emptyInstance = new Frenderblockset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
