package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodValueListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodValueList emptyInstance = new LodValueList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
