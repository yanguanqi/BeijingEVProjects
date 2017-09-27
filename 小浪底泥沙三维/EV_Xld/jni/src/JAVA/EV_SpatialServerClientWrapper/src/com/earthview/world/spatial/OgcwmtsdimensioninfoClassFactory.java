package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmtsdimensioninfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmtsdimensioninfo emptyInstance = new Ogcwmtsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
