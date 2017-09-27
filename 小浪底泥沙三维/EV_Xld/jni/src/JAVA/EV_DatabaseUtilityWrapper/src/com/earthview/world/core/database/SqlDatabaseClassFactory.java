package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlDatabaseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlDatabase emptyInstance = new SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
