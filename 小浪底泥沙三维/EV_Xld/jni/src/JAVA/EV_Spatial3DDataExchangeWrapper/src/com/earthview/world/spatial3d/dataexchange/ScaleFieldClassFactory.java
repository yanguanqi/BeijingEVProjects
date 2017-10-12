package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleFieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleField emptyInstance = new ScaleField(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
