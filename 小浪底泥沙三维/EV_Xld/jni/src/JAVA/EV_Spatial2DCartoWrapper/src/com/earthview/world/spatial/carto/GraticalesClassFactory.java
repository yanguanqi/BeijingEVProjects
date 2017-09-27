package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GraticalesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Graticales emptyInstance = new Graticales(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
