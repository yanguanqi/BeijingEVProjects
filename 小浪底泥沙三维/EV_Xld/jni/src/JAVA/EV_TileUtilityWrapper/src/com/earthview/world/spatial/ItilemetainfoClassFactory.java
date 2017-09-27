package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItilemetainfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itilemetainfo emptyInstance = new Itilemetainfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
