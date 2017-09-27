package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetOptionCreateDbClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetOptionCreateDb emptyInstance = new DatasetOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
