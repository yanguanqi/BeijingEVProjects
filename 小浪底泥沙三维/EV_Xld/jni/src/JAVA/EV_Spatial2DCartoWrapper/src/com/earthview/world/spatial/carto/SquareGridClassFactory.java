package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SquareGridClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SquareGrid emptyInstance = new SquareGrid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
