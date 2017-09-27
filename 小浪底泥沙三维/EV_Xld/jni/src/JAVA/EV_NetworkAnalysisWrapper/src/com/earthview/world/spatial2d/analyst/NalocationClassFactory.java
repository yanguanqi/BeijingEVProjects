package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NalocationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Nalocation emptyInstance = new Nalocation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
