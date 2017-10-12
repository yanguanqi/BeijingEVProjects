package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalImageDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalImageDataset emptyInstance = new LocalImageDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
