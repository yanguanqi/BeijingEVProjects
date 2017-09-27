package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FileRasterDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileRasterDriver emptyInstance = new FileRasterDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
