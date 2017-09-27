package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToursClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Tours emptyInstance = new Tours(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
