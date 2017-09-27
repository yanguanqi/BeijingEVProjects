package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlDriver emptyInstance = new SqlDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
