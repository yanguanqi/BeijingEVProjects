package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PixelCountLodStrategyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PixelCountLodStrategy emptyInstance = new PixelCountLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
