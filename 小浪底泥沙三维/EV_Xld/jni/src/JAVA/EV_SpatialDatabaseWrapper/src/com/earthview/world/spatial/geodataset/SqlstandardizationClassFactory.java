package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlstandardizationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Sqlstandardization emptyInstance = new Sqlstandardization(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
