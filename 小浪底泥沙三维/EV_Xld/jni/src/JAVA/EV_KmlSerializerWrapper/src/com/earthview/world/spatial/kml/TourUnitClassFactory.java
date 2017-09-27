package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TourUnitClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TourUnit emptyInstance = new TourUnit(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
