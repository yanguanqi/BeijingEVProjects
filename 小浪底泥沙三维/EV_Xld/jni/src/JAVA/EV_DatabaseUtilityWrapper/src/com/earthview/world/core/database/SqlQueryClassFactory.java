package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlQuery emptyInstance = new SqlQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
