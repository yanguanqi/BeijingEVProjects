package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IclampscenelayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iclampscenelayer emptyInstance = new Iclampscenelayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
