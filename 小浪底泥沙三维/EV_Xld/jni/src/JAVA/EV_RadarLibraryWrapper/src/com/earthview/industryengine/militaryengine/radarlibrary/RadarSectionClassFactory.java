package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RadarSectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RadarSection emptyInstance = new RadarSection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
