package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParameterPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParameterPtr emptyInstance = new ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
