package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfieldsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifields emptyInstance = new Ifields(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
