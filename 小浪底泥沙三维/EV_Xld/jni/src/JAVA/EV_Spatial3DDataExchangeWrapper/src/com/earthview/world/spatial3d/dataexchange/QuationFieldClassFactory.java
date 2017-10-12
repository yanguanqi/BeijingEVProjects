package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class QuationFieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		QuationField emptyInstance = new QuationField(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
