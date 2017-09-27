package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlIndexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlIndex emptyInstance = new SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
