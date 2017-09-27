package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImapsurroundClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imapsurround emptyInstance = new Imapsurround(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
