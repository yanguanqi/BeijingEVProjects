package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BackgroundProcessResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BackgroundProcessResult emptyInstance = new BackgroundProcessResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
