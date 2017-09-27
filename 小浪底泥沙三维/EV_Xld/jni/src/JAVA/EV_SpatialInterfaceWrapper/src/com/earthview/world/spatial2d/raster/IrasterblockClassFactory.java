package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrasterblockClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irasterblock emptyInstance = new Irasterblock(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
