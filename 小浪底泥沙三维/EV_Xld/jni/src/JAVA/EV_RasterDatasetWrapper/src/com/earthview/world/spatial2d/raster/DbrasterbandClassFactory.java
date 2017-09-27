package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbrasterbandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dbrasterband emptyInstance = new Dbrasterband(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
