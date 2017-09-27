package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcresultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcresult emptyInstance = new Ogcresult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
