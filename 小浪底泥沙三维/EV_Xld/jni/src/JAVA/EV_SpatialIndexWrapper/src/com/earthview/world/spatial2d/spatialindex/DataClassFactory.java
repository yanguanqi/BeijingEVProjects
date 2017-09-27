package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Data emptyInstance = new Data(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
