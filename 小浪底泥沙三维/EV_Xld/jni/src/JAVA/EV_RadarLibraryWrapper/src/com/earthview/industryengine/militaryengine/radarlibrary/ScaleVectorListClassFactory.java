package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleVectorListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleVectorList emptyInstance = new ScaleVectorList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
