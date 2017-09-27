package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ComponentUnitsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ComponentUnits emptyInstance = new ComponentUnits(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
