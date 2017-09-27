package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IgeometryinsertClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Igeometryinsert emptyInstance = new Igeometryinsert(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
