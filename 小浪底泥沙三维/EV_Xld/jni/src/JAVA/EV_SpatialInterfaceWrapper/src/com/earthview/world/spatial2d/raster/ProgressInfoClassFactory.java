package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProgressInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ProgressInfo emptyInstance = new ProgressInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
