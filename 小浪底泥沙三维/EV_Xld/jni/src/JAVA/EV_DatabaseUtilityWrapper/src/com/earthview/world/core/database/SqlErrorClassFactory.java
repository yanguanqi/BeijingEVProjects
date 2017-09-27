package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlErrorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlError emptyInstance = new SqlError(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
