package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NaattributesettingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Naattributesetting emptyInstance = new Naattributesetting(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
