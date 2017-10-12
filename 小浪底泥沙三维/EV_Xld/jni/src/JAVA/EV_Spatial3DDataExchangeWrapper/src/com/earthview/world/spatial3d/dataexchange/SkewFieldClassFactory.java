package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkewFieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SkewField emptyInstance = new SkewField(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
