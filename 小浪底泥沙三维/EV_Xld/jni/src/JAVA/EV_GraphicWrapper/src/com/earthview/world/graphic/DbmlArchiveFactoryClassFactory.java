package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbmlArchiveFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DbmlArchiveFactory emptyInstance = new DbmlArchiveFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
