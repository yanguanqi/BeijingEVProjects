package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MarkNorthArrowClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MarkNorthArrow emptyInstance = new MarkNorthArrow(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
