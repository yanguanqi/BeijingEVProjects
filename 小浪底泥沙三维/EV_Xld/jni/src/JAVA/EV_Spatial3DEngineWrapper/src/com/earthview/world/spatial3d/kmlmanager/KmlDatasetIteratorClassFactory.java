package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlDatasetIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlDatasetIterator emptyInstance = new KmlDatasetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
