package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BillboardSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BillboardSet emptyInstance = new BillboardSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
