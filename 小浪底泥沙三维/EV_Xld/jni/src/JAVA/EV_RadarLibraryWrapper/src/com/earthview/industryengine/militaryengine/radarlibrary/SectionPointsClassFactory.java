package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SectionPointsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SectionPoints emptyInstance = new SectionPoints(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
