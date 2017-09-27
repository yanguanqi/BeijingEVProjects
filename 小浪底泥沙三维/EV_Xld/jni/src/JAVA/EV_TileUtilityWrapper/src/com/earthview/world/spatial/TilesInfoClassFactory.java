package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TilesInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TilesInfo emptyInstance = new TilesInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
