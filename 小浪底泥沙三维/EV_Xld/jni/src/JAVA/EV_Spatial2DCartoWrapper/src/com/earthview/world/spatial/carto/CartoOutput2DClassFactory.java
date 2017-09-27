package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CartoOutput2DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CartoOutput2D emptyInstance = new CartoOutput2D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
