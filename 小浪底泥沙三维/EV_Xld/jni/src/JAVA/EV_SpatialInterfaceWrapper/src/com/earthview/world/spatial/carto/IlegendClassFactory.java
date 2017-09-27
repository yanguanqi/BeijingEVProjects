package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlegendClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilegend emptyInstance = new Ilegend(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
