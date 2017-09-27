package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BillboardChainClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BillboardChain emptyInstance = new BillboardChain(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
