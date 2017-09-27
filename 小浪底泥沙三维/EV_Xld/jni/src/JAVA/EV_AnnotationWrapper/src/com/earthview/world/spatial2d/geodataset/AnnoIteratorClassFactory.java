package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnoIterator emptyInstance = new AnnoIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
