package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlRecordClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlRecord emptyInstance = new SqlRecord(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
