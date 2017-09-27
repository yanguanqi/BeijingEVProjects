package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SectionPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SectionPoint emptyInstance = new SectionPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
