package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NaattributeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Naattribute emptyInstance = new Naattribute(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
