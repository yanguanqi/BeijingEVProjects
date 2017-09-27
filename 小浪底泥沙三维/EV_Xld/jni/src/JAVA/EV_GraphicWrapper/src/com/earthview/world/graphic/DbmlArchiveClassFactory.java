package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbmlArchiveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DbmlArchive emptyInstance = new DbmlArchive(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
