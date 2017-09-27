package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqQuadTreeParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObqQuadTreeParam emptyInstance = new ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
