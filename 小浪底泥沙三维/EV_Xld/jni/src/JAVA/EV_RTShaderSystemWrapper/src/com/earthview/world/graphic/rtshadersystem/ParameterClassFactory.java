package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParameterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Parameter emptyInstance = new Parameter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
