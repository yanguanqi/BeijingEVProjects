package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlDriverCreatorBaseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SqlDriverCreatorBase emptyInstance = new SqlDriverCreatorBase(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
