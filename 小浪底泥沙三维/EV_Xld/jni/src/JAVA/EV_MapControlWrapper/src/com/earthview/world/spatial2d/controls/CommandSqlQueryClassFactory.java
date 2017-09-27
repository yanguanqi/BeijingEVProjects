package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSqlQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSqlQuery emptyInstance = new CommandSqlQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
