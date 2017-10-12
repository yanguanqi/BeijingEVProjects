package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class OsgblayerlevelvectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Osgblayerlevelvector emptyInstance = new Osgblayerlevelvector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
