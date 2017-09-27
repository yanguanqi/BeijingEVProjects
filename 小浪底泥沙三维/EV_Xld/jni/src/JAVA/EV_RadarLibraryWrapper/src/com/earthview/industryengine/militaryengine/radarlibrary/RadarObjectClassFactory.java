package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RadarObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RadarObject emptyInstance = new RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
