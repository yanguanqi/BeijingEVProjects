package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TourUnitVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TourUnitVector emptyInstance = new TourUnitVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
