package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbrasterlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dbrasterlayer emptyInstance = new Dbrasterlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
