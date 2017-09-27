package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BillboardChainFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BillboardChainFactory emptyInstance = new BillboardChainFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
