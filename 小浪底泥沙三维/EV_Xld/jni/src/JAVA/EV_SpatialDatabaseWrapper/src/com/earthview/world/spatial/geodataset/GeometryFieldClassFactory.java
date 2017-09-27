package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryFieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryField emptyInstance = new GeometryField(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
