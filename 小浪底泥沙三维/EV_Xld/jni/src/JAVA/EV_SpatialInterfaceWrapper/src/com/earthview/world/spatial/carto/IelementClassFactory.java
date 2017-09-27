package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IelementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ielement emptyInstance = new Ielement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
