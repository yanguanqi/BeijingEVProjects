package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlResult emptyInstance = new SqlResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
