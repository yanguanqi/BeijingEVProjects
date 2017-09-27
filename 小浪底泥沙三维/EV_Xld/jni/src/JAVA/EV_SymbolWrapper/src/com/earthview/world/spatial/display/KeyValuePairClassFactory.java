package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KeyValuePairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KeyValuePair emptyInstance = new KeyValuePair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
