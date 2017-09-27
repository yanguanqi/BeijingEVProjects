package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IsquaregridClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Isquaregrid emptyInstance = new Isquaregrid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
