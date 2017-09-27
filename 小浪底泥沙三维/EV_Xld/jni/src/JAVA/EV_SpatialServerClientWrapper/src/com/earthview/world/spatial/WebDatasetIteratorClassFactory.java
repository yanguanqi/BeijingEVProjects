package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebDatasetIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebDatasetIterator emptyInstance = new WebDatasetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
