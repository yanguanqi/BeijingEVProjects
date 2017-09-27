package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelLODParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelLODParam emptyInstance = new ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
