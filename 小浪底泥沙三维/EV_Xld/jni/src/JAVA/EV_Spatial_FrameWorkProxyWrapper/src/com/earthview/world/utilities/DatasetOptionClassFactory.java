package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetOptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetOption emptyInstance = new DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
