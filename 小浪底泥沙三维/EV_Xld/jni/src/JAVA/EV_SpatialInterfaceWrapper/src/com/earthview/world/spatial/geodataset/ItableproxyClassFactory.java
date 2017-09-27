package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItableproxyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itableproxy emptyInstance = new Itableproxy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
