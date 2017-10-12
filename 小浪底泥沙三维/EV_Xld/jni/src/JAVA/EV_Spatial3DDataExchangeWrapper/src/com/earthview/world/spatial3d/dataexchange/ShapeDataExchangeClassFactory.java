package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShapeDataExchangeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShapeDataExchange emptyInstance = new ShapeDataExchange(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
