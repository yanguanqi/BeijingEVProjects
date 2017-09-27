package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BillboardSetFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BillboardSetFactory emptyInstance = new BillboardSetFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
