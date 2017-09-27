package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebDataset emptyInstance = new WebDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
