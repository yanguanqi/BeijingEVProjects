package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AppAtlasClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AppAtlas emptyInstance = new AppAtlas(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
