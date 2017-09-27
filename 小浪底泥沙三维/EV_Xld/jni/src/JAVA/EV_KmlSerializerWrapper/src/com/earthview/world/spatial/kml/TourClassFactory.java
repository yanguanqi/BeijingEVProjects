package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TourClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Tour emptyInstance = new Tour(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
