package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetOptionCreateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetOptionCreate emptyInstance = new DatasetOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
