package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class OsgblayermetadataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Osgblayermetadata emptyInstance = new Osgblayermetadata(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
