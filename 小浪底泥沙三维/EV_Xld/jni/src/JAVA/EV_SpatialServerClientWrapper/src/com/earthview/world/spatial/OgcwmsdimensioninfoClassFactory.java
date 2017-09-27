package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmsdimensioninfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmsdimensioninfo emptyInstance = new Ogcwmsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
