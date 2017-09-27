package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImaptitleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imaptitle emptyInstance = new Imaptitle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
