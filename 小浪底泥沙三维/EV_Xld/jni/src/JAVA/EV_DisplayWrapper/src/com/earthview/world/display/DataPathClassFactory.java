package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataPathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataPath emptyInstance = new DataPath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
