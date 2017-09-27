package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerQueryResultsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerQueryResults emptyInstance = new ServerQueryResults(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
