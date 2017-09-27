package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KilometerGridClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KilometerGrid emptyInstance = new KilometerGrid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
