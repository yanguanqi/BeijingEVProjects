package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IgeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Igeometry emptyInstance = new Igeometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
