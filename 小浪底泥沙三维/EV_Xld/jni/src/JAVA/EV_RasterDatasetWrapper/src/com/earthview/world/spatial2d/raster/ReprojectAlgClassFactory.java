package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ReprojectAlgClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ReprojectAlg emptyInstance = new ReprojectAlg(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
