package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatticeFontCacheClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LatticeFontCache emptyInstance = new LatticeFontCache(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
